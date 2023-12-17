#include <iostream>


template <class T> struct Node{

    T data;

    Node<T>* next;

    Node<T>* prev;


    Node() {

        prev = nullptr;

        next = nullptr;

    }


    Node(T data) : data(data), Node() {

    }


    Node(T data, Node<T>* prev, Node<T>* next) :

        data(data),

        prev(prev),

        next(next) {

    }

};


template <class T> class List

{

public:

    List() {

        sz = 0;

        head = nullptr;

        tail = nullptr;

    }


    void push_front(T data) {

        Node<T>* tmp = new Node<T>();

        tmp->data = data;

        tmp->next = nullptr;

        tmp->prev = nullptr;


        if (head == nullptr) {

            head = tmp;

            tail = tmp;

        }

        else {

            tmp->next = head;

            head->prev = tmp;


            head = tmp;

        }

        ++sz;

    }


    void push_back(T data) {

        Node<T>* tmp = new Node<T>();

        tmp->data = data;

        tmp->next = nullptr;

        tmp->prev = nullptr;


        if (head == nullptr) {

            head = tmp;

            tail = tmp;

        }

        else {

            tail->next = tmp;

            tmp->prev = tail;


            tail = tmp;

        }

        ++sz;

    }


    size_t size() const {

        return sz;

    }


    T& operator[](size_t index) {

        Node<T>* n = head;

        for (size_t i = 0; i < index; ++i) {

            n = n->next;

        }

        return n->data;

    }


    ~List() {

        Node<T>* n = head;

        while (n != nullptr) {

            Node<T>* now = n;

            n = n->next;

            delete now;

        }

    }


private:

    size_t sz;

    Node<T>* head;

    Node<T>* tail;

};


int main() {

    List<int> lst;


    for (int i = 0; i < 10; ++i) {

        lst.push_front(i);

    }


    for (int i = 0; i < lst.size(); i++) {

        std::cout << lst[i] << ' ';

    }


    return 0;

}
