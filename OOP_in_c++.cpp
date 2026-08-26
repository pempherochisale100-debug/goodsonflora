#include <iostream>

	using namespace std;
	//a class is like a blue print in which the methods are defined 
	// methods are functions that a particular objwcts can perform 
	class human {
		
		public:
			string name;
			string occupation;
			int age;
			
			//these are methods defined based on what a human can perform 
			void eat () {
				cout << "This person is eating \n";
			}
			
			void drink () {
				cout << "This person is drinking \n";
			}
			
			void sleep () {
				cout << "This person is sleeping \n";
			}
	};
	
	class cars {
		
		public:
		string make;
		string model;
		string color;
		int year;
		
	    	void accelerate () {
	    		cout << "You just stepped on the gas pedal \n";
			}
			
			void breaks () {
				cout << "You stepped on the break pedals \n";
			}
			
			void start_engine () {
				cout << "The engine is now on \n";
			}
	};
	
		int main () {
			
// object = collection of attributes and methods 
//          they can have characteristics and could perform actions
//          can be used to mimic real world items (example. phone, book, dog etc)
//          created from a class which acts as a "blue print" 			
			
		 
		
// to create a an object we type class name followed by an identifier
// classes are kinda similar to structs however classes have methods which
// are functions an object can also perform 

    human human_1;
	human human_2;
	
	cars car_1;
	
	car_1.make = "Mazda";
	car_1.model = "CX-5";
	car_1.color = "Black";
	car_1.year = 2026;
			
    
    human_1.name = "Pemphero Chisale";
    human_1.occupation = "Student";
    human_1.age = 20;
    
    human_2.name = "Emmacrate J Banda";
    human_2.occupation = "Student";
    human_2.age = 18;
    
        cout << "FULL NAME     => " << human_1.name << "\n";
        cout << "OCCUPATION    => " << human_1.occupation << "\n";
        cout << "AGE           => " << human_1.age << "\n";
      
	  cout << endl << endl;
	    
    human_1.eat();
	cout << endl;
	human_1.drink();
	cout << endl;
	human_1.sleep();
		
		cout << endl << endl;
		
		cout << "FULL NAME     => " << human_2.name << "\n";
        cout << "OCCUPATION    => " << human_2.occupation << "\n";
        cout << "AGE           => " << human_2.age << "\n";
        
		cout << endl << endl;
		
	human_2.eat();
	cout << endl;
	human_2.drink();
	cout << endl;
	human_2.sleep();
	
	    cout << endl << endl;
		
		cout << "MAKE      => " << car_1.make << "\n";
		cout << "MODEL     => " << car_1.model << "\n";
		cout << "YEAR      => " << car_1.year << "\n";
		cout << "COLOR     => " << car_1.color << "\n";	
		
	cout << "Car functions \n";
	 
	    car_1.accelerate();
		    cout << "\n";
		car_1.breaks();
		    cout << "\n";
		car_1.start_engine();
		    cout << "\n";	
			
			
			return 0;
		}