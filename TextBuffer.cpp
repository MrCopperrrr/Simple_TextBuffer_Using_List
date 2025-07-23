#include "TextBuffer.h"



// ----------------- DoublyLinkedList -----------------
template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = new Node(T()); 
    tail = new Node(T());
    head->next = tail;
    tail-> prev = head;
    count = 0;
}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    Node* current = head;
    while (current != nullptr){
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

template <typename T>
void DoublyLinkedList<T>::insertAtHead(T data){
    Node* newNode = new Node (data, head->next, head);
    head->next->prev = newNode;
    head->next = newNode;
    count++;
}

template <typename T>
void DoublyLinkedList<T>::insertAtTail(T data) {
    Node* newNode = new Node(data, tail, tail->prev);
    tail->prev->next = newNode;
    tail->prev = newNode;
    count++;
}

template <typename T>
void DoublyLinkedList<T>::insertAt(int index, T data) {
    Node* previous = head;
    Node* next = previous->next;
    Node* newNode = new Node(data, next, previous);
    if (index < 0 || index > count) {
        throw out_of_range("Index is invalid!");
    }
    for(int idx = 0; idx < index; idx++) {
        previous = previous->next;
    }
    previous->next = newNode;
    next->prev = newNode;
    count++;
}

template <typename T>
void DoublyLinkedList<T>::deleteAt(int index) {
    if (index < 0 || index >= count) {
        throw std::out_of_range("Index is invalid!");
    }
    Node* curr = head->next;
    for (int i = 0; i < index; ++i) {
        curr = curr->next;
    }
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    delete curr;
    count--;
}

template <typename T>
T& DoublyLinkedList<T>::get(int index) const {
    if (index < 0 || index >= count) {
        throw std::out_of_range("Index is invalid!");
    }
    Node* curr = head->next;
    for (int idx = 0; idx < index; ++idx) {
        curr = curr->next;
    }
    return curr->data;
}

template <typename T>
int DoublyLinkedList<T>::indexOf(T item) const {
    Node *current = head->next;
    int index = 0;
    while (current != tail) {
        if (current->data == item) { 
        return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

template<typename T>
bool DoublyLinkedList<T>::contains(T item) const {
    return indexOf(item) == -1 ? false : true;
}

template<typename T>
int DoublyLinkedList<T>::size() const {
    return count;
}

template<typename T>
void DoublyLinkedList<T>::reverse() {
    Node* current = head->next;
    Node* temp = nullptr;

    while (current != tail) {
        temp = current->next;
        std::swap(current->next, current->prev); //hoán đổi con trỏ next và prev để lật ngược 
        current = temp;
    }

    std::swap(head->next, tail->prev); //đổi head với tail lại cho đúng
    head->next->prev = head;
    tail->prev->next = tail;

}

template<typename T>
string DoublyLinkedList<T>::toString(string (*convert2str)(T&)) const {
    if (count == 0) {
        return "[]";
    }
    stringstream tostringofitem; 
    stringstream tostring;
    if (convert2str != nullptr) {
        tostringofitem << "[";
        Node *current = head->next;
        while (current != tail) {
            tostringofitem << convert2str(current->data);
            if (current->next != tail) {
                tostringofitem << ", ";
            }
            current = current->next;
        }
        tostringofitem << "]";
    } 
    else {
        Node *current = head->next;
        tostringofitem << "[";
        while (current != tail) {
            tostring << current->data;
            if (current->next != tail) {
                tostring << ", ";
            }
            current = current->next;
        }
        tostringofitem << tostring.str();
        tostringofitem << "]";
    }
    return tostringofitem.str();
}



// ----------------- TextBuffer -----------------
TextBuffer::TextBuffer() {
    this->cursorPos = 0;
}

TextBuffer::~TextBuffer() {//nothing
}

void TextBuffer::insert(char c){
    buffer.insertAt(cursorPos, c);
    undoStack.insertAtTail(Action(INSERT, cursorPos, c));
    history.addAction("Insert", cursorPos, c);
    cursorPos++;
    while(redoStack.size() >0){
        redoStack.deleteAt(redoStack.size() - 1);
    }
}

void TextBuffer::deleteChar() {
    if (cursorPos == 0) return;

    char deletedChar = buffer.get(cursorPos - 1);
    buffer.deleteAt(cursorPos - 1);

    undoStack.insertAtTail(Action(DELETE, cursorPos - 1, deletedChar));

    cursorPos--;
    while (redoStack.size() > 0) redoStack.deleteAt(redoStack.size() - 1);
}

void TextBuffer::moveCursorLeft(){
    if(cursorPos == 0) 
        throw cursor_error();
    cursorPos--;
}

void TextBuffer::moveCursorRight(){
    if(cursorPos >= buffer.size()) 
        throw cursor_error();
    cursorPos++;
}

void TextBuffer::moveCursorTo(int index){
    if(index < 0 || index > buffer.size()) 
        throw cursor_error("Index is invalid!");
    cursorPos = index;
}

string TextBuffer::getContent() const{
    stringstream content;
    for(int i = 0; i <= buffer.size(); i++){
        content << buffer.get(i);
    }
    string res = content.str();
    return res;
}

int TextBuffer::getCursorPos() const{
    return cursorPos;
}

int TextBuffer::findFirstOccurrence(char c) const {
    for (int i = 0; i < buffer.size(); i++) {
        if (buffer.get(i) == c) {
            return i;
        }
    }
    return -1;
}

int* TextBuffer::findAllOccurrences(char c, int &count) const{
    count = 0;
    int buffersize = buffer.size();

    for (int i = 0; i < buffersize; i++) {
        if (buffer.get(i) == c) {
            count++;
        }
    }

   if(count == 0) return nullptr;
   
    int* occurrences = new int[count];
    int index = 0;

    for (int i = 0; i < buffersize; i++) {
        if (buffer.get(i) == c) {
            occurrences[index++] = i;
        }
    }

    return occurrences;
}

void TextBuffer::sortAscending() {
    int n = buffer.size();
    if (n <= 1) return;

    char* arr = new char[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = buffer.get(i);
    }

    auto mergeSort = [](char* a, int left, int right, auto& mergeSortRef) -> void {
        if (left >= right) return;

        int mid = (left + right) / 2;
        mergeSortRef(a, left, mid, mergeSortRef);
        mergeSortRef(a, mid + 1, right, mergeSortRef);

        int n1 = mid - left + 1;
        int n2 = right - mid;

        char* L = new char[n1];
        char* R = new char[n2];

        for (int i = 0; i < n1; ++i) L[i] = a[left + i];
        for (int i = 0; i < n2; ++i) R[i] = a[mid + 1 + i];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) a[k++] = L[i++];
            else a[k++] = R[j++];
        }
        while (i < n1) a[k++] = L[i++];
        while (j < n2) a[k++] = R[j++];

        delete[] L;
        delete[] R;
    };

    mergeSort(arr, 0, n - 1, mergeSort);

    for (int i = n - 1; i >= 0; --i) {
        buffer.deleteAt(i);
    }

    for (int i = 0; i < n; ++i) {
        buffer.insertAtTail(arr[i]);
    }

    delete[] arr;
    cursorPos = 0;
}

void TextBuffer::deleteAllOccurrences(char c) {
    int originalSize = buffer.size();
    int deletedCount = 0;
    int i = 0;

    while (i < buffer.size()) {
        if (buffer.get(i) == c) {
            buffer.deleteAt(i);
            if (i < cursorPos) cursorPos--;
            deletedCount++;
        } else {
            ++i;
        }
    }

    // update con trỏ sau xóa
    if (deletedCount > 0) cursorPos = 0;

    // clear buffer 
    while (redoStack.size() > 0) redoStack.deleteAt(redoStack.size() - 1);
}

void TextBuffer::undo() {
    if (undoStack.size() == 0) return;

    Action last = undoStack.get(undoStack.size() - 1); // lấy action cuối
    undoStack.deleteAt(undoStack.size() - 1); // pop ra

    if (last.type == INSERT) { 
        buffer.deleteAt(last.pos); 
        cursorPos = last.pos;
        redoStack.insertAtTail(last); // redo sẽ re-insert
    }
    else if (last.type == DELETE) { 
        buffer.insertAt(last.pos, last.data);
        cursorPos = last.pos + 1;
        redoStack.insertAtTail(last); // redo sẽ re-delete
    }
}

void TextBuffer::redo() {
    if (redoStack.size() == 0) return;

    Action last = redoStack.get(redoStack.size() - 1);

    if (last.type == INSERT || last.type == DELETE) return;

    redoStack.deleteAt(redoStack.size() - 1);

    if (last.type == MOVE) {
        if (last.data == 'L') moveCursorLeft();
        else if (last.data == 'R') moveCursorRight();
        else if (last.data == 'J') moveCursorTo(last.pos);  
        undoStack.insertAtTail(last);
    }
}



// ----------------- HistoryManager -----------------
TextBuffer::HistoryManager::HistoryManager() {//nothing
}

TextBuffer::HistoryManager::~HistoryManager() {//nothing
}

void TextBuffer::HistoryManager::addAction(const string &actionName, int cursorPos, char c) {
    ActionRecord record(actionName, cursorPos, c);
    history.insertAtTail(record);
}

void TextBuffer::HistoryManager::printHistory() const {
    std::cout << "[";
    for (int i = 0; i < history.size(); ++i) {
        const ActionRecord& act = history.get(i);
        std::cout << "(" << act.action << ", " << act.cursorPos << ", ";
        if (act.ch == '\0') std::cout << "\\0";
        else std::cout << act.ch;
        std::cout << ")";
        if (i < history.size() - 1) std::cout << ", ";
    }
    std::cout << "]\n";
}

int TextBuffer::HistoryManager::size() const {
    return history.size();
}


// Explicit template instantiation for char, string, int, double, float, and Point
template class DoublyLinkedList<char>;
template class DoublyLinkedList<string>;
template class DoublyLinkedList<int>;
template class DoublyLinkedList<double>;
template class DoublyLinkedList<float>;
template class DoublyLinkedList<Point>;