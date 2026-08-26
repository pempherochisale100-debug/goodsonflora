#include <iostream>
  using namespace std;
  
     int main () {
     	//The const keyword specifies that a variable's value is a costant 
     	//tells the compiler to prevent anything from modfi=ying it
     	// (read-only)
     const	double pie = 3.14159;
     	// when the variable pie is declared the way it is 
     	// it can be changed anywhere in the program but if we want the value
     	//of pie to be a contant we can append a const keyword before 
     	//it's datatype
     	double radius = 10;
     	double circumference = 2 * pie * radius;
     	
    const int SPEED_LIGHT = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
     	
     	   cout << "Circumference = " << circumference << "cm \n";
     	cout << "Light of speed = " << SPEED_LIGHT << "m/s \n";
     	cout << "Resolution width = " << WIDTH  << "pixels \n";
     	cout << "Resolution height = " << HEIGHT << "pixels \n";
     	
     	
     	
     	return 0;
	 }