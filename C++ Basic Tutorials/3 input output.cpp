// 3 Input Output

#include <iostream>

using namespace std;

int main() {
	
	//declare a variable to store the input
	string name = "ameer";
	
	//print some question
	cout << "Enter your name : ";
	
	//get input
	cin >> name;
	
	
	
	//declare a variable to store the input
	int age = -1;
	
	//print some question
	cout << "Enter your age : ";
	
	//get input
	cin >> age;
	
	
	
	//print the output
	cout << "\nYour name is " << name << "." << endl;
	cout << "Your age is " << age << " years old." << endl;
	
	
	return 0;
}
	
// Try this
/*
You can use \n or endl to create new line with cout.
Try to get string input with cin or getline()
*/
