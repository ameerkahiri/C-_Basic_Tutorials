// 5 Relational Operators

#include <iostream>

using namespace std;

int main() {
	
    float a, b;
    a = 4.5f;
    b = 4.6f;
    bool result;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl << endl;

    result = (a == b);   // 0 = false
    cout << a << " == " << b << " is " << result << endl;

    result = (a != b);  // 1 = true
    cout << a << " != " << b << " is " << result << endl;

    result = a > b;   // 0 = false
    cout << a << " > " << b << " is " << result << endl;

    result = a < b;   // 1 = true
    cout << a << " < " << b << " is " << result << endl;

    result = a >= b;  // 0 = false
    cout << a << " >= " << b << " is " << result << endl;

    result = a <= b;  // 1 = true
    cout << a << " <= " << b << " is " << result << endl;
    
    return 0;
}

// Try this
/*
Do by getting user input with math operator
*/
