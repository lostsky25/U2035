#include <iostream>

//struct Point
//{
//	int x;
//	int y;
//	int z;
//};
//
//void change(int*);
//
//void getXYZ(Point* p1) {
//	srand(time(NULL));
//
//	p1->x = rand() % 100;
//	p1->y = rand() % 100;
//	p1->z = rand() % 100;
//}

struct Car
{
public:
	// Constructor
	Car() {
		std::cout << "Created\n";
	}

	// Destructor
	~Car() {
		std::cout << "Deleted\n";
	}

	void setId(int _id) {
		id = _id;
	}

	int getId() {
		return id;
	}

	void setMark(std::string _mark) {
		mark = _mark;
	}

	std::string getMark() {
		return mark;
	}

private:
	int id;
	std::string mark;
};

struct Vector
{
public:
	Vector() {
		std::cout << "create\n";
		arr = new int[cap];
	}

	int size() {
		return sz;
	}

	int capacity() {
		return cap;
	}

	void resize(int n) {
		int* tmp = new int[n];

		for (int i = 0; i < sz; ++i) {
			tmp[i] = arr[i];
		}

		delete[] arr;
		arr = tmp;
		cap = n;
	}

	void push_back(int x) {
		if (cap == sz) {
			resize(cap * 2);
		}
		arr[sz] = x;
		++sz;
	}

	int& operator [](int i) {
		return arr[i];
	}

	~Vector() {
		std::cout << "delete\n";
		delete[] arr;
	}

private:
	int* arr;
	int sz = 0;
	int cap = 1;
};

int main() {

	Vector data;

	for (int i = 0; i < 10; i++)
		data.push_back(i + 1);

	for (int i = 0; i < 10; i++)
		std::cout << data[i] << std::endl;


	//Car* car = new Car;

	//car->setId(6348737);
	//std::cout << "id: " << car->getId() << std::endl;

	//delete car;

	//Point* p1 = new Point;

	//getXYZ(p1);

	//std::cout << p1->x << " " << p1->y;

	//delete p1;

	//int value = 0;

	//change(&value);

	//std::cout << value << std::endl;

	//int* ptr_a = new int;
	//*ptr_a = 10;
	//int* tmp = ptr_a;

	//std::cout << "0x" << ptr_a << std::endl;

	//delete ptr_a;

	//std::cout << "0x" << ptr_a << std::endl;
	//std::cout << "0x" << tmp << " value: " << *tmp << std::endl;


	return 0;
}

void change(int* a) {
	srand(time(NULL));
	*a = rand() % 100;
}