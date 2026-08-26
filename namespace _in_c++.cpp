#include <iostream>
   using namespace std;
   // to create a namespace we use the key word 
   // namespace followed by the name of the name space we are 
   // creating
   // to use variables declared in a name space we use the scope resolution
   //operator 
   // syntax => name_of_namespace::variable_name
   namespace first{
   	   int number = 1;
   }
   namespace second{
   	   int number = 2;
   }
      int main () {
      	//int number = 0;
      	//int number3 = 1;
      	   // this will display the value of the local scope
			 // thus the value of number = 0 
      	   //  cout << "The value of number = " << number << endl;
      	    
      	    // to display the value of number in the first namespace
      	    // we use the scope resolution operator
			//thus the value of number = 1 in this case
      	    cout << "The value of number in the namespace first = " << first::number << endl;
      	
             // to display the value of number from the second
			 //namespace, we go like
			    cout << "the value of number in the second namespace = " << second::number << endl;
				
		// if i decide to use the 'using namespace std;'
		//stetment then i will not use the scope resolution 
		//operator
		    using namespace first;
			   cout << number << endl;		
				
				    	
      	return 0;
	  }