#include <iostream>

   using namespace std;

      int main () {
      	
      string name;
         cout << "Enter your name \n";
            getline (cin, name);
// .length () function returns he length of the string
      if (name.length() > 12) {
          cout << "Your name can't be 12 characters long \n";
      }
      else {
        cout << "Welcome " << name << "\n";
      }
// checks if a string is empty
     if (name.empty()){
        cout << "You did not enter your name \n ";
     }
     else {
          cout << "Hello " << name << "\n";
     }

     // clears the value in the variable
     //++++++++++++++++
         name.clear();
            cout << "your name has been cleared \n";
         
         
            cout << "Hello " << name << "\n";
     
	 cout << "Enter your name \n";
	    getline (cin, name );   

   // to append the string with other characters we use the append () methods
   name = name.append ("@gmail.com");
      cout << "Your user name is  " << name << "\n";
      
   // to return the character at a certain index we use the .at() method 
   // the index starts at 0
      name = name.at(0);
       cout << "The character at index 0 = " << name << "\n"; 
    /*  char name1 = name.at (1);
	   cout << "The character at index 1 = " << name1  << "\n";
	 char name2 = name.at (2);
	   cout << "The character at index 2 = " << name2 << "\n";
	  char name3 = name.at (3); 
	   cout << "The character at index 3 = " << name3 << "\n";
	  char name4 = name.at (4); 
	   cout << "The character at index 4 = " << name4 << "\n";
    */
    //string name ;
       cout << "Enter your name \n";
          getline (cin, name);
          
       // to insert a character at a given index we use the insert method 
    name = name.insert (0, "@");
      cout << "Edited name is:: " << name << "\n";
    
    // to find the occurence of certain characters we use the .find () method 
    // llet's find the occurence of the first white space in the name 
      
        cout << "First space is at index of " << name.find (' ') << "\n";

// to erase the portion of the string we use the erase function 
// arguments are the beginnind and the ending index 
   name.erase (0, 3);
      cout << "Erased name is :: " << name << "\n";


      return 0;
      }
