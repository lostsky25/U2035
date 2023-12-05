#include <iostream>
#include <stack>
#include <queue>

template <class T>
struct Node {
    T data;
    Node<T>* next;

    Node(T _data, Node<T>* _node) {
        data = _data;
        next = _node;
    }
};

template <class T>
class ForwardList {
public:
    ForwardList() {
        head = nullptr;
        sz = 0;
    }

    void push_front(T data) {
        head = new Node<T>(data, head);
        sz++;
    }

    void pop_front() {
        Node<T>* nextHead = head->next;
        delete head;
        head = nextHead;
        --sz;
    }

    T& operator[](size_t index) {
        Node<T>* node = head;
        for (size_t i = 0; i < index; i++) {
            node = node->next;
        }
        return node->data;
    }

    size_t size() const {
        return sz;
    }

    bool empty() const {
        return sz == 0;
    }

    ~ForwardList() {
        while (!empty()) {
            pop_front();
        }
    }

private:
    Node<T>* head;
    size_t sz;
};

struct Point
{
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }

    int x, y;
};

int main() {


    //std::queue<int> q;

    //for (size_t i = 0; i < 10; i++)
    //{
    //    q.push(i);
    //}

    //while (!q.empty()) {
    //    std::cout << q.front() << std::endl;
    //    q.pop();
    //}

    //std::stack<Point> st;
    //std::stack<Point> st2;

    //for (int i = 0; i < 10; ++i) {
    //    st.push(Point(rand() % 100, rand() % 100));
    //    st2.push(Point(rand() % 100, rand() % 100));
    //}

    //st.swap(st2);

    //while (!st.empty())
    //{
    //    std::cout << st.top().x << ' ' << st.top().y << std::endl;
    //    st.pop();
    //}


    //ForwardList<int> lst;
    //for (int i = 0; i < 10; ++i) {
    //    lst.push_front(i + 1);
    //}

    //for (int i = 0; i < 10; ++i) {
    //    std::cout << lst[i] << std::endl;
    //}
    //

    return 0;
}