#ifndef __TEXT_BUFFER_H__
#define __TEXT_BUFFER_H__

#include "main.h"

//forward declare
class TextBuffer;

template <typename T>
class DoublyLinkedList {
private:
    struct Node {
        T data;
        Node *next;
        Node *prev;

        Node(T data, Node *next = nullptr, Node *prev = nullptr)
            : data(data), next(next), prev(prev) {}
    };
    Node *head;
    Node *tail;
    int count;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insertAtHead(T data);
    void insertAtTail(T data);
    void insertAt(int index, T data);
    void deleteAt(int index);
    T& get(int index) const;
    int indexOf(T item) const;
    bool contains(T item) const;
    int size() const;
    void reverse();
    string toString(string (*convert2str)(T&) = 0) const;
    string concatRaw() const; 

};

class TextBuffer {
public:
    class HistoryManager {
    private:
        struct ActionRecord {
            string action;
            int cursorPos;
            char ch;

            ActionRecord(string action, int cursorPos, char ch)
                : action(action), cursorPos(cursorPos), ch(ch) {}

            ActionRecord() : action(""), cursorPos(0), ch('\0') {}
        };

        DoublyLinkedList<ActionRecord> history;

    public:
        HistoryManager();
        ~HistoryManager();

        void addAction(const string &actionName, int cursorPos, char c);
        void printHistory() const;
        int size() const;
    };

    DoublyLinkedList<char> buffer;
    int cursorPos;

    enum ActionType { INSERT, DELETE, MOVE, SORT };
    struct Action {
        ActionType type;
        int pos;
        char data;
        string snapshot; // dùng để undo lại nội dung buffer

        Action(ActionType type, int pos, char data = '\0', string snapshot = "")
            : type(type), pos(pos), data(data), snapshot(snapshot) {}

        Action() : type(INSERT), pos(0), data('\0'), snapshot("") {}
    };


    DoublyLinkedList<Action> undoStack;
    DoublyLinkedList<Action> redoStack;

private:
    HistoryManager* historyManager; // new

public:
    TextBuffer();
    ~TextBuffer();

    void insert(char c);
    void deleteChar();
    void moveCursorLeft();
    void moveCursorRight();
    void moveCursorTo(int index);
    string getContent() const;
    int getCursorPos() const;
    int findFirstOccurrence(char c) const;
    int* findAllOccurrences(char c, int &count) const;
    void sortAscending();
    void deleteAllOccurrences(char c);
    void undo();
    void redo();
    void printHistory() const {
        historyManager->printHistory();
    }
    static bool charCompare(char a, char b);
};

#endif // __TEXT_BUFFER_H__

