#include <iostream>
using namespace std;
 class fraction{
 	int numerator;
 	int denominator;
      public:
 	 fraction( int numerator, int denominator){
 	    this->numerator=numerator;
 	    this-> denominator=denominator;
	 }
	 void print(){
	 	cout<< this->numerator<<"/"<<denominator<<endl;
	 }
	  void simplify(){
	  	 int gcd=1;
	  	 int j= min(this->numerator,this->denominator);
	  	 for( int i=1;i<=j;i++){
	  	 	if(this->numerator%i==0 &&  this->denominator%i==0){
	  	 		gcd=i;
			   }
		   }
	  	
	  	this->numerator=this->numerator/gcd;
	  	this->denominator=this->denominator/gcd;
	  	
	  }
 	  void add( fraction const  &f2){
 	  	int lcm=this->denominator * f2.denominator;
 	  	int x= this->numerator *f2.denominator;
 	  	int y= this-> denominator *f2.numerator;
 	  	
 	  	int num=x+y;
 	  	
 	  	this->numerator=num;
 	  	this-> denominator=lcm;
 	  	
 	  	simplify();
 	  	
	   }
	   void multiply( fraction const f2){
	   	 this->numerator =this->numerator *f2.numerator;
	   	 this-> denominator=this-> denominator*denominator;
	   	 simplify();
	   }
	   
	   
	   
	   
 };
int main(){
	
	fraction f1(10,2);
	fraction f2(15,4);
	cout<< " fraction F1: ";
	f1.print();
	cout<< " fraction F2: ";
	f2.print();
	cout<< " addition : "<< endl;
	f1.add(f2);
	f1.print();
	cout<< " on multiplication"<< endl;
	f1.multiply(f2);
	cout<< " fraction F1: ";
	f1.print();
	cout<< " fraction F2: ";
	f2.print();
	
		
}
