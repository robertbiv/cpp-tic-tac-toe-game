//----------------------------------------------------------
//  Name: Robert Bennethum
//  E-mail Address: rmb6287@psu.edu
//  Class: CMPSC 121 Section 
//  Project #homework 5
//  Due Date: 10:10am November 5, 2021
//  Brief Project Description
//----------------------------------------------------------
#include <iostream> // for input output
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

// function prototypes
int questions(int& c, int& w);
void correct();
void wrong();
int percentage(int correct, int wrong);


// function definitions
int main()
{
	int correct = 0; // amount of correct answers
	int wrong = 0; // amount of incorrect answers
	int run = 0; // run loop to keep going
	bool nextLevel;
	srand(time(0)); // set rand seed
	cout << "Welcome to Multiplication Program" << endl;
	while (run != -1) // run until the sentinel -1 is retuned from question function
	{
		run = questions(correct, wrong); // find if user inputs -1 to break loop and show questions
	}
	nextLevel = percentage(correct, wrong); // run function percentage if user should go to the next level
	if (nextLevel == true)
		cout << endl << "Congratulation, you are ready to go to the next level!" << endl;
	else
		cout << endl << "Please ask your teacher for extra help." << endl;
}

// print a question and updates amount of correct and incorrect responces
int questions(int &c, int &w) // retreve and allow edit of variables from main "correct" and "wrong"
{
	bool runAgain = false; // loop run variable
 	int q1 = 0 + rand() % (20 - 0 + 1); // random number 1-20
	int q2 = 0 + rand() % (20 - 0 + 1); // random number 1-20
	int ans = q1 * q2; // get correct answer
	int userAns; // what the user inputs
	cout << endl << "How much is " << q1 << " times " << q2 << " (-1 to End)" << endl;
	do { // loop to run again if incorrect
		cout << "? ";
		cin >> userAns;
		if (userAns == -1) // check if user wants to end program
			return -1; // return end program
		else if (userAns == ans) // check if answer is correct, tells them, and then adds 1 to amount of correct answers
		{
			correct(); // play correct message
			c++; // edit and add one to correct answers
			runAgain = false; // end loop
		}
		else // check if answer is incorrect, tell them, and then add 1 to amount of wrong answers
		{
			wrong(); // play wrong message
			w++; // edit and add one to wrong answers
			runAgain = true; // end loop
		}
	} while (runAgain == true); //loop for if incorrect
	return 0; // return everything is fine and continue
}

// print a random write praise message
void correct()
{
	int x = 1 + rand() % (4 - 1 + 1); // random 1-4
	switch (x) // play the random message
	{
		case 1:
			cout << "Very good!" << endl;
			break;
		case 2:
			cout << "Excellent!" << endl;
			break;
		case 3:
			cout << "Nice work!" << endl;
			break;
		case 4:
			cout << "Keep up the good work!" << endl;
			break;
		default:
			cout << "Program Error: Function Correct" << endl; // Error checking
	}

}
// print a random wrong message
void wrong()
{
	int x = 1 + rand() % (4 - 1 + 1); // random 1-4
	switch (x) // play random message
	{
	case 1:
		cout << "No, please try again." << endl;
		break;
	case 2:
		cout << "Wrong, try once more." << endl;
		break;
	case 3:
		cout << "Don't give up!" << endl;
		break;
	case 4:
		cout << "No, keep trying." << endl;
		break;
	default:
		cout << "Program Error: Function Wrong" << endl; // error checking
	}
}

// finds the percentage correct and returns if a students should go to the next level or not
int percentage(int correct, int wrong)
{
	int timesRun = correct + wrong; // get the total amount of times run to get the percentage correct
	double percent = (correct * 100) / timesRun; // calculate the percentage correct
	if (percent < 75) // check if score is less than 75. If it is return false for don't go to next level
		return false;
	return true; // if it is equal to or higher than 75, retunr true for go to next level
}