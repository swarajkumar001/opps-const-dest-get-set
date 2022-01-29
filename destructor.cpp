#include <iostream>
using namespace std;
class student{
	
	public:
		int rn;
		int age;
		
		/* destructor // it is called at the end...basically it is used in deallocate the
		 memory...*/
		~student(){
			cout<< " destructor called !!!!"<<endl;
		}
		
		// default constructor
		student(){
			cout<< " constructor 1 called !! "<<endl;
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
	student s1(12,13);
	student s2(34,45);
	cout<< " s1: data="<<endl;
	
	s1.display();
	cout<< " s2: data="<<endl;
		s2.display();
	
	student *s3= new student (23,56); /*it is loacted in heap memory so it this case distructor
	function is not called ...... we have toi delete this 
	by this method 
	 detele s3;*/
	 cout<< " s3: data="<<endl;
	 s3->display();
	 delete s3; // in this case distructor is called !!!!!!!!!!!
	 
	
return 0;	
	
}
