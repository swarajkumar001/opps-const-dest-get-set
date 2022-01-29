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
		
		//parametrised constructor.....
		/*student(int r){
			
			
				cout<< " constructor 2 called !!"<<endl;
			rn=r;
		}*/
		
		// as above example we use r as a variable but we want to use same variable name 
		// how???
		// then this keyword is introduce ...which holds the address of same object 
		
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
	student s1(122);
	
	s1.display();
	
	student s2(123,345);
		s2.display();
		 //student *s4= new student;
	//student *s3(234,567)=new student;
	//	s3->display();
	
	student *(s3)=new student(234,567);
	s3->display();
	
	
	student s5(901);
	cout<< " address of s5: "<< &s5<< endl;// address of this and &s5 will be same 
	s5.display();
	
		
		
		
	
}
