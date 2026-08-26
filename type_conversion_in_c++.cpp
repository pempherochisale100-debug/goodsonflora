#include <iostream>

   using namespace std;
   
      int main () {
    // type conversion = conversion of a value from one data type 
	//                   to another
	//       implicit = automatic
	//       explicit = precede value with the new data type (int)
	
	    	
      	int x = 3.14;
// since x has been declared as int, any decimal following it will be 
// truncated thus the value of x in this case will be 3
      	   cout << x << endl; // this print 3
// this means that the compiler has already implicitly converted the 
// value to an int datatype

  // but the truth is that i can convert the datatype int to double 
  // explicitly by writing it like
     int num = (double) x;
       cout << "The converted type of x = " << num << "\n";
      	
      	
      	// suppose there was an online exam with 10 questions and a student 
      	// scores 8 questions out of 10 and you want to display the score 
      	// as a percentage 
      	//this situation would need an explicit tpye conversion
		  
		  
int correct_answers = 8;
int total_questions = 10;
double score;
    score = (correct_answers / total_questions) * 100;
  
  cout << "Your score = " << score << "% \n";
  // this statement will display 0%  because of integer division which 
  // truncates the decimal portion
     //to display the whole number inclding frat=ctions , one of the 
	 // divisors and dividends needs to be of other datatype 
	 
	     
		  
score = (correct_answers / (double)total_questions) * 100;
 cout << "Your score is = " << score << "% \n"; 		  
		  
		        	
      	
      	return 0;
	  }