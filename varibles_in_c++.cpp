#include <iostream>

    using namespace std;
      
         int main () {
         	
         	// integer (these are whole numbers)
         	int age = 20;
         	int year = 2026;
         	int days = 7;
         	
         	    cout << "You are " << age << " years old\n";
         	    cout << "It is " << year << "\n";
         	    cout << "A week has " << days <<" days \n";
        // with integers the fraction portion of the value is
        //truncated when the number has decimal portion
        //that's where comes now the double datatype
           cout << endl << endl;
            
        //double (number including decimal)
           double price = 1000.99;
           double gpa = 2.4;
           double temperature  = 21.2;
           
             cout <<" This costs MWK" << price << endl;
			 cout <<" Your GPA is " << gpa <<"\n";
			 cout <<"It's  hot with " << temperature << " degrees celcius \n";
			  cout << endl << endl;
        //to store a single character in c++ we use the char datatype 
		// a character is sorrounded within the set of qoutes
		    char grade = 'A';
			char initial = 'P';
			char sex = 'M';
			   
			    //toi display the values in these varoiables we can see 
				// that if we try to hold more than one character in the value
				// the compiler produes an error
			cout << " Your grade is " << grade << "\n";
			cout << "Wellcome Mr." << initial << " Chisale \n";
			cout << " From our info your a of sex " << sex << "\n"; 
			
			       cout << endl << endl;
	//boolean datatype can either be true of false 
	//true is diplayed as 1
	//false is diplayed as a 0
	   bool student = true;
	   bool power = false;
	   bool for_sale = true;
	   
	       cout << "You are a student: " << student << "\n";
	       cout << "Is power on? : " << power << "\n";
	       cout << "Is this for sale? : " << for_sale << "\n";
	       
	       cout << endl << endl;
// string (objects that represents a sequence of text
string name = "pema";
string day = "Friday";
string food = "Chigumu";
string address = " 123 chiliphiza madisi";

    cout << "Your name is " << name <<"\n";
    cout << "On " << day << ", ";
    cout << "You like: " << food << "\n";
    cout << "This is where you live " << address << "\n";
    
      cout << endl << endl;
			    
			
			
			
			
			
				
         	
         	return 0;
		 }