/*
	Fil: functions.cpp
	Syfte: Visa hur functioner fungerar i C++
*/
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int pow(int a, int b) { //tar a upphöjt till b 
	int r = a;
	while (b > 1) {
		r *= a;
		b--;
	}
	return r;
}

int main() {
	
	int a = 10;
	int b = 3;

	int c = pow(a, b);

	cout << c << endl;

	system("pause");
	return 0;
}