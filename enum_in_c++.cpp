#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

	using namespace std;

// here we have the integer values explicitly but we can also set the values implicitly if 
// we do not assign the integer vales as :
// enum day (monday, tuesday, wednesday, thurday, friday, saturday, sunday);	
	enum day {
		sunday = 0,
		monday = 1,
		tuesday = 2,
		wednesday = 3,
		thursday = 4,
		friday = 5,
		saturday = 6
	};
	
	enum flavour {
		vanilla,
		chocolate,
		strawberry,
		mint
	};
	
	enum color {
		red,
		orange,
		yellow,
		green,
		blue,
		purple
	};
	
	enum planet {
		mercury = 4880,
		venus = 12104,
		earth = 12756,
		mars = 6794,
		jupiter = 142984,
		saturn = 108728,
		uranus = 51118,
		neptune = 49532,
		pluto = 2320
	};
		
		 int main() {
		 	
// enum = a user-defined datatype that consists of paired named integer constants
//        GREAT if you have a set of potential options
    day today = tuesday;
    
       switch (today) {
       	   case sunday: {
       	   	   cout << "Its happy sunday \n";
				break;
			  }
			  case monday: {
			  	cout << "It is monday \n";
				break;
			  }
			  case tuesday: {
			  	cout << "It is tuesday \n";
				break;
			  }
			  case wednesday: {
			  	cout << "It is wednesday \n";
				break;
			  }
			  case thursday: {
			  	cout << "It is thursday \n";
				break;
			  }
			  case friday: {
	            cout << "It is friday \n";
				break;
			  }
			  case saturday: {
			  	cout << "It is saturday \n";
				break;
			  }
	   }
		 	
		 	
		 	
		 	return 0;
		 }