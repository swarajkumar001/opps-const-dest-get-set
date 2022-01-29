#include <iostream>
using namespace std;
class student{
	public : 
	int rn;
	int age;
	// whenever object is created default constructor called....
	student(){ // default constructor......
		cout<<"Deafault constructor called !!!"<<endl;
	}
	
	
	// parametrised constructor....
	// once we created parametrised constructor deafult constructor will be not avilable..
	 student(int r){
	 	rn=r;
	 }
	 
	 student( int r ,int m){
	 	rn=r;
	 	age=m;
	 }
	 void display(){
	 	
	 	cout<< "roll number : "<<rn<<endl;
	 	cout<< "age: "<<age<<endl;
	 	
	 }
};
	

int main(){
	student s1;
	s1.rn=1000;
	s1.age=10;
	s1.display();
	student s2;
		student s3;
			student s4;
				student s5;
	student s6(12);
	s6.display();
	student s7(10000,1671617);
	cout<<" s7 function called!!!!!"<<endl;
	s7.display();
	
	
	
	
	
}
