#include "TextBuffer.h"

// ----------------- DoublyLinkedList -----------------
template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = new Node(T(), nullptr, nullptr);
    tail = new Node(T(), nullptr, head);
    head->next = tail;
    count = 0;
}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    Node* curr = head;
    while(curr != nullptr){
        Node *nodeNext = curr->next;
        delete curr;
        curr = nodeNext;
    }
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