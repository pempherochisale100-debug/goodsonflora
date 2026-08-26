#include <iostream>

	using namespace std;
	
		int main () {
			
string questions [] = {
	                   "1. What year was C++ created? ",
	                   "2. Who invented C++?",
	                   "3. What is the predecesor of C++?",
	                   "4. Is the earth flat?"
	                   
                      };
					  
string options [] [4] = {
	
	                     {"A. 1966", "B. 1975", "C. 1985", "D. 1989"},
						 {"A. Guido van Rossun", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckeberg"},
						 {"A. C", "B. C+", "C. C--", "D. B++"},
						 {"A. Yes", "B. No", "C. Sometimes", "D. What's earth?"}
                        };
                        
char answer_key [] = {'C', 'B', 'A', 'B'};

   int size_of_questions = sizeof (questions) / sizeof (questions [0]);
   char guess;
   int score;
   
   
   for (int i = 0; i < size_of_questions; i++) {
   	cout << "###############################################\n";
   	  cout << questions [i] << "\n";
   	cout << "###############################################\n";
   	
   	  for (int j = 0; j < sizeof (options [i]) / sizeof (options [i] [0]); j++){
   	  	
   	  	cout << options [i] [j] << "\n";
   	  	
		 }
		 
	cin >> guess;
	guess = toupper (guess);
	
	   if (guess == answer_key [i]) {
	   	  cout << "CORRECT \n";
	   	    score++;
	   }
	   else {
	   	 cout << "WRONG \n";
	   	cout << "Answer => " << answer_key [i] << "\n";
	   }
	
   }
	cout << endl << endl;
	
	cout << "###############################################\n";
	cout << "                    RESULTS                    \n";
	cout << "###############################################\n";
	
	  cout << "CORRECT GUESSES     => " << score << "\n";
	  cout << "NUMBER OF QUESTIONS => " << size_of_questions << "\n";
	  cout << "SCORE               => " << (score / (double)size_of_questions) * 100 << "% \n";
			
			
			
			
			return 0;
		}