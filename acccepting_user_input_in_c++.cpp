#include <iostream>

   using namespace std;
   
     int main () {
    // to display output on the screeb we use  the stream insertion operator
    //     cout << (insertion operator)
    
     // to get user input from the screen we use the stream extraction operator
    // cin  >> (extraction operator)
    
    //let me declare a variable name 
        string name;
        int age;
        string full_name;
          cout << "Enter your full name \n"; 
           getline (cin, full_name);
              cout << "Your full name = " << full_name << "\n";
    // i will then create a prompt for the user to enter a username
        cout << "What's your name? \n";
           // i will get the name and then store it in the name variable
           cin >> name;
        cout << "What's your age ? \n"; 
           cin >> age;
        
        // then i will display what the user's name is by 
    cout << "Hello " << name << "\n";
    cout << "You are " << age << " years old \n";
    
    //now let's try to get the string that contain spaces in it 
       cout << "What's your full name ? \n";
          cin >> full_name;
        
            cout << "Your full name = " << full_name << "\n";
    // but the problem with the standard cin is that 
    // the reading process will have to stop when the white space character
    //is encounterd to solve that there is a function that we normally use
           string fullname;
        cout << "What's your full name ? \n";
          getline (cin >> ws, fullname);
             cout << "Full name = " << fullname << "\n";
       
     	
     	
     	
     	return 0; 
	 }