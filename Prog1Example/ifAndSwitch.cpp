#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "G� rakt fram[1] eller sv�ng h�ger[2]?" << endl;
	cout << ">";
	int input;
	cin >> input;
	switch (input) {
	case 1:
		cout << "Du gick rakt fram." << endl;
		break;
	case 2:
		cout << "Du sv�ngde h�ger." << endl;
		break;
	default:
		cout << "Du dog..." << endl;
	}

	/*
	if (input == 1) {
		cout << "Du gick rakt fram." << endl;
	}
	else if (input == 2) {
		cout << "Du sv�ngde h�ger." << endl;
	}
	else {
		cout << "Du dog..." << endl;
	}
	*/

	return 0;
}
