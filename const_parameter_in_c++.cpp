#include <iostream>

	using namespace std;
	
	void print_info (const string name, const int age);
	
		int main () {
			
//const parameter = parameter that is effectively read-only 
//                  code is more secure and conveys intent useful for references and poinyers

     string name = "pemphero";
     int age = 20;
     
        print_info (name, age);
			
			
			
			
			return 0;
		}
		
		void print_info (const string name, const int age){
			
			 //  name = " ";
			 //  age = 0;
			
			cout << "Your name is => " << name << "\n";
			cout << "Your age is  => " << age  << "\n";
		}