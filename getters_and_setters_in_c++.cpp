#include <iostream>

	using namespace std;
	
	// for example ia am going to create a stove object 
	
	class stove {
		// i will set a temperature attribute of type int 
		
		// but if i don't want people to mess with my temperature i can set the 
		// the method to be private
		
		// that is following the rule of abstraction, we are hiding unnecessary data
		// from users
			private:
				//so since this attribute is public it can be accessed from anywhere
				//and there for can be change from anywhere as well
		int temperature = 0;
		
		//if i neede access to this temperature attribute i will need a getter
		// is function that will make an attribute READABLE 
		// i will add a public acces modifier 
		// then i will write a getter
		   public :
		   	
		   	// if you have a constructor you can invoke the setters from within the class
		   	
		   	stove (int temperature){
		   		set_temperature (temperature);
			   }
		   	// i will specify int since we are returning an int 
		   	  int get_temperature () {
		   	  	// all i am going to do here is to return my temperature
		   	  	  return temperature;
		   	  	
				 }
		// if i want private attributes to be writtable i also add a setter
		void set_temperature (int temperature) {
			
			//within a setter we add some additional logic or checks 
			if (temperature < 0) {
				this->temperature = 0;
			}
			else if (temperature >= 10) {
				this->temperature = 10;
			}
			else {
				this->temperature = temperature;
			}
			
			
			   
		}
		
	};
	
		int main () {
			
			
	// Abstraction = hiding unnecessary data from outside a class
	// getter = function that makes a private attribute READABLE	
	//setter = function that makes a private attribute WRITTABLE 
	
	      double temp;
	         cout << "Enter temperature \n";
	         	cin >> temp;
			
	// i am aso going to instantiate a stove object 
	
	// then i will also need to instantiate  a stove object 
	
	stove stove_1 (temp);	
	
	// for the user to change the temperature i will invoke the set_temperature 
	//function 
	
//	stove_1.set_temperature(temp);	
			
	// for example i can set the temperatyure that can scortch the earth
	
	// i have only set the temperature attribute readable so it can't 
	// be changed and thatnotwithstanding i will turn the below line lof code into 
	// a comment 
//	stove_1.temperature = 1000000;
	// and instead of displaying the attribute i am going to invoke the 
	// get function
	cout << "TEMPERATURE = " << stove_1.get_temperature() << "\n";		
			
			
			
			
			
			
			
			
			
			return 0;
		}