// 10 For loop Basic

	
// introduction
/*

for (initialization; condition; update) {
    // body of-loop 
}

for loop is really important in programming.

*/

#include <iostream>

using namespace std;

int main() {
	
	int num;
	int factorial = 1;

    cout << "Enter a number : ";
    cin >> num;
    
	for(int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " is " << factorial;


//	int rows;
//
//    cout << "Enter number of rows: ";
//    cin >> rows;
//    
//    cout << endl;
//
//    for(int i = rows; i >= 1; --i)
//    {
//        for(int space = 0; space < rows-i; ++space)
//            cout << " ";
//
//        for(int j = i; j <= 2*i-1; ++j)
//            cout << "*";
//
//        for(int j = 0; j < i-1; ++j)
//            cout << "*";
//
//        cout << endl;
//    }
	
	return 0;
}

// Try this
/*
Try do the commented.
*/


// Next exercises : (Feel free to do research on these)
/*

- Loop (While, Do-While)
- 1D Array
- 2D Array
- Functions
- Functions Arguments and Parameters
- Class

*/
