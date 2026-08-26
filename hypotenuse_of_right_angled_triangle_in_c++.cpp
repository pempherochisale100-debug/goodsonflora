#include <iostream>
#include <cmath>
 
   using namespace std;
   
      int main () {
      	
      	double side_a;
      	double side_b;
      	double side_c;
      	
      	   cout << "Enter the length of side a: \n";
      	       cin >> side_a;
      	   cout << "Enter the lenght of side b: \n";
      	       cin >> side_b;
      	
      	side_c = sqrt (pow (side_a, 2) + pow (side_b, 2));
      	
      	    cout << "The hypotenuse of this triangle = " << side_c << "cm \n";
      	
      	
      	return 0;
	  }