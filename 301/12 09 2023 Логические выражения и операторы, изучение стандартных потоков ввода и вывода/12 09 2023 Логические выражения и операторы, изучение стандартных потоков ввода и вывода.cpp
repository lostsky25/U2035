#include <iostream>

#pragma warning (disable : 4996)

using namespace std;

int main() {
	// one line comment

	/*
		multiline
		comment
	*/

	cout << "***** AND *****\n";
	cout << "1 && 0 = " << (true && false) << endl;
	cout << "0 && 1 = " << (false && true) << endl;
	cout << "1 && 1 = " << (true && true) << endl;
	cout << "0 && 0 = " << (false && false) << endl;

	cout << "***** OR *****\n";
	cout << "1 || 0 = " << (true || false) << endl;
	cout << "0 || 1 = " << (false || true) << endl;
	cout << "1 || 1 = " << (true || true) << endl;
	cout << "0 || 0 = " << (false || false) << endl;

	cout << "***** NOT *****\n";
	cout << "0 => " << !false << endl;
	cout << "1 => " << !true << endl;

	int a = 0;
	int b = 0;

	cin >> a >> b;

	/*
		cin >> a;
		cin >> b;
	*/

	if (a > 10) {
		cout << "IF" << endl;
	}
	else {
		cout << "ELSE" << endl;
	}

	//===========================

	/*
		* 1) stdout
		* 2) stdin
		3) stderr
	*/

	fprintf(stdout, "a = %d b = %d\n", a, b); // cout

	printf("ABC"); /* <=> */   fprintf(stdout, "ABC");

	fscanf(stdin, "%d %d", &a, &b); // cin

	fprintf(stdout, "a = %d b = %d\n", a, b); // cout

	return 0;
}