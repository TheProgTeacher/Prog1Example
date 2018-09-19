#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Gå rakt fram[1] eller sväng höger[2]?" << endl;
	cout << ">";
	int input;
	cin >> input;
	switch (input) {
	case 1:
		cout << "Du gick rakt fram." << endl;
		break;
	case 2:
		cout << "Du svängde höger." << endl;
		break;
	default:
		cout << "Du dog..." << endl;
	}

	/*
	if (input == 1) {
		cout << "Du gick rakt fram." << endl;
	}
	else if (input == 2) {
		cout << "Du svängde höger." << endl;
	}
	else {
		cout << "Du dog..." << endl;
	}
	*/

	return 0;
}
