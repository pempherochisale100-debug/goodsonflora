#include <iostream>

	using namespace std;
	
	float area_of_square (float length);
	float area_of_cube (float length);
	
		int main()  {
			
			
// return = return a value back to the spot where you called the encompassing 
//          function			
			
			
			
	float length;
	float area;
	   
	   
	   do {
cout << "##############AREA###OF###SQUARE###############################\n";
	   	    cout << "Enter length of the square \n";
	   	       cin >> length;
	   	         
	   }
	   while (length <= 0);
	      area = length * length;
	   	           cout << "Area of square = " << area << "cm^2 \n";
	   
	      cout << endl << endl;
cout << "##################################################################\n";
cout << "##############AREA###OF###CUBE###############################\n";	
	do {
		cout << "Enter length of the cube \n";
		   cin >> length;
		     
	}
	while ( length <= 0);
	
	    area = length * length * length;
		        cout << "Area of cube = " << area << "cm^3 \n";
cout << "##################################################################\n";	
			
			
			
			
			
			
			
			
			
			return 0;
		}
		
		float area_of_square (float length ) {
			float result;
			  result = length * length;
			     return result;
		}
		
		float area_of_cube (float length) {
			 float result; 
			   result = length * length * length;
			      return result;
		}
		
		
		
		
		
		
		
		
		
		