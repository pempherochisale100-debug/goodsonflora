#include <iostream>

  using namespace std;
     
     int main () {
   // switch = alternative to using many 'else if' statements
             // compares one value against cases  	
     	
     	int month;
     	
     	   do {
     	   	   cout << "Enter a month (1-12 ) \n";
     	   	      cin >> month;
			}
			  while ( month < 0 || month > 12);
			  
		// using many if else if statements it would look like 
		    if (month == 1) {
		    	  cout << "It's January \n";
			}
			else if (month == 2){
				  cout << "It's Ferbruary \n";
			}
			else if (month == 3){
				  cout << "It's March \n";
			}
			else if (month == 4){
				  cout << "It's April \n";
			}
			else if (month == 5){
				  cout << "It's May \n";
			}
			else if (month == 6){
				  cout << "It's June \n";
			}
			else if (month == 7){
				  cout << "It's July \n";
			}
			else if (month == 8){
				  cout << "It's Augast \n";
			}
			else if (month == 9){
				  cout << "It's September \n";
			}
			else if (month == 10){
				  cout << "It's October \n";
			}
			else if (month == 11){
				  cout << "It's November \n";
			}
			else if (month == 12){
				  cout << "It's December \n";
			}
			else {
				cout << "invalid month input \n";
			}
			
			
	// but with the concept of switches it can handle this situation best
	     
		 switch (month) {
		 	  case 1: {
		 	  	     cout << "it is January \n";
		 	  	     
				break;
			   }
			   case 2: {
			   	     cout << "It is Ferbruary \n";
				break;
			   }
			   case 3: {
			   	     cout << "It is March \n";
				break;
			   }
			   case 4:{
			   	       cout << "it is April \n";
				break;
			   }
			   case 5: {
			   	       cout << "it is May \n";
				break;
			   }
			   case 6: {
			   	     cout << "It is June \n";
				break;
			   }
			   case 7: {
			   	    cout << "It is July \n";
				break;
			   }
			   case 8: {
			   	    cout << "It is Augast \n";
				break;
			   }
			   case 9: {
			   	     cout << "It is September \n";
				break;
			   }
			   case 10: {
			   	    cout << "It is October \n";
				break;
			   }
			   case 11:{
			   	     cout << "It is November \n";
				break;
			   }
			   case 12: {
			   	     cout << "It is December \n";
				break;
			   }
			   default : {
			   	    cout << "This is not a month \n";
				break;
			   }
		 }	
		
		
 char grade; 
	
	   cout << "Enter letter grade ('A','B','C','D','F') \n";
	       cin >> grade;

		   
		   
		switch (grade) {
			  case 'A': {
			  	   cout << "You did Great !!! \n";
				break;
			  }
			  case 'B': {
			  	   cout << "You did Good !!! \n";
				break;
			  }
			  case 'C': {
			  	   cout << "You did Okay !!! \n";
				break;
			  }
			  case 'D': {
			  	   cout << "You did NOT do Good \n";
				break;
			  }
			  case 'F': {
			  	   cout << "YOU FAILED!!! \n";
				break;
			  }
			  default : {
			  	   cout << "Your choices should be A, B, C, D or F \n";
			    break;
			  }
		}
		
		if (grade == 'A' || grade == 'a'){
			cout << "You did great!! \n";
		}	 
		else if (grade == 'B' || grade == 'b'){
			cout << "You did good \n";
		}
		else if (grade == 'C' || grade == 'c') {
			cout << "You did okay \n";
		}
		else if (grade == 'D' || grade == 'd'){
			cout << "You did NOT do good \n";
		}
		else if (grade == 'F' || grade == 'f'){
			  cout << "You FAILED this subject \n";
		}
		else {
			cout << "Invalid grade entered \n";
		}
		 
cout << "*******************CALCULATOR*************************\n";
     char sign;
	 double number1, number2, result;
	 
	     cout << "Enter either (+, -, *, /) \n";
		     cin >> sign;
			
if (sign == '+' || sign == '-' || sign == '*' || sign == '/'){
	    
	 
	   switch (sign) {
	   	  case '+':{
	   	  	    cout << "YOU SELECTED ADDITION \n";
	   	  	    cout << "Enter first number \n";
		  	     cin >> number1;
		  	cout << "Enter first number \n";
		  	     cin >> number2;
	   	  	       result = number1 + number2;
	   	  	         cout << number1 << " + " << number2 << " = " << result << "\n";
				break;
			 }
		  case '-': {
		  	cout << "************YOU SELECTED SUBTRACTION************* \n";
		  	cout << "Enter first number \n";
		  	     cin >> number1;
		  	cout << "Enter first number \n";
		  	     cin >> number2;
		  	    result = number1 - number2;
		  	    cout << number1 << " - " << number2 << " = " << result << "\n";
		  	       
			break;
		  }
		  case '*': {
		  	cout << "*********YOU SELECTED MULTIPLICATION************** \n";
		  	cout << "Enter first number \n";
		  	     cin >> number1;
		  	cout << "Enter first number \n";
		  	     cin >> number2;
		  	    result = number1 * number2;
		  	    cout << number1 << " * " << number2 << " = " << result << "\n";
			break;
		  }
		  case '/': {
		  	cout << "************YOU SELECTED DIVISION*********** \n";
		  	cout << "Enter first number \n";
		  	     cin >> number1;
		  	cout << "Enter first number \n";
		  	     cin >> number2;
		  	   result = number1 / number2;
		  	   cout << number1 << " / " << number2 << " = " << result << "\n";
			break;
		  }
	   }  
}	
else {
	cout << "Enter a valid operator \n"; 
}	 
		 
		 
		 
		 
		 
		 
		 
		 
		 	
			
			
			
			
			
     	
     	return 0;
	 }