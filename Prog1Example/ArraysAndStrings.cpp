#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	string input = "abcdefgh";//string är en klass
	string input2 = "ijklmnop";
	string input3 = input + input2;
	//cin >> input;
	//cout << input.length() << endl;
	//input.at(3) = 'w';
	cout << input3.find("efg", 0) << endl;

	system("pause");
	return 0;
}

//int numbers[101];

//for (int i = 0; i < 101; i++) {
//	numbers[i] = i;
//}

//for (int i = 0; i < 101; i++) {
//	numbers[i] = numbers[i] * numbers[i];
//}

//cout << "An array of numbers" << endl;

//for (int i = 0; i < 101; i++) {
//	cout << numbers[i] << endl;
//}

//cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << endl;