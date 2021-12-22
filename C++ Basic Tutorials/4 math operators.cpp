// 4 Math Operators

#include <iostream>

using namespace std;

int main() {
	
	int a, b;
    a = 7;
    b = 2;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl << endl;
	
    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;
    cout << endl;

    return 0;
}

// Try this
/*
In C++,

7 / 2 = 3 (int)
7.0 / 2 = 3.5 (float/double)
7 / 2.0 = 3.5 (float/double)
7.0 / 2.0 = 3.5 (float/double)
*/
