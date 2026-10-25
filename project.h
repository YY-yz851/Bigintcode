#ifndef PROJECT_H
#define PROJECT_H
#include<iostream>
using namespace std;
class Bigint{
   size_t len;
   char*s;
   bool isZero;
public:Bigint();
       Bigint(size_t a);
       friend ostream& operator<<(ostream& cout,const Bigint& a);
       Bigint(const char*b);
       Bigint(const Bigint& a);
       ~Bigint();
       bool operator==(const Bigint& a);
       bool operator<=(const Bigint& a);
        bool operator!=(const Bigint&a);
        bool operator<(const Bigint &a);
        bool operator>=(const Bigint& a);
        bool operator>(const Bigint& a);
        Bigint& operator=(const Bigint& a);
        friend ostream& operator<<(ostream& cout,const Bigint& a);
        
};
#endif
