#include <iostream>

using namespace std;
// to create a struct we type in the "struct" keyword followed by a datatype
// this datatype is more like an idenfier

  struct student {
  	    string name;
  	    double gpa;
  	    bool enrolled;
  	    // to create a default value for a member we can do the following
  	    string registration_number = "BCS/25/SS/004";
  	    string registration_number1 = "BCS/25/SS/005";
  	    string registration_number2 = "BCS/25/SS/006";
  };
  struct animal {
  	 	string name;
  	 	string sound;
  	 	int age;
  	 	bool is_alive = true;
  	 	string color;
  	 	int number_of_legs = 4;
  };


	
	
		int main () {
			
// struct = a structure that group releted variables under one name
//          structs can contain many different data types (strings, int, double, floats, boolean, etc)
//          variables in structs are known as members 
//          memebers can be accessed with . "Class member Access operator)"			
			
			
	//let's use that datatype to create an idenfier for the student struct
	
	animal animal1;
	animal animal2
	animal1.name = "nkhumba";
	animal1.sound = "Hmmmmmmm!!!";
	animal1.age = 4;
	animal1.color = "Black";
		if (animal1.is_alive ) {
			cout << "Alive \n";
		}
		else {
			cout << "Dead \n";
			
		}
		
		cout << "The name of the animal => " << animal1.name << "\n";
		cout << "It produces a " << animal1.sound << "\n";
	
	
	   student student1;
	   //to assign the name member of student i will do the following 
	   student1.name = "Pemphero Chisale";
	   student1.gpa = 3.7;
	   student1.enrolled = true;
	   student1.registration_number;
	   string status;
	    
	     if (student1.enrolled) {
	     	status = "Enrolled \n";
		 }
		 else {
		 	status = "Not enrolled \n";
		 }
		 
		 student student2;
	   //to assing the name member of student i will do the following 
	   student2.name = "Chisomo Jere";
	   student2.gpa = 3.3;
	   student2.enrolled = false;
	   student2.registration_number1;
	   string status2;
	    
	     if (student2.enrolled) {
	     	status2 = "Enrolled \n";
		 }
		 else {
		 	status2 = "Not enrolled \n";
		 }
		 
		 student student3;
	   //to assing the name member of student i will do the following 
	   student3.name = "Tionge Nyasulu";
	   student3.gpa = 3.5;
	   student3.enrolled = true;
	   student3.registration_number2;
	   string status3;
	    
	     if (student3.enrolled) {
	     	status3 = "Enrolled \n";
		 }
		 else {
		 	status3 = "Not enrolled \n";
		 }
	   
	   // then to display the results as outputs i will do the following
	   
	   cout << "STUDENT NAME    => " << student1.name << "\n";
	   cout << "STUDENT GPA     => " << student1.gpa << "\n";
	   cout << "ENROLLED STATUS => " << status << "\n";
	   cout << "REGISTRATION #  => " << student1.registration_number << "\n";
	   
	   cout << endl << endl;
	   
	   cout << "STUDENT NAME    => " << student2.name << "\n";
	   cout << "STUDENT GPA     => " << student2.gpa << "\n";
	   cout << "ENROLLED STATUS => " << status2 << "\n";
	   cout << "REGISTRATION #  => " << student2.registration_number1 << "\n";
	   
	   cout << endl << endl;
	   
	   cout << "STUDENT NAME    => " << student3.name << "\n";
	   cout << "STUDENT GPA     => " << student3.gpa << "\n";
	   cout << "ENROLLED STATUS => " << status3 << "\n";
	   cout << "REGISTRATION #  => " << student3.registration_number2 << "\n";
	   
					
			return 0;
		}