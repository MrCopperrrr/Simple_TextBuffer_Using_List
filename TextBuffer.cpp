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


// ----------------- HistoryManager -----------------
TextBuffer::HistoryManager::HistoryManager() {
    // TODO
}

TextBuffer::HistoryManager::~HistoryManager() {
    // TODO
}



// Explicit template instantiation for char, string, int, double, float, and Point
template class DoublyLinkedList<char>;
template class DoublyLinkedList<string>;
template class DoublyLinkedList<int>;
template class DoublyLinkedList<double>;
template class DoublyLinkedList<float>;
template class DoublyLinkedList<Point>;