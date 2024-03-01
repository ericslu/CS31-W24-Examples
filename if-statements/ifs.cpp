#include <iostream>
using namespace std;

int main() {

	/* If statements run certain code based on a Boolean (True or False) condition */
	bool it_is_raining = true;

	cout << "I wonder if it's raining, let me look outside..." << endl;

	if (it_is_raining) {
		// Code within these braces will run if "it_is_raining" (The condition) is True
		cout << "It is raining!" << endl;
	}

	cout << "Wow!" << endl; /* This code is not in the if statement
							   (as defined by the code not being in the braces of the if 
							    statement) */

	/* Output:
	   I wonder if it's raining, let me look outside...
	   It is raining!
	   Wow!
	*/



	// Else statements, will run its code if the previous if statements are false
	// NOTE: The else statement must be connected to an if statement to compile (work)

	bool a_meteor_has_hit_earth = false;

	if (a_meteor_has_hit_earth) {
		// This code will run if a_meteor_has_hit_earth == true
		cout << "Uh oh!" << endl;
	}
	else { // This is how we "connect" an else statement to an if statement
		/* Given that the previous if statement is if a_meteor_has_hit_earth == true,
		   This code will run if a_meteor_has_hit_earth == false*/
		cout << "Phew!" << endl;
	}

	/* Output:
	   Phew!
	*/


	// Else if statements: If a previous if statement is not true, run code if a different
	// condition is true.
	// Evidently, not everything is true or false. You may want to write programs which 
	// have different outputs based on different conditions.
	// Suppose I want to create a grading program, where I output a letter grade based on
	// an inputted numeric grade. This would be a good example of when to use an else if.

	int grade = 94;

	if (grade >= 97) {
		cout << "A+" << endl;
	}
	else if (grade >= 93) { 
		// We reach here if grade < 97. 
		// This means we can check if grade >= 93 knowing that grade < 97
		cout << "A" << endl;
	}
	else {
		// We reach here if grade < 93. (as we have checked the other cases)
		cout << "A- and below" << endl;
	}

	/* Output:
		A 
	*/


	// Note that else if is different than using two ifs, case in point:
	// 2 Ifs:
	grade = 100;

	if (grade >= 97) {
		cout << "A+" << endl;
	}
	if (grade >= 93) { // This acts like any other if statement
		// Note, as this is a different if statement, because grade >= 93, this will also run
		cout << "A" << endl;
	}
	else { // This if ONLY applies to the [if (grade >= 93)] statement
		cout << "A- and below" << endl;
	}

	/* Output:
		A+
		A
	*/

	// Else if:
	grade = 100;

	if (grade >= 97) {
		cout << "A+" << endl;
	}
	else if (grade >= 93) { 
		// We reach here if grade < 97. 
		// This means we can check if grade >= 93 knowing that grade < 97
		cout << "A" << endl;
	}
	else { 
		cout << "A- and below" << endl;
	}
 
	/* Output:
		A+
	*/




















}