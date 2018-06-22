#include<iostream>
#include"number.h"
using namespace std;
int main()
{
   RealNumber real1(4.3);
   RealNumber real2(6.6);
   real1=real1+real2;
   real1.print();
   real1=real1*real2;
   real1.print();
   IntegerNumber integer1(11);
   IntegerNumber integer2(34);
   integer1=integer1+integer2;
   integer1.print();
   integer1=integer1*integer2;
   integer1.print();
   ComplexNumber complex1(2,4);
   ComplexNumber complex2(7,-2);
   complex1=complex1+complex2;
   complex1.print();
   complex1=complex1*complex2;
   complex1.print();
   return 0;
}
