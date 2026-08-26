#include <iostream>
#include <cmath>
	using namespace std;
	
	// here is an exapmle we will create an animal class
	
	class animal {
		
		public :
			bool is_alive = true;
		
		void eat () {
			cout << "This animal is eating \n";
		}
		
	};
	
	class dog : public animal {
		
		public:
			
		//	bool is_alive = true;
			
			void bark () {
				cout << "This dog goes woof \n";
			}
	};
	
	class cat : public animal {
		
		public: 
			
			//bool is_alive = true;
			
			void meow () {
				cout << "This cat goes meow \n";
			}
	};
	
	class shape {
		public: 
			double area;
			double volume;
	};
	
	class cube : public shape {
		public:
			double side;
			
			cube (double side) {
				this->side = side;
				this->area = side * side * 6;
				this->volume = pow (side, 3);
			}
	};
	
	class sphere : public shape {
		 public:
		 	double radius;
		 	
		 	sphere (double radius) {
		 		this->radius = radius;
		 		this->area = 4 * M_PI * pow (radius, 2);
		 		this->volume = (4.0 / 3.0) * M_PI * pow (radius, 3);
			 }
	};
	
		int main () {
			
// inheritance = Is when a class can receive attributes and methods from another 
//               class
//               children class inherit from the parent class
//               helps to reuse similar code found within multiple classes

		dog dog1;
		cat Cat;
		
		string result;
		
		if (dog1.is_alive == true) {
			result = "ALIVE\n";
		}	
		else {
			result = "DEAD\n";
		}
		
		if (Cat.is_alive == true) {
			result = "ALIVE\n";
		}	
		else {
			result = "DEAD\n";
		}
			
		cout << "DOG STATUS  => " << result << "\n";
		cout << "CAT STATUS  => " << result << "\n";	
		dog1.eat();
		dog1.bark(); 
		Cat.meow();	
		
		
		cout << endl << endl << endl;
			
			float length;
			  cout << "Enter length of the cube \n";
			     cin >> length;
			
			cube Cube (length);
			cout << "Area of the cube = " << Cube.area << "cm^2\n";
			cout << "Volume of the cube = " << Cube.volume << "cm^3\n";
			
			float radius; 
				cout << "Enter radius of the sphere \n";
					cin >> radius;
					
			sphere Sphere (radius);
			cout << "The area of the sphere = " << Sphere.area << "cm^2\n";
			cout << "The volume of th sphere = " << Sphere.volume << "cm^3\n";
			
			
			
			
			
			
			
			
			return 0;
		}