/*
Detta exempel visar hur man skapar en simpel klass som beskriver en person.
 */

#include <iostream>
#include <string>

using namespace std;

//Klassdefinition
class Person {
//Private gör variabler och funktioner osynliga utaför klassen
private:
	//Instansvariabler
	string name;
	int age;

//Public gör variabler och funktioner synliga utanför klassen
public:
	//Konstruktor: används för att skapa ett objekt av klassen
	Person(string n, int a) {
		name = n;
		age = a;
	}

	//Set-funktioner: ändrar på instansvariablers värden
	void setName(string n) {
		name = n;
	}
	void setAge(int a) {
		age = a;
	}

	//Get-funktioner: skickar tillbaka instansvariablers värden
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}

	//Funktion som omvandlar en person till en formaterad sträng
	string str() {
		return name + " " + to_string(age);
	}
};

//Testprogram
int main() {
	//Skapande av två objekt 
	Person p("Joakim", 24);
	Person p2("Mester Shifu", 120);

	//Anrop av set-funktion
	p.setName("Tai Lung");

	//Test av get- och sträng-funktioner
	cout << p.getName() << endl;
	cout << p2.str() << endl;

	system("pause");
	return 0;
}
