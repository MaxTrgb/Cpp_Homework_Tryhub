/*Task 1. The user enters a character from the keyboard. 
Determine which symbol it is: a letter, a number, a punctuation mark or another.*/

#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Input single character: ";	cin >> ch; 

	static_cast<int>(ch); //converting a variable from one data type to another using the static_cast operator. 
						  //using int variable we know the symbol code	
	if (ch >= 97 && ch <= 122) { //with ASCII character table we know character range
		cout << ch << " is a letter! \n"; 
	}
	else if (ch >= 65 && ch <= 90) {//for example, capital letters coded with the numbers 65 for A, 66 for B, and so on.
		cout << ch << " is a capital letter! \n"; 
	}
	else if (ch >= 48 && ch <= 57) {
		cout << ch << " is a number! \n";
	}
	else if ((ch >= 32 && ch <= 47)||(ch>=58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
		cout << ch << " is a punctuation mark! \n";
	}
	else {
		cout << " is something else... \n"; //for characters that do not meet our requirements
	}		
}