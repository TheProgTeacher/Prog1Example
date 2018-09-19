#include <iostream> //input och output
#include <Windows.h>

using namespace std;

//Här börjar programmet
int main() {
	cout << "Number 1: ";
	int nmb1 = 0;
	cin >> nmb1;

	cout << "Number 2: ";
	int nmb2 = 0;
	cin >> nmb2;

	//nmb2 = nmb1 * nmb2;
	nmb2 *= nmb1;

	cout << nmb2 << endl;

	system("pause");

	/*
	//output
	cout << "Hello world" << endl;

	//deklaration av variabel
	int antal_elever = 12;//int brukar vara 32 bit
	cout << antal_elever << endl;
	antal_elever = 47;
	cout << antal_elever << endl;

	short x = 12;//short är minst 16 bit
	long l = 12;//long är minst 32 bit
	long long ll = 12;//minst 64 bit

	float f = 12.23;//32 bit
	double d = 12.23;//64 bit
	long double ld = 12e10;//längre än 64

	int i = 1527 / 345;
	int j = 1527 % 345;
	cout << j << endl;
	*/
}
