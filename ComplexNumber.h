/*
 * Assignment 5: Operator Overloading
 * ComplexNumber.h
 * Created: 03/24/2017
 * Author: Christopher A Runyan
 */
#ifndef COMPLEXNUMBER_H_
#define COMPLEXNUMBER_H_

class ComplexNumber{
	private:
  		double realPart;
  		double complexPart;
 	public:
  		ComplexNumber();
  		ComplexNumber(double a, double b);
  		void setRealPart(double a);
  		void setComplexPart(double b);
  		ComplexNumber operator +(ComplexNumber a) const;
  		ComplexNumber operator *(ComplexNumber a) const;
  		bool operator ==(ComplexNumber a) const;
  		void toString() const;
};

#endif /* COMPLEXNUMBER_H_ */
