#include <iostream>
#include <vector>

//struct Human {
//	int age;
//	std::string name;
//	std::string gender;
//};

//void printHuman(const Human human) {
//void printHuman(const Human& human) {
//void printHuman(const Human* human) {
//	std::cout << "Name: " << human->name << std::endl;
//	std::cout << "Age: " << human->age << std::endl;
//	std::cout << "Gender: " << human->gender << std::endl;
//}

//template <class T>
//void swap(T& a, T& b) {
//	T tmp = a;
//	a = b;
//	b = tmp;
//}

template <class T>
struct Vector
{
public:
	Vector() {
		arr = new T[cap];
	}

	T size() const {
		return sz;
	}

	T capacity() const {
		return cap;
	}

	void resize(int n) {
		T* tmp = new T[n];

		for (int i = 0; i < sz; ++i) {
			tmp[i] = arr[i];
		}

		delete[] arr;
		arr = tmp;
		cap = n;
	}

	void push_back(T x) {
		if (cap == sz) {
			resize(cap * 2);
		}
		arr[sz] = x;
		++sz;
	}

	T pop_back() {
		return arr[(sz--) - 1];
	}

	T& back() const {
		return arr[sz - 1];
	}

	T& operator [](int i) {
		return arr[i];
	}

	~Vector() {
		delete[] arr;
	}

private:
	T* arr;
	int sz = 0;
	int cap = 1;
};

template <class T>
class Stack {
public:
	Stack() {
		sz = 0;
	}

	T& top() const {
		return arr.back();
	}

	T pop() {
		T temp = arr.back();
		arr.pop_back();
		--sz;
		return temp;
	}

	bool empty() const {
		return sz == 0;
	}

	void push(T x) {
		arr.push_back(x);
		++sz;
	}

	int size() const {
		return sz;
	}

private:
	Vector<T> arr;
	int sz;
};

template <class T>
class StackMin {
public:
	StackMin() {
		sz = 0;
	}

	void push(T value) {
		if (sz > 0) {
			T current_min = arr.back().second;
			arr.push_back({ value, std::min(current_min, value) });
		}
		else {
			// make a pair - { value, value }
			// make a pair - std::make_pair(value, value);

			arr.push_back({ value, value });
		}
		++sz;
	}

	T pop() {
		T temp = arr.back().first;
		arr.pop_back();
		--sz;
		return temp;
	}

	T getMin() const {
		return arr.back().second;
	}

	T& top() const {
		return arr.back().first;
	}

	int size() const {
		return sz;
	}

	bool empty() const {
		return sz == 0;
	}

private:
	Vector<std::pair<T, T>> arr;
	int sz;
};

int main() {
	StackMin<int> st;

	st.push(9);
	st.push(5);
	st.push(3);
	st.push(8);
	st.push(8);
	st.push(1);

	while (!st.empty()) {
		std::cout << st.top() << " Current minimum: " << st.getMin() << std::endl;
		st.pop();
	}

	/*std::pair<int, std::string> p1 = { 10, "qwerty" };

	std::cout << p1.first << ' ' << p1.second << std::endl;*/

	//Stack<int> st;

	//for (int i = 0; i < 10; i++) {
	//	st.push(i + 1);
	//}

	//while (!st.empty()) {
	//	std::cout << st.top() << std::endl;
	//	st.pop();
	//}

	//int a = 10, b = 20;

	//swap<int>(a, b);

	//std::cout << a << std::endl;
	//std::cout << b << std::endl;

	//double a1 = 5.231, b1 = 43.453;

	//swap<double>(a1, b1);

	//std::cout << a1 << std::endl;
	//std::cout << b1 << std::endl;
	
	// Human human = { 10, "qwe", "male" };

	//Human* human = new Human();
	//
	//std::cout << "Addr: " << human << std::endl;

	//int* a = new int(5);

	//printHuman(human);

	//delete human;

	//bool a = false;
	//bool b = true;
	//bool c = false;

	//if (a, b, c) {
	//	std::cout << "yes";
	//}

	return 0;
}