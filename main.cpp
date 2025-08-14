#include "TextBuffer.h"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define ORANGE "\033[38;5;208m"
#define RESET "\033[0m"


int num_correct = 0;
int num_incorrect = 0;

template<typename T>
void test_1(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(1);

    string result = list->toString();
    string expect = "[1]";
    if (result == expect) 
    {
        cout << GREEN << "Test 1 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 1 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_2(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(1);
    list->insertAtHead(2);

    string result = list->toString();
    string expect = "[2, 1]";
    if (result == expect) 
    {
        cout << GREEN << "Test 2 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 2 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_3(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(1);
    list->insertAtHead(2);
    list->insertAtHead(3);
    list->insertAtHead(4);

    string result = list->toString();
    string expect = "[4, 3, 2, 1]";
    if (result == expect) 
    {
        cout << GREEN << "Test 3 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 3 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_4(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(1);
    list->insertAtHead(2);
    list->insertAtHead(3);
    list->insertAtHead(4);

    int result = list->indexOf(4);
    int expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 4 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 4 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_5(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(1);
    list->insertAtHead(2);
    list->insertAtHead(3);
    list->insertAtHead(4);

    int result = list->indexOf(1);
    int expect = 3;
    if (result == expect) 
    {
        cout << GREEN << "Test 5 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 5 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_6(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtTail(1);

    string result = list->toString();
    string expect = "[1]";
    if (result == expect) 
    {
        cout << GREEN << "Test 6 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 6 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_7(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtTail(1);
    list->insertAtTail(2);

    string result = list->toString();
    string expect = "[1, 2]";
    if (result == expect) 
    {
        cout << GREEN << "Test 7 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 7 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_8(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtTail(1);
    list->insertAtTail(2);
    list->insertAtTail(3);
    list->insertAtTail(4);

    string result = list->toString();
    string expect = "[1, 2, 3, 4]";
    if (result == expect) 
    {
        cout << GREEN << "Test 8 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 8 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_9(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtTail(1);
    list->insertAtTail(2);
    list->insertAtTail(3);
    list->insertAtTail(4);

    int result = list->indexOf(1);
    int expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 9 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 9 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_10(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtTail(1);
    list->insertAtTail(2);
    list->insertAtTail(3);
    list->insertAtTail(4);

    int result = list->indexOf(4);
    int expect = 3;
    if (result == expect) 
    {
        cout << GREEN << "Test 10 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 10 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_11(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);

    string result = list->toString();
    string expect = "[0]";
    if (result == expect) 
    {
        cout << GREEN << "Test 11 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 11 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_12(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(0, 1);

    string result = list->toString();
    string expect = "[1, 0]";
    if (result == expect) 
    {
        cout << GREEN << "Test 12 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 12 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_13(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(0, 1);
    list->insertAt(2, 2);

    string result = list->toString();
    string expect = "[1, 0, 2]";
    if (result == expect) 
    {
        cout << GREEN << "Test 13 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 13 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_14(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(0, 1);
    list->insertAt(2, 2);
    list->insertAt(1, 3);

    string result = list->toString();
    string expect = "[1, 3, 0, 2]";
    if (result == expect) 
    {
        cout << GREEN << "Test 14 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 14 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}
template<typename T>
void test_15(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(0, 1);
    list->insertAt(2, 2);
    list->insertAt(1, 3);
    list->insertAt(2, 4);

    string result = list->toString();
    string expect = "[1, 3, 4, 0, 2]";
    if (result == expect) 
    {
        cout << GREEN << "Test 15 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 15 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_16(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(0, 1);
    list->insertAt(2, 2);
    list->insertAt(1, 3);
    list->insertAt(2, 4);
    string result;
    try {
        list->insertAt(6, 5);  
        result = list->toString();
    } catch (const std::out_of_range& e) {
        result = e.what();  
    }
    string expect = "Index is invalid!";
    if (result == expect) 
    {
        cout << GREEN << "Test 16 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 16 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_17(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(0, 1);
    list->insertAt(2, 2);
    list->insertAt(1, 3);
    list->insertAt(2, 4);
    string result;
    try {
        list->insertAt(-1, 5);  
        result = list->toString();
    } catch (const std::out_of_range& e) {
        result = e.what();  
    }
    string expect = "Index is invalid!";
    if (result == expect) 
    {
        cout << GREEN << "Test 17 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 17 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_18(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    string result;
    try {
        list->deleteAt(-1);  
        result = list->toString();
    } catch (const std::out_of_range& e) {
        result = e.what();  
    }
    string expect = "Index is invalid!";
    if (result == expect) 
    {
        cout << GREEN << "Test 18 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 18 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_19(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    string result;
    try {
        list->deleteAt(0);  
        result = list->toString();
    } catch (const std::out_of_range& e) {
        result = e.what();  
    }
    string expect = "Index is invalid!";
    if (result == expect) 
    {
        cout << GREEN << "Test 19 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 19 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_20(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->deleteAt(0);
    string result = list->toString();
    string expect = "[]";
    if (result == expect) 
    {
        cout << GREEN << "Test 20 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 20 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_21(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->deleteAt(1);
    string result = list->toString();
    string expect = "[0]";
    if (result == expect) 
    {
        cout << GREEN << "Test 21 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 21 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_22(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->deleteAt(1);
    string result = list->toString();
    string expect = "[0, 2]";
    if (result == expect) 
    {
        cout << GREEN << "Test 22 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 22 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_23(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    list->deleteAt(2);
    string result = list->toString();
    string expect = "[0, 1, 3]";
    if (result == expect) 
    {
        cout << GREEN << "Test 23 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 23 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_24(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    list->deleteAt(0);
    list->deleteAt(2);
    string result = list->toString();
    string expect = "[1, 2]";
    if (result == expect) 
    {
        cout << GREEN << "Test 24 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 24 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_25(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    list->deleteAt(0);
    list->deleteAt(2);
    list->deleteAt(1);
    list->deleteAt(0);
    string result = list->toString();
    string expect = "[]";
    if (result == expect) 
    {
        cout << GREEN << "Test 25 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 25 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_26(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    string result;
    int idx;
    try {
        idx = list->get(-1);
    } catch (const std::out_of_range& e) {
        result = e.what();  
    }
    string expect = "Index is invalid!";
    if (result == expect) 
    {
        cout << GREEN << "Test 26 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 26 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << list->get(-1) << endl;
        cout << ORANGE << "Expect: "  << expect << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_27(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    string result;
    int idx;
    try {
        idx = list->get(4);
    } catch (const std::out_of_range& e) {
        result = e.what();  
    }
    string expect = "Index is invalid!";
    if (result == expect) 
    {
        cout << GREEN << "Test 27 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 27 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << list->get(4) << endl;
        cout << ORANGE << "Expect: "  << expect << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_28(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    int result = list->get(0);
    int expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 28 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 28 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_29(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    list->insertAt(4, 4);
    int result = list->get(2);
    int expect = 2;
    if (result == expect) 
    {
        cout << GREEN << "Test 29 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 29 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_30(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    list->insertAt(4, 4);
    int result = list->get(3);
    int expect = 3;
    if (result == expect) 
    {
        cout << GREEN << "Test 30 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 30 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_31(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    int result = list->indexOf(0);
    int expect = -1;
    if (result == expect) 
    {
        cout << GREEN << "Test 31 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 31 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_32(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    int result = list->indexOf(1);
    int expect = -1;
    if (result == expect) 
    {
        cout << GREEN << "Test 32 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 32 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_33(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    int result = list->indexOf(2);
    int expect = 2;
    if (result == expect) 
    {
        cout << GREEN << "Test 33 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 33 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_34(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    int result = list->indexOf(2);
    int expect = 2;
    if (result == expect) 
    {
        cout << GREEN << "Test 34 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 34 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_35(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    int result = list->indexOf(4);
    int expect = -1;
    if (result == expect) 
    {
        cout << GREEN << "Test 35 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 35 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_36(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    bool result = list->contains(-1);
    bool expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 36 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 36 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_37(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    bool result = list->contains(0);
    bool expect = 1;
    if (result == expect) 
    {
        cout << GREEN << "Test 37 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 37 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_38(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    bool result = list->contains(3);
    bool expect = 1;
    if (result == expect) 
    {
        cout << GREEN << "Test 38 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 38 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_39(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAt(0, 0);
    list->insertAt(1, 1);
    list->insertAt(2, 2);
    list->insertAt(3, 3);
    bool result = list->contains(4);
    bool expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 39 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 39 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_40(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    bool result = list->contains(0);
    bool expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 40 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 40 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_41(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    int result = list->size();
    int expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 41 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 41 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_42(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->insertAtHead(1);
    list->insertAtHead(2);
    list->insertAtHead(3);
    list->insertAtHead(4);
    list->insertAtHead(5);
    int result = list->size();
    int expect = 6;
    if (result == expect) 
    {
        cout << GREEN << "Test 42 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 42 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_43(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->deleteAt(0);
    list->insertAtHead(1);
    list->insertAtHead(2);
    list->deleteAt(1);
    list->insertAtHead(3);
    list->insertAtHead(4);
    list->deleteAt(2);
    list->insertAtHead(5);
    int result = list->size();
    int expect = 3;
    if (result == expect) 
    {
        cout << GREEN << "Test 43 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 43 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_44(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->insertAtHead(1);
    list->insertAtHead(2);
    list->insertAtHead(3);
    list->insertAtHead(4);
    list->insertAtHead(5);
    list->~DoublyLinkedList();
    int result = list->size();
    int expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 44 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 44 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
}

template<typename T>
void test_45(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->deleteAt(0);
    list->insertAtHead(1);
    list->insertAt(0, 1);
    list->insertAtHead(2);
    list->deleteAt(1);
    list->insertAtHead(3);
    list->insertAt(1, 2);
    list->insertAtHead(4);
    list->deleteAt(2);
    list->insertAtHead(5);
    list->insertAt(2, 3);
    int result = list->size();
    int expect = 6;
    if (result == expect) 
    {
        cout << GREEN << "Test 45 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 45 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_46(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->reverse();
    string result = list->toString();
    string expect = "[]";
    if (result == expect) 
    {
        cout << GREEN << "Test 46 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 46 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_47(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->reverse();
    string result = list->toString();
    string expect = "[0]";
    if (result == expect) 
    {
        cout << GREEN << "Test 47 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 47 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_48(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->insertAtHead(1);
    list->reverse();
    string result = list->toString();
    string expect = "[0, 1]";
    if (result == expect) 
    {
        cout << GREEN << "Test 48 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 48 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_49(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->insertAtHead(1);
    list->insertAtTail(2);
    list->reverse();
    string result = list->toString();
    string expect = "[2, 0, 1]";
    if (result == expect) 
    {
        cout << GREEN << "Test 49 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 49 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_50(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->insertAtHead(1);
    list->insertAtTail(2);
    list->insertAt(1, 3);
    list->reverse();
    string result = list->toString();
    string expect = "[2, 0, 3, 1]";
    if (result == expect) 
    {
        cout << GREEN << "Test 50 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 50 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

template<typename T>
void test_51(DoublyLinkedList<T> *list) {
    list = new DoublyLinkedList<T>();
    list->insertAtHead(0);
    list->insertAtHead(1);
    list->insertAtTail(2);
    list->insertAt(1, 3);
    list->insertAtTail(4);
    list->insertAtHead(2);
    list->insertAt(2, 5);
    list->reverse();
    string result = list->toString();
    string expect = "[4, 2, 0, 3, 5, 1, 2]";
    if (result == expect) 
    {
        cout << GREEN << "Test 51 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 51 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    list->~DoublyLinkedList();
}

void test_52(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    string result = buffer->getContent();
    string expect = "a";
    if (result == expect) 
    {
        cout << GREEN << "Test 52 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 52 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_53(TextBuffer* buffer) {
    buffer = new TextBuffer();
    string result = buffer->getContent();
    string expect = "";
    if (result == expect) 
    {
        cout << GREEN << "Test 53 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 53 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_54(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    string result = buffer->getContent();
    string expect = "abcd";
    if (result == expect) 
    {
        cout << GREEN << "Test 54 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 54 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_55(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->moveCursorLeft();
    buffer->insert('b');
    buffer->moveCursorRight();
    buffer->insert('c');
    buffer->moveCursorLeft();
    buffer->insert('d');
    // badc
    string result = buffer->getContent();
    string expect = "badc";
    if (result == expect) 
    {
        cout << GREEN << "Test 55 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 55 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_56(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->moveCursorLeft();
    buffer->insert('b');
    buffer->moveCursorLeft();
    buffer->insert('c');
    buffer->moveCursorLeft();
    buffer->insert('d');
    // badc
    string result = buffer->getContent();
    string expect = "dcba";
    if (result == expect) 
    {
        cout << GREEN << "Test 56 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 56 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_57(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->deleteChar();
    string result = buffer->getContent();
    string expect = "";
    if (result == expect) 
    {
        cout << GREEN << "Test 57 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 57 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_58(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->deleteChar();
    string result = buffer->getContent();
    string expect = "";
    if (result == expect) 
    {
        cout << GREEN << "Test 58 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 58 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_59(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('B');
    buffer->deleteChar();
    string result = buffer->getContent();
    string expect = "a";
    if (result == expect) 
    {
        cout << GREEN << "Test 59 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 59 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_60(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->moveCursorLeft();
    buffer->moveCursorLeft();
    buffer->moveCursorLeft();
    buffer->deleteChar();
    string result = buffer->getContent();
    string expect = "abc";
    if (result == expect) 
    {
        cout << GREEN << "Test 60 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 60 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_61(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->moveCursorLeft();
    buffer->deleteChar();
    buffer->insert('b');
    buffer->moveCursorRight();
    buffer->insert('c');
    buffer->deleteChar();
    buffer->insert('A');
    buffer->deleteChar();
    buffer->moveCursorLeft();
    buffer->insert('d');
    buffer->deleteChar();
    string result = buffer->getContent();
    string expect = "ba";
    if (result == expect) 
    {
        cout << GREEN << "Test 61 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 61 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_62(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->moveCursorLeft();
    buffer->insert('b');
    buffer->moveCursorLeft();
    buffer->insert('c');
    buffer->insert('A');
    buffer->insert('e');
    buffer->moveCursorLeft();
    buffer->deleteChar();
    buffer->insert('f');
    buffer->moveCursorLeft();
    buffer->insert('d');
    buffer->moveCursorLeft();
    int result = buffer->getCursorPos();
    int expect = 1;
    if (result == expect) 
    {
        cout << GREEN << "Test 62 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 62 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_63(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->moveCursorLeft();
    buffer->insert('b');
    buffer->moveCursorLeft();
    buffer->insert('c');
    buffer->insert('A');
    buffer->insert('e');
    buffer->moveCursorLeft();
    buffer->deleteChar();
    buffer->insert('f');
    buffer->moveCursorLeft();
    buffer->insert('d');
    buffer->moveCursorLeft();
    buffer->moveCursorLeft();
    int cursorPos;
    string result;
    try {
        buffer->moveCursorLeft();
        cursorPos = buffer->getCursorPos();
    } catch (const cursor_error& e) {
        result = e.what();  
    }

    string expect = "Cursor error!";
    if (result == expect) 
    {
        cout << GREEN << "Test 63 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 63 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_64(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('A');
    buffer->insert('e');
    buffer->deleteChar();
    buffer->insert('f');
    buffer->insert('d');
    buffer->moveCursorLeft();
    // abcAfd
    int result = buffer->getCursorPos();
    int expect = 5;
    if (result == expect) 
    {
        cout << GREEN << "Test 64 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 64 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_65(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->moveCursorLeft();
    buffer->insert('c');
    buffer->insert('A');
    buffer->moveCursorLeft();
    buffer->insert('e');
    buffer->insert('f');
    buffer->moveCursorLeft();
    buffer->insert('d');
    // acedfAb
    int result = buffer->getCursorPos();
    int expect = 4;
    if (result == expect) 
    {
        cout << GREEN << "Test 65 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 65 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_66(TextBuffer* buffer) {
    buffer = new TextBuffer();
    string result;
    try {
        buffer->moveCursorRight();
    } catch (const cursor_error& e) {
        result = e.what();
    }
    // acedfAb
    string expect = "Cursor error!";
    if (result == expect) 
    {
        cout << GREEN << "Test 66 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 66 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_67(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->moveCursorLeft();
    buffer->insert('b');
    buffer->moveCursorLeft();
    buffer->insert('c');
    buffer->moveCursorRight();
    buffer->insert('A');
    buffer->moveCursorLeft();
    buffer->insert('e');
    buffer->moveCursorLeft();
    buffer->insert('f');
    buffer->moveCursorRight();
    buffer->insert('d');
    buffer->moveCursorRight();
    // cbfedAa
    int result = buffer->getCursorPos();
    int expect = 6;
    if (result == expect) 
    {
        cout << GREEN << "Test 67 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 67 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_68(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('A');
    buffer->insert('e');
    buffer->insert('f');
    buffer->insert('d');
    string result;
    try {
        buffer->moveCursorRight();
    } catch (const cursor_error& e) {
        result = e.what();
    }
    // acedfAb
    string expect = "Cursor error!";
    if (result == expect) 
    {
        cout << GREEN << "Test 68 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 68 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_69(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->deleteChar();
    buffer->insert('c');
    buffer->moveCursorLeft();
    buffer->insert('A');
    buffer->deleteChar();
    buffer->deleteChar();
    buffer->insert('e');
    buffer->moveCursorRight();
    buffer->insert('f');
    buffer->deleteChar();
    buffer->insert('d');
    int result = buffer->getCursorPos();
    int expect = 3;
    if (result == expect) 
    {
        cout << GREEN << "Test 69 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 69 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_70(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->moveCursorTo(0);
    int result = buffer->getCursorPos();
    int expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 70 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 70 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_71(TextBuffer* buffer) {
    buffer = new TextBuffer();
    string result;
    try {
        buffer->moveCursorTo(1);
    } catch (const out_of_range& e) {
        result = e.what();
    }
    string expect = "Index is invalid!";
    if (result == expect) 
    {
        cout << GREEN << "Test 71 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 71 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_72(TextBuffer* buffer) {
    buffer = new TextBuffer();
    string result;
    try {
        buffer->moveCursorTo(-1);
    } catch (const out_of_range& e) {
        result = e.what();
    }
    string expect = "Index is invalid!";
    if (result == expect) 
    {
        cout << GREEN << "Test 72 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 72 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_73(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    buffer->moveCursorTo(2);
    int result = buffer->getCursorPos();
    int expect = 2;
    if (result == expect) 
    {
        cout << GREEN << "Test 73 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 73 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_74(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    buffer->moveCursorTo(3);
    int result = buffer->getCursorPos();
    int expect = 3;
    if (result == expect) 
    {
        cout << GREEN << "Test 74 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 74 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_75(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    buffer->moveCursorTo(5);
    int result = buffer->getCursorPos();
    int expect = 5;
    if (result == expect) 
    {
        cout << GREEN << "Test 75 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 75 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_76(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    int result = buffer->findFirstOccurrence('f');
    int expect = -1;
    if (result == expect) 
    {
        cout << GREEN << "Test 76 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 76 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_77(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    int result = buffer->findFirstOccurrence('a');
    int expect = 0;
    if (result == expect) 
    {
        cout << GREEN << "Test 77 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 77 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_78(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    int result = buffer->findFirstOccurrence('c');
    int expect = 2;
    if (result == expect) 
    {
        cout << GREEN << "Test 78 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 78 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_79(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    int result = buffer->findFirstOccurrence('e');
    int expect = 4;
    if (result == expect) 
    {
        cout << GREEN << "Test 79 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 79 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_80(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    int result = buffer->findFirstOccurrence('\0');
    int expect = -1;
    if (result == expect) 
    {
        cout << GREEN << "Test 80 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 80 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_81(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('d');
    buffer->insert('e');
    int count = 0;
    int* arr = buffer->findAllOccurrences('f', count);
    stringstream ss;
    ss << "[";
    for (int i = 0; i < count; i++)
    {
        ss << arr[i];
        if (i < count - 1)
        {
            ss << ",";
        }
    }
    ss << "]";
    string result = ss.str();
    string expect = "[]";
    if (result == expect) 
    {
        cout << GREEN << "Test 81 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 81 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_82(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('e');
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('a');
    buffer->insert('c');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('a');
    buffer->insert('d');
    buffer->insert('e');
    int count = 0;
    int* arr = buffer->findAllOccurrences('a', count);
    stringstream ss;
    ss << "[";
    for (int i = 0; i < count; i++)
    {
        ss << arr[i];
        if (i < count - 1)
        {
            ss << ", ";
        }
    }
    ss << "]";
    string result = ss.str();
    string expect = "[0, 2, 4, 8]";
    if (result == expect) 
    {
        cout << GREEN << "Test 82 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 82 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_83(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('e');
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('a');
    buffer->insert('c');
    buffer->insert('b');
    buffer->insert('c');
    buffer->insert('a');
    buffer->insert('d');
    buffer->insert('e');
    int count = 0;
    int* arr = buffer->findAllOccurrences('e', count);
    stringstream ss;
    ss << "[";
    for (int i = 0; i < count; i++)
    {
        ss << arr[i];
        if (i < count - 1)
        {
            ss << ", ";
        }
    }
    ss << "]";
    string result = ss.str();
    string expect = "[1, 10]";
    if (result == expect) 
    {
        cout << GREEN << "Test 83 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 83 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_84(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('e');
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('a');
    buffer->insert('d');
    buffer->insert('e');
    buffer->insert('c');
    buffer->insert('C');
    buffer->insert('c');
    int count = 0;
    int* arr = buffer->findAllOccurrences('c', count);
    stringstream ss;
    ss << "[";
    for (int i = 0; i < count; i++)
    {
        ss << arr[i];
        if (i < count - 1)
        {
            ss << ", ";
        }
    }
    ss << "]";
    string result = ss.str();
    string expect = "[9, 11]";
    if (result == expect) 
    {
        cout << GREEN << "Test 84 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 84 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_85(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('e');
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('a');
    buffer->insert('d');
    buffer->insert('e');
    buffer->insert('c');
    buffer->insert('C');
    buffer->insert('c');
    int count = 0;
    int* arr = buffer->findAllOccurrences('\0', count);
    stringstream ss;
    ss << "[";
    for (int i = 0; i < count; i++)
    {
        ss << arr[i];
        if (i < count - 1)
        {
            ss << ", ";
        }
    }
    ss << "]";
    string result = ss.str();
    string expect = "[]";
    if (result == expect) 
    {
        cout << GREEN << "Test 85 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 85 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_86(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->sortAscending();
    string result = buffer->getContent();
    string expect = "";
    if (result == expect) 
    {
        cout << GREEN << "Test 86 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 86 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_87(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->sortAscending();
    string result = buffer->getContent();
    string expect = "a";
    if (result == expect) 
    {
        cout << GREEN << "Test 87 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 87 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_88(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('A');
    buffer->insert('z');
    buffer->insert('A');
    buffer->insert('c');
    buffer->insert('Y');
    buffer->insert('d');
    buffer->insert('l');
    buffer->insert('!');
    buffer->insert('E');
    buffer->insert('f');
    buffer->insert('@');
    buffer->insert('L');
    buffer->insert('e');
    buffer->sortAscending();
    string result = buffer->getContent();
    string expect = "!@AAacdEefLlYz";
    if (result == expect) 
    {
        cout << GREEN << "Test 88 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 88 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_89(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('A');
    buffer->insert('a');
    buffer->insert('a');
    buffer->insert('F');
    buffer->insert('a');
    buffer->insert('c');
    buffer->insert('Y');
    buffer->insert('e');
    buffer->sortAscending();
    string result = buffer->getContent();
    string expect = "AaaaabceFY";
    if (result == expect) 
    {
        cout << GREEN << "Test 89 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 89 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}
void test_90(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('!');
    buffer->insert('@');
    buffer->insert('a');
    buffer->insert('A');
    buffer->insert('&');
    buffer->insert('a');
    buffer->insert('b');
    buffer->insert('4');
    buffer->insert('1');
    buffer->insert('*');
    buffer->sortAscending();
    string result = buffer->getContent();
    string expect = "!&*14@Aaab";
    if (result == expect) 
    {
        cout << GREEN << "Test 90 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 90 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result <<  RESET << endl;
        cout << ORANGE << "Expect: "  << expect <<  RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_91(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('A');
    buffer->insert('z');
    buffer->insert('A');
    buffer->insert('c');
    buffer->insert('Y');
    buffer->insert('d');
    buffer->insert('l');
    buffer->insert('!');
    buffer->insert('E');
    buffer->insert('f');
    buffer->insert('@');
    buffer->insert('L');
    buffer->insert('e');
    buffer->deleteAllOccurrences('A');
    buffer->deleteAllOccurrences('a');
    int cursorPos = buffer->getCursorPos();
    string result = buffer->getContent();
    string expect = "zcYdl!Ef@Le";
    if (result == expect && cursorPos == 0) 
    {
        cout << GREEN << "Test 91 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 91 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET <<endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}


void test_92(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->deleteAllOccurrences('a');
    int cursorPos = buffer->getCursorPos();
    string result = buffer->getContent();
    string expect = "";
    if (result == expect && cursorPos == 0) 
    {
        cout << GREEN << "Test 92 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 92 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_93(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');
    buffer->insert('A');
    buffer->insert('z');
    buffer->insert('A');
    buffer->insert('c');
    buffer->insert('Y');
    buffer->insert('d');
    buffer->insert('l');
    buffer->insert('!');
    buffer->insert('E');
    buffer->insert('f');
    buffer->insert('@');
    buffer->insert('L');
    buffer->insert('e');
    buffer->deleteAllOccurrences('g');
    int cursorPos = buffer->getCursorPos();
    string result = buffer->getContent();
    string expect = "aAzAcYdl!Ef@Le";
    if (result == expect && cursorPos == 14) 
    {
        cout << GREEN << "Test 93 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 93 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos << RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_94(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a'); // a|
    buffer->deleteChar(); // |
    buffer->insert('b'); // b|
    buffer->insert('A'); //  bA|
    buffer->moveCursorLeft(); // b|A 
    buffer->insert('a'); // ba|A
    buffer->deleteChar(); // b|A
    buffer->insert('a'); // ba|A
    buffer->insert('F'); // baF|A
    buffer->moveCursorRight(); // baFA|
    buffer->insert('a'); // baFAa|
    buffer->insert('c'); // baFAac|
    buffer->sortAscending(); // AaabcF|
    buffer->deleteChar(); // Aaabc|
    buffer->insert('Y'); // AaabcY|
    buffer->moveCursorLeft(); // Aaabc|Y
    buffer->insert('e'); // Aaabce|Y
    buffer->moveCursorLeft(); // Aaabc|eY
    buffer->sortAscending(); // Aaabc|eY
    buffer->deleteAllOccurrences('a'); // Abc|eY
    buffer->undo(); // Aaabc|ey
    buffer->undo(); // Aaabc|eY
    buffer->undo(); // Aaabce|Y
    buffer->undo(); // Aaabc|Y
    buffer->undo(); // AaabcY|
    buffer->undo(); // Aaabc|
    buffer->undo(); // AaabcF|
    buffer->undo(); // baFAac|
    buffer->undo(); // baFAa|
    buffer->undo(); // baFA|
    int cursorPos = buffer->getCursorPos();
    string result = buffer->getContent();
    string expect = "baFA";
    if (result == expect && cursorPos == 4) 
    {
        cout << GREEN << "Test 94 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 94 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos <<  RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_95(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a'); // a|
    buffer->deleteChar(); // |
    buffer->insert('b'); // b|
    buffer->insert('A'); //  bA|
    buffer->moveCursorLeft(); // b|A 
    buffer->insert('a'); // ba|A
    buffer->deleteChar(); // b|A
    buffer->insert('a'); // ba|A
    buffer->insert('F'); // baF|A
    buffer->moveCursorRight(); // baFA|
    buffer->insert('a'); // baFAa|
    buffer->insert('c'); // baFAac|
    buffer->sortAscending(); // AaabcF|
    buffer->deleteChar(); // Aaabc|
    buffer->insert('Y'); // AaabcY|
    buffer->moveCursorLeft(); // Aaabc|Y
    buffer->insert('e'); // Aaabce|Y
    buffer->moveCursorLeft(); // Aaabc|eY
    buffer->sortAscending(); // Aaabc|eY
    buffer->deleteAllOccurrences('a'); // Abc|eY
    buffer->undo(); // Aaabc|ey
    buffer->undo(); // Aaabc|eY
    buffer->undo(); // Aaabce|Y
    buffer->undo(); // Aaabc|Y
    buffer->undo(); // AaabcY|
    buffer->undo(); // Aaabc|
    buffer->undo(); // AaabcF|
    buffer->undo(); // baFAac|
    buffer->undo(); // baFAa|
    buffer->undo(); // baFA|
    buffer->undo();
    buffer->undo();
    buffer->undo();
    buffer->undo();
    buffer->undo();
    buffer->undo();
    buffer->undo();
    buffer->undo();
    buffer->undo();
    buffer->undo();
    int cursorPos = buffer->getCursorPos();
    string result = buffer->getContent();
    string expect = "";
    if (result == expect && cursorPos == 0) 
    {
        cout << GREEN << "Test 95 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 95 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos <<  RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_96(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');                // a|
    buffer->deleteChar();               // |
    buffer->insert('b');                // b|
    buffer->insert('A');                // bA|
    buffer->moveCursorLeft();           // b|A 
    buffer->insert('a');                // ba|A
    buffer->deleteChar();               // b|A
    buffer->insert('a');                // ba|A
    buffer->insert('F');                // baF|A
    buffer->moveCursorRight();          // baFA|
    buffer->insert('a');                // baFAa|
    buffer->insert('c');                // baFAac|
    buffer->sortAscending();            // AaabcF|
    buffer->deleteChar();               // Aaabc|
    buffer->insert('Y');                // AaabcY|
    buffer->moveCursorLeft();           // Aaabc|Y
    buffer->insert('e');                // Aaabce|Y
    buffer->moveCursorLeft();           // Aaabc|eY
    buffer->sortAscending();            // Aaabc|eY
    buffer->deleteAllOccurrences('a');  // Abc|eY
    buffer->undo(); // Aaabc|ey
    buffer->undo(); // Aaabc|eY
    buffer->undo(); // Aaabce|Y
    buffer->undo(); // Aaabc|Y
    buffer->undo(); // AaabcY|
    buffer->undo(); // Aaabc|
    buffer->undo(); // AaabcF|
    buffer->undo(); // baFAac|
    buffer->undo(); // baFAa|
    buffer->undo(); // baFA|
    buffer->undo(); // baF|A
    buffer->undo(); // ba|A
    buffer->undo(); // b|A
    buffer->undo(); // ba|A
    buffer->undo(); // b|A 
    buffer->undo(); // bA|
    buffer->undo(); // b|
    buffer->undo(); // |
    buffer->undo(); // a|
    buffer->undo(); // |

    buffer->redo(); // a|
    buffer->redo(); // |
    buffer->redo(); // b|
    buffer->redo(); // bA|
    buffer->redo(); // b|A
    buffer->redo(); // ba|A 
    buffer->redo(); // b|A
    buffer->redo(); // ba|A
    buffer->redo(); // baF|A
    buffer->redo(); // baFA|
    int cursorPos = buffer->getCursorPos();
    string result = buffer->getContent();
    string expect = "baFA";
    if (result == expect && cursorPos == 4) 
    {
        cout << GREEN << "Test 96 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 96 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos <<  RESET << endl;
        cout << ORANGE << "Expect: "  << expect << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_97(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');                // a|
    buffer->deleteChar();               // |
    buffer->insert('b');                // b|
    buffer->insert('A');                // bA|
    buffer->moveCursorLeft();           // b|A 
    buffer->insert('a');                // ba|A
    buffer->deleteChar();               // b|A
    buffer->insert('a');                // ba|A
    buffer->insert('F');                // baF|A
    buffer->moveCursorRight();          // baFA|
    buffer->insert('a');                // baFAa|
    buffer->insert('c');                // baFAac|
    buffer->sortAscending();            // AaabcF|
    buffer->deleteChar();               // Aaabc|
    buffer->insert('Y');                // AaabcY|
    buffer->moveCursorLeft();           // Aaabc|Y
    buffer->insert('e');                // Aaabce|Y
    buffer->moveCursorLeft();           // Aaabc|eY
    buffer->sortAscending();            // Aaabc|eY
    buffer->deleteAllOccurrences('a');  // Abc|eY
    buffer->undo(); // Aaabc|ey
    buffer->undo(); // Aaabc|eY
    buffer->undo(); // Aaabce|Y
    buffer->undo(); // Aaabc|Y
    buffer->undo(); // AaabcY|
    buffer->undo(); // Aaabc|
    buffer->undo(); // AaabcF|
    buffer->undo(); // baFAac|
    buffer->undo(); // baFAa|
    buffer->undo(); // baFA|
    buffer->undo(); // baF|A
    buffer->undo(); // ba|A
    buffer->undo(); // b|A
    buffer->undo(); // ba|A
    buffer->undo(); // b|A 
    buffer->undo(); // bA|
    buffer->undo(); // b|
    buffer->undo(); // |
    buffer->undo(); // a|
    buffer->undo(); // |

    buffer->redo(); // a|
    buffer->redo(); // |
    buffer->redo(); // b|
    buffer->redo(); // bA|
    buffer->redo(); // b|A
    buffer->insert('c'); // bc|A
    buffer->redo(); 
    buffer->redo(); 
    buffer->redo(); 
    buffer->redo(); 
    buffer->redo(); 
    int cursorPos = buffer->getCursorPos();
    string result = buffer->getContent();
    string expect = "bcA";
    if (result == expect && cursorPos == 2) 
    {
        cout << GREEN << "Test 97 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 97 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos <<  RESET << endl;
        cout << ORANGE << "Expect: "  << expect << ", cursor position: " << 2 << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

void test_98(TextBuffer* buffer) {
    buffer = new TextBuffer();
    buffer->insert('a');                // a|
    buffer->deleteChar();               // |
    buffer->insert('b');                // b|
    buffer->insert('A');                // bA|
    buffer->moveCursorLeft();           // b|A 
    buffer->insert('a');                // ba|A
    buffer->deleteChar();               // b|A
    buffer->insert('a');                // ba|A
    buffer->insert('F');                // baF|A
    buffer->moveCursorRight();          // baFA|
    buffer->insert('a');                // baFAa|
    buffer->insert('c');                // baFAac|
    buffer->sortAscending();            // AaabcF|
    buffer->deleteChar();               // Aaabc|
    buffer->insert('Y');                // AaabcY|
    buffer->moveCursorLeft();           // Aaabc|Y
    buffer->insert('e');                // Aaabce|Y
    buffer->moveCursorLeft();           // Aaabc|eY
    buffer->sortAscending();            // Aaabc|eY
    buffer->deleteAllOccurrences('a');  // Abc|eY
    buffer->undo(); // Aaabc|ey
    buffer->undo(); // Aaabc|eY
    buffer->undo(); // Aaabce|Y
    buffer->undo(); // Aaabc|Y
    buffer->undo(); // AaabcY|
    buffer->undo(); // Aaabc|
    buffer->undo(); // AaabcF|
    buffer->undo(); // baFAac|
    buffer->undo(); // baFAa|
    buffer->undo(); // baFA|
    buffer->undo(); // baF|A
    buffer->undo(); // ba|A
    buffer->undo(); // b|A
    buffer->undo(); // ba|A
    buffer->undo(); // b|A 
    buffer->undo(); // bA|
    buffer->undo(); // b|
    buffer->undo(); // |
    buffer->undo(); // a|
    buffer->undo(); // |

    buffer->redo(); // a|
    buffer->redo(); // |
    buffer->redo(); // b|
    buffer->redo(); // bA|
    buffer->redo(); // b|A
    buffer->deleteChar(); // |A
    buffer->redo(); 
    buffer->redo(); 
    buffer->redo(); 
    buffer->redo(); 
    buffer->redo(); 
    int cursorPos = buffer->getCursorPos();
    string result = buffer->getContent();
    string expect = "A";
    if (result == expect && cursorPos == 0) 
    {
        cout << GREEN << "Test 98 is correct." << RESET << endl;
        num_correct++;
    }
    else
    {
        cout << RED << "Test 98 is failed." << RESET << endl;
        cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos <<  RESET << endl;
        cout << ORANGE << "Expect: "  << expect << ", cursor position: " << 0 << RESET << endl;
        num_incorrect++;
    }
    buffer->~TextBuffer();
}

// void test_99(TextBuffer* buffer) {
//     buffer = new TextBuffer();
//     buffer->insert('a');                // a|
//     buffer->deleteChar();               // |
//     buffer->insert('b');                // b|
//     buffer->insert('A');                // bA|
//     buffer->moveCursorLeft();           // b|A 
//     buffer->insert('a');                // ba|A
//     buffer->deleteChar();               // b|A
//     buffer->insert('a');                // ba|A
//     buffer->insert('F');                // baF|A
//     buffer->moveCursorRight();          // baFA|
//     buffer->insert('a');                // baFAa|
//     buffer->insert('c');                // baFAac|
//     buffer->sortAscending();            // AaabcF|
//     buffer->deleteChar();               // Aaabc|
//     buffer->insert('Y');                // AaabcY|
//     buffer->moveCursorLeft();           // Aaabc|Y
//     buffer->insert('e');                // Aaabce|Y
//     buffer->moveCursorLeft();           // Aaabc|eY
//     buffer->sortAscending();            // Aaabc|eY
//     buffer->deleteAllOccurrences('a');  // Abc|eY
//     buffer->undo(); // Aaabc|ey
//     buffer->undo(); // Aaabc|eY
//     buffer->undo(); // Aaabce|Y
//     buffer->undo(); // Aaabc|Y
//     buffer->undo(); // AaabcY|
//     buffer->undo(); // Aaabc|
//     buffer->undo(); // AaabcF|
//     buffer->undo(); // baFAac|
//     buffer->undo(); // baFAa|
//     buffer->undo(); // baFA|
//     buffer->undo(); // baF|A
//     buffer->undo(); // ba|A
//     buffer->undo(); // b|A
//     buffer->undo(); // ba|A
//     buffer->undo(); // b|A 
//     buffer->undo(); // bA|
//     buffer->undo(); // b|
//     buffer->undo(); // |
//     buffer->undo(); // a|
//     buffer->undo(); // |

//     buffer->redo(); // a|
//     buffer->redo(); // |
//     buffer->redo(); // b|
//     buffer->redo(); // bA|
//     buffer->redo(); // b|A
//     buffer->deleteChar(); // |A
//     cout << buffer->getContentWithCursor() << endl;
//     buffer->undo(); // b|A
//     cout << buffer->getContentWithCursor() << endl;
//     buffer->redo(); // |A
//     cout << buffer->getContentWithCursor() << endl;
//     buffer->redo(); // a|A
//     cout << buffer->getContentWithCursor() << endl;
//     buffer->redo(); // 
//     cout << buffer->getContentWithCursor() << endl;
//     buffer->redo(); 
//     cout << buffer->getContentWithCursor() << endl;
//     buffer->redo(); 
//     cout << buffer->getContentWithCursor() << endl;
//     int cursorPos = buffer->getCursorPos();
//     string result = buffer->getContent();
//     string expect = "baFA";
//     if (result == expect && cursorPos == 4) 
//     {
//         cout << GREEN << "Test 99 is correct." << RESET << endl;
//         num_correct++;
//     }
//     else
//     {
//         cout << RED << "Test 99 is failed." << RESET << endl;
//         cout << ORANGE << "Result: "  << result << ", cursor position: " << cursorPos <<  RESET << endl;
//         cout << ORANGE << "Expect: "  << expect << ", cursor position: " << 4 << RESET << endl;
//         num_incorrect++;
//     }
//     buffer->~TextBuffer();
// }

// g++ -o main main.cpp TextBuffer.cpp -I . -std=c++17
int main(int argc, char** argv) {
    DoublyLinkedList<int>* list;
    int num_test = 1;
    cout << YELLOW << "DOUBLY LINKED LIST TESTCASES:\n" << YELLOW << "insertAtHead()" << RESET << endl;
    test_1(list);
    test_2(list);
    test_3(list);
    test_4(list);
    test_5(list);
    cout << YELLOW << "insertAtTail()" << RESET << endl;
    test_6(list);
    test_7(list);
    test_8(list);
    test_9(list);
    test_10(list);
    cout << YELLOW << "insertAt()" << RESET << endl;
    test_11(list);
    test_12(list);
    test_13(list);
    test_14(list);
    test_15(list);
    test_16(list);
    test_17(list);
    cout << YELLOW << "deleteAt()" << RESET << endl;
    test_18(list);
    test_19(list);
    test_20(list);
    test_21(list);
    test_22(list);
    test_23(list);
    test_24(list);
    test_25(list);
    cout << YELLOW << "get()" << RESET << endl;
    test_26(list);
    test_27(list);
    test_28(list);
    test_29(list);
    test_30(list);
    cout << YELLOW << "indexOf()" << RESET << endl;
    test_31(list);
    test_32(list);
    test_33(list);
    test_34(list);
    test_35(list);
    cout << YELLOW << "contains()" << RESET << endl;
    test_36(list);
    test_37(list);
    test_38(list);
    test_39(list);
    test_40(list);
    cout << YELLOW << "size()" << RESET << endl;
    test_41(list);
    test_42(list);
    test_43(list);
    test_44(list);
    test_45(list);
    cout << YELLOW << "reverse()" << RESET << endl;
    test_46(list);
    test_47(list);
    test_48(list);
    test_49(list);
    test_50(list);
    test_51(list);
    cout << "_____________________\n" << YELLOW << "TEXT BUFFER TESTCASES:" << RESET << endl;
    TextBuffer* buffer;
    cout << YELLOW << "insert()\n";
    test_52(buffer);
    test_53(buffer);
    test_54(buffer);
    test_55(buffer);
    test_56(buffer);
    cout << YELLOW << "delete()\n";
    test_57(buffer);
    test_58(buffer);
    test_59(buffer);
    test_60(buffer);
    test_61(buffer);
    cout << YELLOW << "moveCursorLeft()\n";
    test_62(buffer);
    test_63(buffer);
    test_64(buffer);
    test_65(buffer);
    cout << YELLOW << "moveCursorRight()\n";
    test_66(buffer);
    test_67(buffer);
    test_68(buffer);
    test_69(buffer);
    cout << YELLOW << "moveCursorTo()\n";
    test_70(buffer);
    test_71(buffer);
    test_72(buffer);
    test_73(buffer);
    test_74(buffer);
    test_75(buffer);
    cout << YELLOW << "findFirstOccurrence()\n";
    test_76(buffer);
    test_77(buffer);
    test_78(buffer);
    test_79(buffer);
    test_80(buffer);
    cout << YELLOW << "findAllOccurrence()\n";
    test_81(buffer);
    test_82(buffer);
    test_83(buffer);
    test_84(buffer);
    test_85(buffer);
    cout << YELLOW << "sort()\n";
    test_86(buffer);
    test_87(buffer);
    test_88(buffer);
    test_89(buffer);
    test_90(buffer);
    cout << YELLOW << "deleteAllOccurences()\n";
    test_91(buffer);
    test_92(buffer);
    test_93(buffer);
    cout << YELLOW << "undo()\n";
    test_94(buffer);
    test_95(buffer);
    cout << YELLOW << "redo()\n";
    test_96(buffer);
    test_97(buffer);
    test_98(buffer);
    cout << "_____________________" << endl;
    if (num_incorrect == 0)
    {
        cout << GREEN << "All tests passed." << RESET << endl;
    }
    else
    {
        cout << RED << "Succeed: " << num_correct << ", " << "Failed: " << num_incorrect << RESET << endl;
    }
    return 0;
}
