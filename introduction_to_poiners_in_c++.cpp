#include <iostream>

	using namespace std;
	
		int main () {
// pointer = variable that stores the memory address of another variable 
//           sometimes it's easier to work with an address

// & address of operator 
// * dereference operator	

    string name = "pemphero";
	int age = 20;
	
	string pizzas [5] = {"pizza1","pizza2","pizza3", "pizza4", "pizza5"};
	
	string *pointer_name = &name;
	int *pointer_age = &age; 
	
	//this will produce an error because array name isa a costant pointer
	//string pointer_pizzas = &pizzas;
	string *pointer_pizzas = pizzas;
	
	cout << "************************************************\n";
	cout << "                 VALUES                         \n";
	cout << "************************************************\n";	
	
	    cout << "The value of name => " << name << "\n";
		cout << "The value of age  => " << age << "\n";
		cout << "The value of pointer to name => " << *pointer_name << "\n";
		cout << "The value of pointer to age  => " << *pointer_age << "\n";
		cout << "The value of pointer to first element of array pizzas => " << *pointer_pizzas << "\n";
		
	cout << "************************************************\n";
	cout << "                 ADDRESSES                      \n";
	cout << "************************************************\n";
		
		cout << "The address of name => " << &name << "\n";
		cout << "The address of age  => " << &age << "\n";
		cout << "The address of pointer to name => " << pointer_name << "\n";
		cout << "The address of pointer to age  => " << pointer_age << "\n";	
		cout << "The address of first element of array pizzas => " << pizzas << "\n";
		cout << "The address of pointer to the array pizza    => " << pointer_pizzas << "\n";
			
			
			
			
			return 0;
		}