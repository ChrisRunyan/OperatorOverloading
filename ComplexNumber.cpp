/*
 * Assignment 5: Operator Overloading
 * ComplexNumber.cpp
 * Created: 03/24/2017
 * Author: Christopher A Runyan
 */
#include "ComplexNumber.h"
#include <iostream>

ComplexNumber::ComplexNumber(){
	realPart=0.0;
  	complexPart=0.0;
}

ComplexNumber::ComplexNumber(double a, double b){
	realPart=a;
  	complexPart=b;
}

void ComplexNumber::setRealPart(double a){
  	realPart=a;
}

void ComplexNumber::setComplexPart(double b){
  	complexPart=b;
}

ComplexNumber ComplexNumber::operator +(ComplexNumber a) const{
  	ComplexNumber temp;
  	temp.setRealPart(this->realPart+a.realPart);
  	temp.setComplexPart(this->complexPart+a.complexPart);
  	return temp;
}

ComplexNumber ComplexNumber::operator *(ComplexNumber a) const{
  	ComplexNumber temp;
  	temp.setRealPart((this->realPart*a.realPart)-(this->complexPart*a.complexPart));
  	temp.setComplexPart((this->realPart*a.complexPart)+(this->complexPart*a.realPart));
  	return temp;
}

bool ComplexNumber::operator ==(ComplexNumber a) const{
  	if(this->realPart==a.realPart&&this->complexPart==a.complexPart){
    		return true;
  	}
  	else{
    		return false;
  	}
}

void ComplexNumber::toString() const{
  	std::cout<<this->realPart<<" + i"<<this->complexPart;
}



