#include <iostream>
using namespace std;

class student{
	int age;
	public:
		int roll_number;
		
		int get_age(){
			
			return age;
		}
		void set_age( int a){
			age=a; //we can use age here because we can access any item
			// irrespective of private nad public within the class 
			
		}
	  void display(){
	  	cout<< " age in class function :"<<age<<endl;
	  	cout<< " rollnumber in class function :"<< roll_number<<endl;
	  	
	  }
};


int main(){
	student s1;
	s1.roll_number=20;
	/*s1.age=700; */ // we can not use this because age is a private member
	s1.set_age(300);
	s1.display();
	
	cout<< " age: "<<s1.get_age()<<endl;
	cout<< " roll_number : "<<s1.roll_number<<endl;
	
	
}
