/*Task 3. Vasya is programmer he gets $50 for a hundred lines of code. For every third delay, he is fined $20.
Implement the menu:
- The user enters the desired income and the number of delays. Calculate how many lines of code should Vasya write;
- The user enters the number of lines of code written by Vasya and the desired amount of salary. Count how many times he can be late;
- The user enters the number of lines of code and the number of delays, determine how much money Vasya will be payed and whether they he will be payed at all.*/

#include <iostream>
using namespace std;


int main()
{	
	long  a, inc, dele, firstopt, lin, sal, x, x1; //variables for calculations,income, lines fo code, ect.
	cout << "Please make your choice: " << endl;
	cout << "Enter the desired income and the number of delays to calculate how many lines of code should Vasya write - 1" << endl;
	cout << "Enter the number of lines of code written by Vasya and the desired amount of salary to count how many times he can be late - 2" << endl;
	cout << "Enter the number of lines of code and the number of delays, determine how much money Vasya will be payed - 3" << endl;
	cin >> a; // we give 3 options for the user with different input data and results

	if (a != 1 && a != 2 && a != 3) { //if user enters wrong character program stops working
		cout << "Wrong value!\n";
	}
	if (a == 1) { // depending on the option, user enters different values 
		cout << "Desired income: "; cin >> inc; 
		cout << "Number of delays: "; cin >> dele;
		firstopt = (inc / 50 * 100) + (dele / 3 * 20); //we make the necessary calculations
		cout << "He should write " << firstopt << " lines of code.\n"; //display result for the user
	}
	if (a == 2) { //here we have another option
		cout << "Number of lines of code: "; cin >> lin; //user enters differnt values
		cout << "Desired amount of salary: "; cin >> sal;

		if (lin / 2 <= sal) { //this is an option where Vasya can`t be late at all beacuse he wont have any salary
			cout << "Vasya can`t be late!\n";
		}
		else
			cout << "Vasya can be late " << (lin / 2 - sal) / 20 << " times.\n"; //for other options we display amont of times
	}		
	if (a == 3) { // last option
		cout << "Number of lines of code: "; cin >> lin;
		cout << "Number of delays: "; cin >> dele;
		x = ((lin / 2) - (dele / 3 * 20));
		x1 = x / 20; 
		if (x1 > 0) { //if the ratio of written code and delays allow, Vasya receives a salary
			cout  << "Vasya will be payed " << x << " $\n";
		}
		else cout << "Vasya will not be payed :(\n"; //option where Vasya doesn`t get paid	
	}
}