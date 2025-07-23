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

// ----------------- TextBuffer -----------------
TextBuffer::TextBuffer() {
    // TODO
}

TextBuffer::~TextBuffer() {
    // TODO
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