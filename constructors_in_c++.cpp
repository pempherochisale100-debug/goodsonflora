#include <iostream> 

	using namespace std;
	
		class student {
			
			public:
				string name;
				int age;
				double gpa;
				
				// to make our own constructor we 
				// it should have the same name as the class name 
				// think of it as function 
				student (string name, int age, double gpa){
					// to assign the values to the attributes we do the following 
					
					this->name = name;
					this->age = age;
					this->gpa = gpa;
					
				}
		};
		
		class car {
			
			public:
				string make;
				string model;
				string color;
				int year;
				
				car (string make, string model, string color, int year){
					this->make = make;
					this->model = model;
					this-> color  = color;
					this->year = year; 
				}
		};
	
		int main () {
// constructor = special method that is automatically called when an object 
//               is instantiated 
//               useful for assigning values to attributs as arguments			
		// when instantiating the object we pass the valyes as arguments to the constructor
			
		student student1 ("Pemphero Chisale", 20, 3.7);
		// let's create another student 
		student student2 ("Emmacrate Banda", 18, 3.4);
		student student3 ("Chisomo Jere", 18, 3.8);
		
		// cars
		
		car car1 ("Honda", "FIT", "Gray", 2024);
		car car2 ("Toyota", "Prado", "Black", 2020);
		car car3 ("MItsubitsi", "Datsun", "White", 2004);
		
		// to  display my valyes i will do the following 
		
			cout << "FULL NAME => " << student1.name << "\n";
			cout << "AGE       => " << student1.age << "\n";
			cout << "GPA       => " << student1.gpa << "\n";
			
			cout << endl << endl;
			
			cout << "FULL NAME => " << student2.name << "\n";
			cout << "AGE       => " << student2.age << "\n";
			cout << "GPA       => " << student2.gpa << "\n";
			
			cout << endl << endl;
			
			cout << "FULL NAME => " << student3.name << "\n";
			cout << "AGE       => " << student3.age << "\n";
			cout << "GPA       => " << student3.gpa << "\n";
			
			cout << endl << endl;
			
			cout << "MAKE  => " << car1.make << "\n";
			cout << "MODEL => " << car1.model << "\n";
			cout << "COLOR => " << car1.color << "\n";
			cout << "YEAR  => " << car1.year << "\n";
			
			cout << endl << endl;
			
			cout << "MAKE  => " << car2.make << "\n";
			cout << "MODEL => " << car2.model << "\n";
			cout << "COLOR => " << car2.color << "\n";
			cout << "YEAR  => " << car2.year << "\n";
			
			cout << endl << endl;
			
			cout << "MAKE  => " << car3.make << "\n";
			cout << "MODEL => " << car3.model << "\n";
			cout << "COLOR => " << car3.color << "\n";
			cout << "YEAR  => " << car3.year << "\n";
			
			
			
			
			
			
			return 0;
		}