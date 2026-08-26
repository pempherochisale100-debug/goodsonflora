#include <iostream>

	using namespace std;
	

	 struct cars {
	 	
	 	string model;
	 	int year;
	 	string color;
	 	
	 };
	 // to pass by refernce we use the address of operator
	void display_car_members (cars &galimoto);
	void paint_car (cars &galimoto, string color);
	
		int main ()   {
			
			
			cars car1;
			cars car2;
			
			car1.model = "Benz";
			car1.year = 2025;
			car1.color = "grey";
			
			car2.model = "BMW";
			car2.year = 2025;
			car2.color = "Black";
			
			paint_car (car1, "silver");
			paint_car (car2, "gold");
			
			// with structs they are passed by value to functions 
			// to demonstrate that let's diplay the address of car1 outside the function 
			// and within the function
			cout << "Address of car1 outside function => " << &car1 << "\n";
			display_car_members (car1);
			
			cout << endl << endl;
			
			cout << "Address of car2 outside function => " << &car2 << "\n";
			display_car_members (car2);
			
			
			
			return 0;
		}
		
		
		void display_car_members (cars &galimoto) {
			
			cout << "MODEL         => " << galimoto.model << "\n";
			cout << "YEAR OF MAKE  => " << galimoto.year << "\n";
			cout << "COLOR         => " << galimoto.color << "\n";
			cout << "Address of car within function => " << &galimoto << "\n";
			
		}
		
		
		void paint_car (cars &galimoto, string color) {
			
			
		    galimoto.color = color;	
			
		}
		
		
		
		
		
		
		
		
		
		
		