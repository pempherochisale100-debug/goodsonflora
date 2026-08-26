#include <iostream>

	using namespace std;
	
			void mtedza ();
			void mtedza ( string chakudya);
			void mtedza (string chakudya, string chakumwa);
			
		int main () {
// today's topic will based on overloaded functions in c++			
			
		string chakudya, chakumwa;
		   
		   do {
		   	cout << "Lowetsani chakudya chomwe mmakonda \n";
		      getline (cin, chakudya);
		   cout << "Lowetsani chakumwa chomwe inu mmakonda \n";
		      getline (cin, chakumwa);
			  
			  
		   }
		   while (chakudya.empty () && chakumwa.empty ());	
			
		mtedza ();
		   cout << endl << endl;
		   
		mtedza (chakudya);
		   cout << endl << endl;
		   
		mtedza (chakudya, chakumwa);
		   cout << endl << endl;
			
			
			
			return 0;
		}
		
		   void mtedza () {
		   	   cout << "Mtedza wanu uwu \n";
		   }
		   void mtedza ( string chakudya) {
		   	   cout << "Mtedza wanu uwu ophatikiza ndi " << chakudya << "\n";
		   }
		   void mtedza ( string chakudya, string chakumwa ) {
		   	   cout << "Mtedza uwu ndi " << chakudya << " muzimwera " << chakumwa << "\n";
		   }