#include<iostreamm>
#include"number.h"
using namespace std;

void Number::print()
{
   cout<<"The number is:"<<x<<endl;
}
Number Number::operator=(const Number& other)
{
   x=other.x;
   return *this;
}
Number Number::operator+(const Number& other)
{
   x+=other.x;
   return *this;
}
Number Number::operator*(const Number& other)
{
   x*=other.x;
   return *this;
}

void RealNumber::print()
{
   cout<<"The real number is:"<<x<<endl;
}
RealNumber RealNumber::operator=(const RealNumber& other)
{
   x=other.x;
   return *this;
}
RealNumber RealNumber::operator+(const RealNumber& other)
{
   x+=other.x;
   return *this;
}
RealNumber RealNumber::operator*(const RealNumber& other)
{
   x*=other.x;
   return *this;
}

void IntegerNumber::print()
{
   cout<<"The integer number is:"<<x<<endl;
}
IntegerNumber IntegerNumber::operator=(const IntegerNumber& other)
{
   x=other.x;
   return *this;
}
IntegerNumber IntegerNumber::operator+(const IntegerNumber& other)
{
   x+=other.x;
   return *this;
}
IntegerNumber IntegerNumber::operator*(const IntegerNumber& other)
{
   x*=other.x;
   return *this;
}

void ComplexNumber::print()
{
   if(this->y>0)
      cout<<"The complex number is:"<<x<<"+"<<y<<"i"<<endl;
   else(this->y==0)
      cout<<"The complex number is:"<<x<<endl;
   else
      cout<<"The complex number is:"<<x<<"-"<<y<<"i"<<endl;
}
ComplexNumber ComplexNumber::operator=(const ComplexNumber& other)
{
   x=other.x;
   y=other.y;
   return *this;
}
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other)
{
   x+=other.x;
   y+=other.y;
   return *this;
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber& other)
{
   double a,b;
   a=x*(other.x)-y*(other.y);
   b=x*(other.y)+y*(other.x);
   x=a;
   y=b;
   return *this;
}
