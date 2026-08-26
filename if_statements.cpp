#include <iostream>

    using namespace std;
     
        int main () {
        	
        //if statements = do something if a condition is true 
		//                if not then don't do it	
		
		// the order of arranging the stateemnts matters 
		
		//types of if statements 
		//1. simple if statements 
		//      only works when there is one condition to be tested 
		      bool is_student = true;
		          if (is_student) {
		          	   cout << " Is thi a student? : "<< is_student << "\n";
				  }
		// the if else statements 
		// this has the ability to test other conditions a when the first condition
		// has failed the test 
		// works best when there are two test conditions 
		   is_student = false;
		   if (is_student) {
		   	   cout << "Is this a student? : " << is_student << "\n";
		  }
		  else {
		  	   cout << "Is this a student? : " << is_student << "\n";
		  }
		  
		  //then there is an if else if statements 
		  // it is used to test condtions more than 2
		  
	int day_number;
	
	  do {
	  	   cout << "Enter day number \n";
	  	      cin >> day_number;
	  }
	  while (day_number < 1 || day_number > 7);
	
	
	   
	    if ( day_number == 1) {
	    	  cout  << "It's monday \n";
		}
		else if ( day_number == 2) {
			  cout << "It's tuesday \n";
		}
		else if ( day_number == 3) {
			  cout << "It's Wednesday \n";
		}
		else if (day_number == 4) {
			 cout << "It's Thursday \n";
		}
		else if (day_number == 5) {
			 cout << "It's Friday \n";
		}
		else if (day_number == 6) {
			  cout << "It's Saturday \n";
		}
		else if ( day_number == 7) {
			 cout << "It's sunday \n";
		}
		      
		
		   int age;
		      cout << "Enter your age \n";
		         cin >> age;
		        
		          if (age >= 100) {
		          	   cout << "You are too old to enter this site \n";
				  }
				  else if ( age >= 18) {
				  	cout << "Welcome to this site \n";
				  }
				  else if (age == 0) {
				  	   cout << "you were just born \n";
				  }
				  else if ( age > 0 &&  age < 18 ) {
				  	   cout << "Your age denied you from accessing this site \n";
				  }
				  else {
				  	  cout << "Invalid age value entered \n";
				  }
		
		
		
		
		
		
		
		
		
		
		
		
        	
        	
        	return 0;
		}