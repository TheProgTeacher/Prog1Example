///*
//	Fil: strings.cpp
//	Syfte: Visa funktioner för klassen string och objektet cin
//*/
//#include<iostream>
//#include<string>
//#include<Windows.h>
//
//using namespace std;
//
//int main() {
//
//	//flera inputs till cin
//	string fname, lname;
//
//	cout << "Enter your first and last name: ";
//	cin >> fname >> lname;
//	cout << "First name: " << fname << endl;
//	cout << "Last name: " << lname << endl;
//	
//	cin.ignore(1000, '\n');//ränsar ut tecken ur cin
//
//	//input med getline
//	int numb = 0;
//	string words;
//
//	cout << "Enter a number: ";
//	cin >> numb;
//	cin.ignore(1000, '\n');
//	cout << "Enter some words: ";
//	getline(cin, words);
//	cout << "A number, " << numb << ", and some words: " << words << endl;
//
//	//all input med strängar
//	string numb1, numb2;
//	int result;
//
//	cout << "Enter a number: ";
//	getline(cin, numb1);
//	cout << "Enter another number: ";
//	getline(cin, numb2);
//	result = stoi(numb1) + stoi(numb2);// string to ... : i = int, f = float, d = double
//	cout << numb1 << " + " << numb2 << " = " << result << endl;
//	
//	system("pause");
//	return 0;
//}