#include <iostream>

   using namespace std;
   
      int main () {
      // arithmetic operators return the result ofa specific 
	  //arithmetic operation	 (*, +, -, /, %)
	  
	    int students = 20;
	    
	    cout << "THE INCREMENTING OPERATOR \n";
	       cout << "Current number of students : " << students << "\n";
	     		cout << endl << endl;
	       students = students + 1;
	       cout << "Number of students  + 1 = " << students << "\n";
	       
	       // short way of writing this incrementing students
	       students += 1; // adds one students 
	       cout << "Number of students  + 1 = " << students << "\n";
	       
	       students++; // adds one students to the ekxisting number of students
	       
       	    cout << "Number of students  + 1 = " << students << "\n";
	       		cout << endl << endl;
	       		
	       		cout << "THE DECREMENTING OPERATOR \n";
		   cout << "Current number of students = " << students << "\n";
	      // to decrement the value of a variable we use the decrement operator
		    	cout << endl << endl;
			 students = students - 1;
			 cout << "Number of students - 1 = " << students << "\n";
			 
			 students -= 1;
			 cout << "Number of students - 1 = " << students << "\n";
			 
			 students--;
			 cout << "Number of students - 1 = " << students << "\n"; 
			     cout << endl << endl;
			     
			     cout << "THE MULTIPLICATION OPERATOR \n";
			 cout << "Current number of students = " << students << "\n";
			 	 cout << endl << endl;
		// to multiply the students we use the asterisks symbiola 
		   students = students * 2;
		   cout << "Doubled number of students = " << students << "\n";
		   
	// to doubke the students using the short hand method 
	    students *= 2;
	    cout << "Double number of students = " << students << "\n";
	     	cout << endl << endl;
	     	
	      cout << "THE DIVISION OPERATOR \n";
		  cout << "Current number of students = " << students << "\n";
	// to divide the number of students by two we go like:
	        cout << endl << endl;
	     students = students / 2;
		 cout << "The halved number of students = " << students << "\n";
		 
		    students /= 2;
			cout << "The halved number of students = " << students << "\n";	  
		 			cout << endl << endl;
		 			
		 		cout << "THE MODULUS OPERATOR \n";
		  cout << "Current number of students = " << students << "\n";
		  cout << endl << endl;
// to find the remainder after division we go with the modulus operator 
  students = students % 7;
     cout << "Remainder = " << students << "\n";
	
  students %= 3;
      cout << "Remainder = " << students << "\n"; 
	  
	  
	  
	 // these operators have what we call operator precedence 
	 
	   // 1. parenthensis
	   // 2. multiplication / division 
	   // 3. addition / subtraction
	   cout << endl << endl;
	   cout << "OPERATOR PRECEDENCE \n";
	    int eqn = 6 - 5 + 4 * 3 / 2;
	       cout << "Result = " << eqn << "\n";
		  
		  
		  
		  
		   
      	
      	
      	return 0;
	  }