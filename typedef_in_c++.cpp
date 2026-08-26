 #include <iostream>
 
    using namespace std;
    
    typedef string text_t;
    typedef int number_t;
    
    // using the using keyword
       using student_t = string;
       using price_t = double;
       
    
       int main () {
       	
       	//typedef = erserved keyword used to create an additional name
       	//          (allias) for another datatype.
       	//          New identifier for an existing type helps lwith readability
       	//          and reduces typos 
       	//          used when there is a clear benefit 
       	//          Replaced with "using" (work better with teplates)
       	
    
       	   text_t name = "Pemphero";
       	   number_t age = 20;
       	   
       	   student_t student_name = "Emmacrate james Banda";
       	   price_t amount = 7500.26;
       	     
       	     cout << name << " Is " << age << " years old \n";
    cout << "Hello " << student_name << endl;
    cout << "You have to pay " << amount << " to have these pants \n";
       	
       	return 0;
	   }