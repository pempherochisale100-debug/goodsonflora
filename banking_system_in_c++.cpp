
#include <iostream>
#include <string>

	using namespace std;
	
	void nl () {
		cout << "##################################################### \n";
	}
	
		class Student {
			private:
				string fullname;
				int age;
				string student_id;
				string program;
				
			public:
				
				void set_student_details (string name, int a, string id, string pg){
					
					if (name.empty()){
						cerr <<"ERROR: Name field can not be empty \n";
					}
					else {
						this->fullname = name;
					}
					if (age <=0 ) {
						cerr << "ERROR: Age of a person can not be less than 0 \n";
					}
					else {
						this->age = a;
					}
					if (id.empty()) {
						cerr << "ERROR: Student should be provided \n";
					}
					else {
						this->student_id = id;
					}
					if (!pg.empty ()) {
						this->program = pg;
					}
					else {
						cerr << "ERROR: Program of study should not be empty \n";
					}
					
					cout << "SUCCESS: Student data has been added successfully \n";
				}
				
				void display_student_details () {
					nl ();
					cout << "			STUDENT DETAILS ENTERED ARE: 			\n";
					nl ();
					
					cout << "Student name:     => " << fullname << endl;
					cout << "Student's age:    => " << age << endl;
					cout << "Student's ID      => " << student_id << endl;
					cout << "Program of study  => " << program << endl;
					nl ();
					
				}
			
			
		};
		
			int main () {
				
				string name, id_number, pro;
				int zaka;
				
					cout << "Enter fullname of the student: ";
						getline (cin, name);
					cout << "Enter age of the student: ";
						cin >> zaka;
						cin.ignore();
							if (zaka <=0 ) {
								cerr << "ERROR: Age of a person can not be less than 0 \n";
								}
					cout << "Enter student ID number: ";
						getline (cin, id_number);
					cout << "Enter program of study: ";
						getline (cin, pro);
						
				Student student;
				student.set_student_details(name, zaka, id_number, pro);
				
				cout << endl;
				
				student.display_student_details();
				
				
				
				
				
				
				
				system ("pause>0");
					return 0;
			}