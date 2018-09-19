#include <iostream> //std::cout och std::cin för input och output
#include <string> //biblotek för att hantera text

using namespace std; //

//Alla program i C++ behöver en main-fuktion. Det är här programmet startar.
int main() {

	//cout används för att skriva ut text.
	//endl används för att börja skriva ut på en ny rad.
	cout << "Hello world" << endl;

	//För att skriva ut vissa tecken behöver man använda ett \ och sedan ett annat tecken.
	//Här är några exempel:
	cout << "This is a back slash: \\. Amazing!" << endl;
	cout << "This is a new line: \n. Amazing!" << endl;
	cout << "This is a tab: \t. Amazing!" << endl;
	cout << "This is a quote: \". Amazing!" << endl;

	//Variabler deklareras genom att skriva: datatyp variabelnamn = värde;
	//T ex:
	int i = 10;

	//Datatyper för heltal i storleksordning: short, int, long, long long.

	//Datatyper för decimaltal i storleksordning: float, double, long double.

	//Datatyp för bokstäver: char.
	//Om man vill sätta värdet på en variabel av type char kan man använda karaktärskonstanter.
	//Då skriver man på föjlade sätt:
	char c1 = 'a';
	char c2 = '+';

	//Om man vill spara text i en variabel får man använda typen "string".
	string str = "Text text text";

	//Det finns ett antal aritmetiska operatorer i C++.
	//Dessa har samma regler som i matematiken och fungerar på liknande sätt.
	cout << "10 + 5 =" << 10 + 5 << endl;
	cout << "10 - 5 =" << 10 - 5 << endl;
	cout << "10 * 5 =" << 10 * 5 << endl;
	cout << "10 / 5 =" << 10 / 5 << endl;

	//För att ta input till ett program använder man "cin".
	//Då kan man spara värdet i en variabel.
	cout << "Put in a number: ";
	int input = 0;
	cin >> input;
	cout << "Your number times five equals: " << input * 5 << endl;
	
	return 0;
}
