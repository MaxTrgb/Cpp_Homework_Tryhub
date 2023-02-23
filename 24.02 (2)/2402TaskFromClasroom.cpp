/*Task from classroom. Users should not enter station numbers, but letters (A,B,C,D,E) to calculate travel time. 
It is necessary to provide for the input of lower and uppercase letters by the user (get rid of case dependence).*/

#include <iostream>
using namespace std;


int main()
{
	char station; //variable for station
	cout << "\tWelcome to Bus Station!\n\nDestinatons:\n\nA - Avenue street;\nB - Bakery corner;\nC - Cathedral square;\nD - Disney Land;\nE - Element Park;\n";
	cout << "\n\tPlease Enter your station: "; cin >> station; // user chooses where he wants to go
	cout << endl;

	switch (station) { // depending on what user chooses we display time of arrval

	case 'A': // we make two cases to get rid of case dependence
	case 'a':
		cout << "You are in Avenue street. Choose your destination " << endl;
		break;
	case 'B':
	case 'b':
		cout << "Your choice is Bakery corner. Ride time is 13 min. " << endl;
		break;

	case 'C':
	case 'c':
		cout << "Your choice is Cathedral square. Ride time is 22 min. " << endl;
		break;

	case 'D':
	case 'd':
		cout << "Your choice is Disney Land. Ride time is 27 min. " << endl;
		break;

	case 'E':
	case 'e':
		cout << "Your choice is Element Park. Ride time is 34 min. " << endl;
		break;

	default:
		cout << "Inorrect value!" << endl; // if user enters something else then station character function stops
	}
	
}