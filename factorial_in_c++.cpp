#include <iostream> 

	using namespace std;
	
	int factorial (int number);
	int recursive_factorial (int number);
	
		int main () {
			
			int number;
			 cout <<"What number would you like to find it's factorial? \n";
			   cin >> number;
			
			
cout << "Factorial of " << number << " iteratively is = " << factorial (number) << "\n";	
cout << "Factorial of " << number << " recursively is = " << recursive_factorial (number) << "\n";
			
			return 0;
		}
		
		int factorial (int number) {
			
			int result = 1;
			
			for (int i = 1; i <= number; i++){
				result = result * i;
			}
			
			return result;
			
		}
		
		int recursive_factorial (int number) {
			
			if (number > 0) {
				int result = number * recursive_factorial ( number - 1);
				   return result;
			}
			else {
				return 1;
			}
		}