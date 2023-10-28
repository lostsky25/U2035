#include <iostream>
#include <bitset>

//#include <iomanip>

int main() {
	int a = 010;			// OCT
	int b = 0b1001010;		// BIN
	int c = 0x0012343Ff;	// HEX
	int d = 36'000'000;

	double e = 367213.0;	// double
	float f = 32423.72349f;	// float

	unsigned int a1 = (unsigned int)178321.2383;
	auto a2 = 123123 + 2873423.3124324;
	auto a3 = 123123.32f + 2873423.3124324;
	auto a4 = 123123 + 2873423ll;

	// ull - unsigned long long
	// ll - long long
	// l - long
	// f - float
	// u - unsigned
	// 18.46e1 = 18.46 * 10^1 = 184.6
	// 18.46E1 = 18.46 * 10^1 = 184.6

	std::cout << "a2: " << typeid(a2).name() << std::endl;
	std::cout << "a3: " << typeid(a3).name() << std::endl;
	std::cout << "a4: " << typeid(a4).name() << std::endl;

	/*
		std::hex
		std::oct
		std::dec
		std::uppercase
	*/
	std::cout << std::hex << std::uppercase << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	// stdout
	// stdin

	//int a = 10;
	//int b = 20;

	//std::cout << "Hello from stdout\n";
	////std::cin >> a;
	////std::cin >> b;
	//std::cin >> a >> b;

	//std::cout << "a = " << a << std::endl;
	//std::cout << "b = " << b << std::endl;

	// Побитовые операции

	// & - И
	// | - ИЛИ
	// ^ - ИСКЛ. ИЛИ
	// ~ - ИНВЕРСИЯ

	//int a = 2784923;
	//int b = 2387482;

	//std::bitset<32> bin_a(a);
	//std::bitset<32> bin_b(b);
	//std::bitset<32> bin_result(~a);

	//std::cout << bin_a << std::endl;
	//std::cout << bin_b << std::endl;
	//std::cout << bin_result << std::endl;



	//bool state1 = false;
	//bool state2 = true;

	//// && - И
	//// || - ИЛИ
	//// ! - НЕ

	//std::cout << (state1 && state2) << std::endl;
	//std::cout << (state1 || state2) << std::endl;
	//std::cout << (state1 && !state2) << std::endl;


	return 0;
}