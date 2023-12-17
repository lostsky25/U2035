//#include <iostream>
//
//template <class T> struct Node{
//    T data;
//    Node<T>* next;
//    Node<T>* prev;
//
//    Node() {
//        prev = nullptr;
//        next = nullptr;
//    }
//
//    Node(T data) : data(data), Node() {
//    }
//
//    Node(T data, Node<T>* prev, Node<T>* next) :
//        data(data),
//        prev(prev),
//        next(next) {
//    }
//};
//
//template <class T> class List
//{
//public:
//    List() {
//        sz = 0;
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    void push_front(T data) {
//        Node<T>* tmp = new Node<T>();
//        tmp->data = data;
//        tmp->next = nullptr;
//        tmp->prev = nullptr;
//
//        if (head == nullptr) {
//            head = tmp;
//            tail = tmp;
//        }
//        else {
//            tmp->next = head;
//            head->prev = tmp;
//
//            head = tmp;
//        }
//        ++sz;
//    }
//
//    void push_back(T data) {
//        Node<T>* tmp = new Node<T>();
//        tmp->data = data;
//        tmp->next = nullptr;
//        tmp->prev = nullptr;
//
//        if (head == nullptr) {
//            head = tmp;
//            tail = tmp;
//        }
//        else {
//            tail->next = tmp;
//            tmp->prev = tail;
//
//            tail = tmp;
//        }
//        ++sz;
//    }
//
//    size_t size() const {
//        return sz;
//    }
//
//    T& operator[](size_t index) {
//        Node<T>* n = head;
//        for (size_t i = 0; i < index; ++i) {
//            n = n->next;
//        }
//        return n->data;
//    }
//
//    ~List() {
//        Node<T>* n = head;
//        while (n != nullptr) {
//            Node<T>* now = n;
//            n = n->next;
//            delete now;
//        }
//    }
//
//private:
//    size_t sz;
//    Node<T>* head;
//    Node<T>* tail;
//};
//
//int main() {
//    List<int> lst;
//
//    for (int i = 0; i < 10; ++i) {
//        lst.push_front(i);
//    }
//
//    for (int i = 0; i < lst.size(); i++) {
//        std::cout << lst[i] << ' ';
//    }
//
//    return 0;
//}


//Реализуйте класс Phone, который будет иметь следующие возможности :
//
//1) Получить свой номер
//2) Получить название своей модели
//3) Получить контакты из телефонной книги
//4) Добавить контакты в телефонную книгу
//5) Получить год выпуска телефона

#include <iostream>
#include <unordered_map>

struct PhoneBook {
public:
    PhoneBook() = default;

    void addContact(std::string name, std::string phoneNumber) {
        if (!data.contains(name)) {
            data[name] = phoneNumber;
        }
    }

    std::string getContactByName(std::string name) {
        if (data.contains(name)) {
            return data[name];
        }
        return "";
    }

    ~PhoneBook() = default;

private:
    friend class Phone;

    int sz = 0;
    std::unordered_map<std::string, std::string> data;
};

class Phone {
public:

    Phone(std::string num, int year, std::string model) {
        this->num = num;
        this->year = year;
        this->model = model;
    }

    PhoneBook& getPhoneBook() {
        return phoneBook;
    }

    void printContacts() const {
        for (const auto& [name, phoneNumber] : phoneBook.data) {
            std::cout << name << ' ' << phoneNumber << std::endl;
        }
    }

    std::string getNum() const {
        return num;
    }

    int getYear() const {
        return year;
    }

    std::string getModel() const {
        return model;
    }

private:
    PhoneBook phoneBook;

    std::string num;
    std::string model;
    int year;
};

int main() {
    Phone phone("+70000000000", 2021, "Samsung");

    phone.getPhoneBook().addContact("John", "+98372942734");
    phone.getPhoneBook().addContact("Rich", "+99784397827");
    phone.getPhoneBook().addContact("Carl", "+97834295292");

    phone.printContacts();

    return 0;
}