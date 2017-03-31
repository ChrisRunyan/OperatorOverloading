/*
 * Assignment 5: Operator Overloading
 * main.cpp
 * Created: 03/24/2017
 * Author: Christopher A Runyan
 */
#include <iostream>
using namespace std;
#include "ComplexNumber.h"

int main(){
	std::cout<<"Complex Numbers:\n";

  	ComplexNumber c1(2, 3);
  	ComplexNumber c2(2, 3);
  	ComplexNumber c3(2, 8);
	ComplexNumber c4(6, 3);
  	ComplexNumber temp;

  	std::cout<<"CN1: ";
  	c1.toString();
  	std::cout<<"\nCN2: ";
  	c2.toString();
  	std::cout<<"\nCN3: ";
  	c3.toString();	
	std::cout<<"\nCN4: ";
	c4.toString();

	std::cout<<"\n\nTesting overloaded '+':";

  	temp=c1+c2;
  	std::cout<<"\nCN1 + CN2: ";
  	temp.toString();

	temp=c3+c4;
	std::cout<<"\nCN3 + CN4: ";
	temp.toString();

	temp=c1+c4;
	std::cout<<"\nCN1 + CN4: ";
	temp.toString();

	temp=c2+c3;
	std::cout<<"\nCN2 + CN3: ";
	temp.toString();

	std::cout<<"\n\nTesting overloaded '*':";

  	temp=c1*c2;
  	std::cout<<"\nCN1 * CN2: ";
  	temp.toString();

	temp=c3*c4;
	std::cout<<"\nCN3 * CN4: ";
	temp.toString();

	temp=c1*c4;
	std::cout<<"\nCN1 * CN4: ";
	temp.toString();

	temp=c2*c3;
	std::cout<<"\nCN2 * CN3: ";
	temp.toString();

	std::cout<<"\n\nTesting overloaded '=':";
  
  	std::cout<<"\nCN1 == CN2: ";
  	if(c1==c2){
  		std::cout<<"true";
  	}
  	else{
    		std::cout<<"false";
	}
  
  	std::cout<<"\nCN3 == CN4: ";
  	if(c3==c4){
    		std::cout<<"true";
  	}
  	else{
  		std::cout<<"false";
  	}

	std::cout<<"\nCN1 == CN4: ";
	if(c1==c4){
		std::cout<<"true";
	}
	else{
		std::cout<<"false";
	}

	std::cout<<"\nCN2 == CN3: ";
	if(c2==c3){
		std::cout<<"true\n";
	}
	else{
		std::cout<<"false\n";
	}

  	return 0;
}
