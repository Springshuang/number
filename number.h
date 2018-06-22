#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>
#include<stdio.h>
using namespace std;
class Number
{
public:
   Number(double a):x(a),y(0.0){};
   Number(double a,double b):x(a),y(b){};
   virtual void print();
   virtual Number operator =(const Number&);
   virtual Number operator +(const Number&);
   virtual Number operator *(const Number&);
protected:
   double x,y;
};

class RealNumber:public Nmber
{
public:
   RealNumber(double a):Number(a){};
   virtual void print();
   virtual RealNumber operator =(const RealNumber&);
   virtual RealNumber operator +(const RealNumber&);
   virtual RealNumber operator *(const RealNumber&);
};

class IntegerNumber:public RealNumber
{
public:
   IntegerNumber(double a):RealNumber(a){};
   virtual void print();
   virtual IntegerNumber operator =(const IntegerNumber&);
   virtual IntegerNumber operator +(const IntegerNumber&);
   virtual IntegerNumber operator *(const IntegerNumber&);
};

class ComplexNumber:public Number
{
public:
   ComplexNmber(double a,double b):Nmber(a,b){};
   virtual void print();
   virtual ComplexNumber operator =(const ComplexNumber&);
   virtual ComplexNumber operator +(const ComplexNumber&);
   virtual ComplexNumber operator *(const ComplexNumber&);
}；
#endif
