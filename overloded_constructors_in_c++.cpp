#include <iostream>

	using namespace std;
	
	class pizza {
		
		public:
			string topping1;
			string topping2;
			
				pizza () {
					
				}
			
				pizza (string topping1) {
					this->topping1 = topping1;
				}
				pizza (string topping1, string topping2){
					this->topping1 = topping1;
					this->topping2 = topping2;
				}
	};
	
		int main () {
			
// overloaded constructors = multiple constructors with the same name bt diffrent parameters
//                           allows for varying arguments when instantiating an object

			pizza pizza1 ("pepperoni");
			
			pizza pizza2 ("mushroom", "peppers");
			
			pizza pizza3;
			
			cout << "PIZZA_1 TOPPING_1 => " << pizza1.topping1 << "\n";
			    cout << "\n\n";
			cout << "PIZZA_2 TOPPING_1 => " << pizza2.topping1 << "\n";
				cout << "\n\n";
			cout << "PIZZA_2 TOPPING_2 => " << pizza2.topping2 << "\n";	
				cout << "\n\n";
			
			
			return 0;
		}