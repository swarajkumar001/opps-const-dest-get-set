#include <iostream>
using namespace std;
class student{
	public:
		int rn;
		int age;
		
		
		// default constructor
		student(){
			cout<< " constructor 1 called !!"<<endl;
		}
		
		
		student(int rn){
			
			
				cout<< " constructor 2 called !!"<<endl;
				cout<< " this : "<<this<<endl;
							this->rn =rn;
		}
		
		student( int n,int m){
			cout<< " constructor 3 called !!"<<endl;
			rn=n;
			age=m;
		}
		void display(){
			cout<< "Rollnumber = "<<rn<<endl;
			cout<< "age = "<<age <<endl;
			
		}
};

int main(){
	student s1(122,345);
	cout<< " S1 DATA : "<<endl;
	s1.display();
	/*if we want to create an object s2 of the same class as s1, and have to assign the 
	the same value what s1 is assigned....
	one thing we can do first we make s2 object and after the assign
	 s2.rn=s1.rn;
	 s2.age=s1.age;
	 
	 but this step can also done by constructor called copy constructor
	 in this way
	 student s2(s1); it means put all the value of s1 in s2.
	 it is interpretted as s2.student(s1);
	 let's see in code .....*/
	 student s2(s1); // after making this function copy constructor will be called........
	 	cout<< " S2 DATA : "<<endl;
	 s2.display();
	 
	 // let us understand this concept by making object dynamically.....
	 
	 student *s6=new student(123,456);
	 cout<< " s6 data:"<<endl;
	s6->display();
	//student *(s7)= new student(s6);
	//cout<< " s7 data:"<<endl;
	//s7->display();
	cout<< " dynamically * statically"<<endl;
	
	 student *(s8)= new student( *s1);
	 cout<< " s8 data:"<<endl;
	s8->display();
	 
	
	
}
















