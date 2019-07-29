/***************************************

Factorial finder

*****************************************/

// Notes:
  // Using recursion to find the factorial of a given integer.

#include <iostream>
using namespace std;

// Function prototype.
// Takes one parameter,
// local variable x in the main function.
int factorialFinder(int x);

int main() {

  cout << endl;
  cout << "######################### Running Program ####################" << endl;
  cout << endl;

  // Declare variable.
  int x;
  // Declares variable to store function call.
  int theF;
  // Declares loop control variable.
  int control;

  // Prompts user.
  cout << "Enter -1 to run program, else press any other key to exit program: ";
  // Stores input in the variable control.
  cin >> control;
  // Outputs empty line.
  cout << endl;

  // Builds sentinel while loop.
  while(control != -1) {

    // Prompts user.
    cout << "Enter integer to find its factorial: ";
    // Stores input in the variable x.
    cin >> x;
    // Outputs empty line.
    cout << endl;

    // Function call.
    // Takes one parameter.
    // Stores output in the variable theF.
    theF = factorialFinder(x);

    // Outputs to the console.
    cout << "The factorial of " << x << " is " << theF << endl;

    // Prompts user.
    cout << "Enter -1 to quit program: ";
    // Stores input in the variable x.
    cin >> x;
    // Outputs empty line.
    cout << endl;

  }

  cout << endl;
  cout << "#################### Running Program ##########################" << endl;
  cout << endl;

  // Exits main function.
  // Returns 0 to the operating system.
  return 0;

}

// Builds function.
// Takes one parameter,
// local variable x in the main function.
int factorialFinder(int x) {

  // Builds if statement.
  if(x == 1) {

    return 1;

  } else {

    // Function call
    // using recursion to find factorial.
    return x * factorialFinder(x-1);

  }


}
