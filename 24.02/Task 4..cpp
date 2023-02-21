/*Task 4. Write a program that tests knowledge of the multiplication table.
The program displays two numbers to the user and asks for their product. After that, it should check and reply to the user.
The program uses the random function to select numbers from 1 to 9.*/

#include <iostream>
using namespace std;


int main()
{
	int rand_num, rand_num2;	// variables for random numbers 

	srand(time(NULL));			//random number generator that sets the current time as the base.
								//is used when it is necessary to work with different sequences 
								//of pseudorandom numbers by assigning different starting points.
	rand_num = rand() % 9 + 1;	//random numbers from 9 to 1

	rand_num2 = rand() % 9 + 1;

	cout << "\tMultiplication Tables Check\n\nPlease multiply numbers: " << rand_num << " and " << rand_num2 << endl << endl; //user can see the task
	int answ;
	cout << "Your answer: "; cin >> answ;//user enters the answer
	cout << endl;
	if (answ == rand_num * rand_num2) { //formula that checks the answer
		cout << "Congratulation! " << answ << " is correct answer!" << endl; //output for correct
	}
	else {
		cout << answ << " is wrong answer :(\nPlease try again!" << endl; //and incorrect aswer
	}
}