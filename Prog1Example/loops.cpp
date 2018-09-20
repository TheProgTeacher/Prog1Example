//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//
//	int input = 0;
//	cout << "Guess a number 1-10" << endl << '>';
//	cin >> input;
//	while (input != 5) {
//		cout << "You guessed wrong!" << endl;
//		cout << "Guess a number 1-10" << endl << '>';
//		cin >> input;
//	}
//	cout << "You guessed correct!" << endl;
//	
//	cout << "Printing Fibonacci numbers. Input 0 to stop, 1 to continue." << endl;
//	int n = 0, m = 1;
//	int a = 0;
//	do {
//		cout << m << endl << '>';
//		a = m;
//		m += n;
//		n = a;
//		cin >> input;
//	} while (input != 0);
//	
//	//En for-loop
//	cout << "How many numbers do you want to print?" << endl << '>';
//	cin >> input;
//	for (int i = 0; i < input; i++) {
//		cout << i << endl;
//	}
//
//	//En grundläggande programstruktur
//	cout << "A standard program." << endl;
//	bool running = true;
//	while (running) {
//		cout << "Input 1 to run, 2 to quit." << endl << '>';
//		int i;
//		cin >> i;
//		switch (i) {
//		case 1:
//			cout << "Hello" << endl;
//			break;
//		case 2:
//			cout << "Bye" << endl;
//			running = false;
//			break;
//		default:
//			cout << "What?" << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}