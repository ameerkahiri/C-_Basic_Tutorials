// 7 If Else Statement

	
// introduction
/*

if (condition) {
   // body of if statement
}
else if (condition) {
   // body of if statement
}
else {
	// body of if statement
}

*/
	
#include <iostream>

using namespace std;

int main() {
	
    int a, b;
    a = 8;
    b = 2;


	cout << "a : " << a << endl;
	cout << "b : " << b << endl << endl;

    cout << a << " == " << b << " is ";
    if(a == b) {
   		cout << "true";
	}
    else if(a != b){
    	cout << "false";
	}
	
	
	cout << endl;
	
	
    if(a > b) {
    	cout << a << " > " << b << " is true" << endl;
	}
    else if(a < b) {
    	cout << a << " < " << b << " is true" << endl;
	}
	else {
		cout << "This will never print because all condition has been met." <<endl;
	}
	
	
	return 0;
}

// Try this
/*
Do by getting user input with math operator
*/
