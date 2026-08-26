#include <iostream>

	using namespace std;
	
		int main () {
			
			
// fill () = fills a range of elements with a specified value 
//           fill (begin, end, value);			
			
	//suppose i have an array of foods all of the same food 
	
string foods [10] = {"chimanga", 
                     "chimanga", 
					 "chimanga", 
					 "chimanga", 
					 "chimanga", 
					 "chimanga", 
					 "chimanga", 
					 "chimanga", 
					 "chimanga", 
					 "chimanga"};	
			
		for (string food : foods){
			cout << food << "\n";
		}	

// this would become evetually inefficient especially when the number of elements
// increses drastically
// there are  a number of solultions one of them is the fill function 

   const int SIZE = 150;
   string drinks [SIZE];
   
   // by invoking this function i have managed to print the value
   // kwale 100 times that kis reducing the amount of code 
   
   // i can also fill array in different sizes 
   
   //this fill the first elements with chimsngs
     fill ( drinks, drinks + (SIZE / 3), "chimanga");
     
     // this fills the second 50 elements with  the value mtedza
     fill ( drinks + (SIZE / 3), drinks + (SIZE / 3) * 2, "mtedza");
     
     // this fill the last 50 elements wi the the value nthudza
     fill ( drinks + (SIZE / 3) * 2, drinks + SIZE, "nthudza");
			
			for (string drink : drinks) {
				int i;
				 i += 1;
				 cout << i << " => " << drink << "\n";
			}
			
			
			
			
			
			return 0;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		