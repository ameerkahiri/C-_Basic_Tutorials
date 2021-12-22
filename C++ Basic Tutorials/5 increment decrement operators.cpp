// 5 Increment Decrement Operators

// introduction
/*

a++ same as a = a + 1;
a-- same as a = a - 1;

a += 1 same as a = a + 1;
a -= 2 same as a = a - 2;

Postfix 
a++

Prefix 
++a

*/

#include <iostream>

using namespace std;

int main() {
	
    int a = 10; 
	int b = 100;
	int result_a;
	int result_b;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl << endl;

    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    
    cout << "result_a = ++a " << endl << "result_a = " << result_a << endl << endl;


    // decrementing b by 1 and storing the result in result_b   
    result_b = --b;
    
    cout << "result_b = --b " << endl << "result_b = " << result_b << endl << endl;
    
    
    // incrementing result_a by result_a value
    result_a += result_a;
    
    cout << "result_a += result_a " << endl << "result_a = " << result_a << endl << endl;
    
    
    // decrementing result_b by result_a value
    result_b -= result_a;
    
    cout << "result_b -= result_a " << endl << "result_b = " << result_b << endl << endl;
    
	
	return 0;
}

// Try this
/*
This operator (+=/-=) can also be used with multiply (*=) and divide (/=) and modulo (%=)
Do research on the difference of postfix (a++) and prefix (++a)
*/
