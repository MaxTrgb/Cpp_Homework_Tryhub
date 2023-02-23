/*The manager's salary is $200 + a percentage of sales, sales up to $500 - 3%, from $500 to $1,000 - 5%, over $1,000 - 8%. 
The user enters the sales level for three managers from the keyboard. 
Determine their salary, determine the best manager, charge him a bonus of $200, display the results on the screen.*/

#include <iostream>
using namespace std;


int main()
{
	double MngSaleLvL1, MngSaleLvL2, MngSaleLvL3; //variables for sales level
	cout << "Please enter sales level of the first manager: "; cin >> MngSaleLvL1; //user inputs data
	cout << "Please enter sales level of the second manager: "; cin >> MngSaleLvL2;
	cout << "Please enter sales level of the third manager: "; cin >> MngSaleLvL3;
	cout << endl;

	double MngSal1, MngSal2, MngSal3;	//variables for salary with a percentage
	if (MngSaleLvL1 <= 500) { // here calculations are done if salary is 500$ and less
		
		MngSal1 = ((MngSaleLvL1 * 3) / 100) + MngSaleLvL1;
		cout << "Manager one salary is " << MngSal1;
		cout << endl;
	}
	else if (MngSaleLvL1 > 500 && MngSaleLvL1 <= 999) {// here calculations are done if salary is from 500$ to 1000$

		MngSal1 = ((MngSaleLvL1 * 5) / 100) + MngSaleLvL1; 
		cout << "Manager one salary is " << MngSal1; //we also display information to user right after calculations are done
		cout << endl;
	}
	else  {

		MngSal1 = ((MngSaleLvL1 * 8) / 100) + MngSaleLvL1; // here calculations are done if salary is over 1000$ 
		cout << "Manager one salary is " << MngSal1;
		cout << endl;
	}
	
	if (MngSaleLvL2 <= 500) { // same calculations for second manager

		MngSal2 = ((MngSaleLvL2 * 3) / 100) + MngSaleLvL2;
		cout << "Manager two salary is " << MngSal2;
		cout << endl;
	}
	else if (MngSaleLvL2 > 500 && MngSaleLvL2 <= 999) {

		MngSal2 = ((MngSaleLvL2 * 5) / 100) + MngSaleLvL2;
		cout << "Manager two salary is " << MngSal2;
		cout << endl;
	}
	else {

		MngSal2 = ((MngSaleLvL2 * 8) / 100) + MngSaleLvL2;
		cout << "Manager two salary is " << MngSal2;
		cout << endl;
	}
	
	if (MngSaleLvL3 <= 500) { // and same calculations for the third

		MngSal3 = ((MngSaleLvL3 * 3) / 100) + MngSaleLvL3;
		cout << "Manager three salary is " << MngSal3;
		cout << endl;
	}
	else if (MngSaleLvL3 > 500 && MngSaleLvL3 <= 999) {

		MngSal3 = ((MngSaleLvL3 * 5) / 100) + MngSaleLvL3;
		cout << "Manager three salary is " << MngSal3;
		cout << endl;
	}
	else {

		MngSal3 = ((MngSaleLvL3 * 8) / 100) + MngSaleLvL3;
		cout << "Manager three salary is " << MngSal3;
		cout << endl;
	}
	cout << endl;

	double Max; //variable for maximum salary
	if (MngSal1 > MngSal2 && MngSal1 > MngSal3) { //comparing salaries to determinate the best manager 
		Max = MngSal1 +200; 
		cout << "Top manager is number one!\nHe is ofered a bonus 200$\nTotal salary =  " << Max << "$" << endl;

	}
	else if (MngSal2 > MngSal1 && MngSal2 > MngSal3) {
			Max = MngSal2 +200;
			cout << "Top manager is number two!\nHe is ofered a bonus 200$\nTotal salary =  " << Max << "$" << endl;

		}
	else if (MngSal3 > MngSal1 && MngSal3 > MngSal2) {
		Max = MngSal3 +200;
		cout << "Top manager is number three!\nHe is ofered a bonus 200$\nTotal salary =  " << Max << "$" << endl;

	}
	else { //If salaries are equal or even two managers have equal salaries no one gets bonus. There can be only one best mannager...
		cout << "No one gets bonus." << endl;
	}
}
