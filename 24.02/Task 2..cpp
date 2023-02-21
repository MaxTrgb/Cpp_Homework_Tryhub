/*Task 2. Write a program for calculating the cost of a call for different mobile operators. 
The user enters the cost of the call and chooses from which to which operator he calls. 
Display the value on the screen*/

#include <iostream>
using namespace std;


int main()
{
	double cost1, cost2, cost3; //variables for price and calculations
	cout << "Enter the cost of the call: "; cin >> cost1;  // User enters cost of a call for exmple 100

	int op; //variable for users operator 
	cout << "Pelease choose your operator:\n\t1 - LifeCell ;\n\t2 - Kyivstar ;\n\t3 - Vodafone;\n\t"; 
	cin >> op; //input operator

	if (op != 1 && op != 2 && op != 3) { //if user enters wrong character program stops working
		cout << "Wrong value!\n"; 
		return 0; //provides a function termination mechanism
	}	
	int op1;//variable for other operator
	cout << "Select the operator you are calling:\n\t1 - LifeCell ;\n\t2 - Kyivstar ;\n\t3 - Vodafone;\n\t";
	cin >> op1;//input operator
	if (op1 != 1 && op1 != 2 && op1 != 3) { //if user enters wrong character program stops working
		cout << "Wrong value!\n";
		return 0;//provides a function termination mechanism
	}
	if (op == 1 && op1 == 1) { //cost Lifecell to Lifecell doesn`t have extra charge 
		
		cout << "The price of your call is: " << cost1 << " $ "; 
	}
	if (op == 2 && op1 == 2) { //same for Kyivstar

		cout << "The price of your call is: " << cost1 << " $ ";
	}
	if (op == 3 && op1 == 3) { //same for Vodafone

		cout << "The price of your call is: " << cost1 << " $ ";
	}

	if (op == 1 && op1 == 2) { //cost lifecell to kyivstar
		cost2 = (cost1 / 100) * 15;
		cost3 = cost1 + cost2;
		cout << "The price of your call is: " << cost3 << " $\n";
	}
	if (op == 1 && op1 == 3) { //cost lifecell to vodafone
		cost2 = (cost1 / 100) * 20;
		cost3 = cost1 + cost2;
		cout << "The price of your call is: " << cost3 << " $\n";
	}
	if (op == 2 && op1 == 1) { //cost kyivstar to lifecell
		cost2 = (cost1 / 100) * 10;
		cost3 = cost1 + cost2;
		cout << "The price of your call is: " << cost3 << " $\n";
	}
	if (op == 2 && op1 == 3) { //cost kyivstar to vodafone
		cost2 = (cost1 / 100) * 25;
		cost3 = cost1 + cost2;
		cout << "The price of your call is: " << cost3 << " $\n";
	}
	if (op == 3 && op1 == 1) { //vodafone to life
		cost2 = (cost1 / 100) * 30;
		cost3 = cost1 + cost2;
		cout << "The price of your call is: " << cost3 << " $\n";
	}
	if (op == 3 && op1 == 2) { //vodafone to kyivstar
		cost2 = (cost1 / 100) * 35;
		cost3 = cost1 + cost2;
		cout << "The price of your call is: " << cost3 << " $\n";
	}
}