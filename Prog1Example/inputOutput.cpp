#include <iostream> //std::cout och std::cin f�r input och output
#include <string> //biblotek f�r att hantera text

using namespace std; //

//Alla program i C++ beh�ver en main-fuktion. Det �r h�r programmet startar.
int main() {

	//cout anv�nds f�r att skriva ut text.
	//endl anv�nds f�r att b�rja skriva ut p� en ny rad.
	cout << "Hello world" << endl;

	//F�r att skriva ut vissa tecken beh�ver man anv�nda ett \ och sedan ett annat tecken.
	//H�r �r n�gra exempel:
	cout << "This is a back slash: \\. Amazing!" << endl;
	cout << "This is a new line: \n. Amazing!" << endl;
	cout << "This is a tab: \t. Amazing!" << endl;
	cout << "This is a quote: \". Amazing!" << endl;

	//Variabler deklareras genom att skriva: datatyp variabelnamn = v�rde;
	//T ex:
	int i = 10;

	//Datatyper f�r heltal i storleksordning: short, int, long, long long.

	//Datatyper f�r decimaltal i storleksordning: float, double, long double.

	//Datatyp f�r bokst�ver: char.
	//Om man vill s�tta v�rdet p� en variabel av type char kan man anv�nda karakt�rskonstanter.
	//D� skriver man p� f�jlade s�tt:
	char c1 = 'a';
	char c2 = '+';

	//Om man vill spara text i en variabel f�r man anv�nda typen "string".
	string str = "Text text text";

	//Det finns ett antal aritmetiska operatorer i C++.
	//Dessa har samma regler som i matematiken och fungerar p� liknande s�tt.
	cout << "10 + 5 =" << 10 + 5 << endl;
	cout << "10 - 5 =" << 10 - 5 << endl;
	cout << "10 * 5 =" << 10 * 5 << endl;
	cout << "10 / 5 =" << 10 / 5 << endl;

	//F�r att ta input till ett program anv�nder man "cin".
	//D� kan man spara v�rdet i en variabel.
	cout << "Put in a number: ";
	int input = 0;
	cin >> input;
	cout << "Your number times five equals: " << input * 5 << endl;
	
	return 0;
}
