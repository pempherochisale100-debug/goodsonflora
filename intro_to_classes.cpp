#include  <iostream>

using namespace std;

class grade_book {
	public:
		// a function to display a welcome message
		void display_welcome_message () const{
			cout << "Welcome to the Grade book \n";
		}
};

int main () {
	
	// in the main function i will istantiate a mygradebook object 
	grade_book mygradebook;
	mygradebook.display_welcome_message();
	
	
	return 0;
}