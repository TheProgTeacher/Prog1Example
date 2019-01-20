/*
Detta exempel visar hur man skapar en simpel klass som beskriver en person.
 */

#include <iostream>
#include <string>

using namespace std;

//Klassdefinition
class Person {
//Private g�r variabler och funktioner osynliga utaf�r klassen
private:
	//Instansvariabler
	string name;
	int age;

//Public g�r variabler och funktioner synliga utanf�r klassen
public:
	//Konstruktor: anv�nds f�r att skapa ett objekt av klassen
	Person(string n, int a) {
		name = n;
		age = a;
	}

	//Set-funktioner: �ndrar p� instansvariablers v�rden
	void setName(string n) {
		name = n;
	}
	void setAge(int a) {
		age = a;
	}

	//Get-funktioner: skickar tillbaka instansvariablers v�rden
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}

	//Funktion som omvandlar en person till en formaterad str�ng
	string str() {
		return name + " " + to_string(age);
	}
};

//Testprogram
int main() {
	//Skapande av tv� objekt 
	Person p("Joakim", 24);
	Person p2("Mester Shifu", 120);

	//Anrop av set-funktion
	p.setName("Tai Lung");

	//Test av get- och str�ng-funktioner
	cout << p.getName() << endl;
	cout << p2.str() << endl;

	system("pause");
	return 0;
}
