
#include"project.h"
#include<iostream>
#include<cstddef>
#include<cstring>
using namespace std;

   Bigint::Bigint(){s=NULL;}
   Bigint::Bigint(size_t a)
   {
      int size=a;
      len=0;
      while(1)
      {
         size=size/10;
         len++;
         if(size<1)
         {
            break;
         }
      }
      s=new char[len];
      for(int i=0;i<len;i++)
      {
         int num=a%10;
         s[len-i-1]=num+'0';
         a=a/10;
      }
   };
   
   Bigint::Bigint(const char*b)
   {
      len=strlen(b);
      s=new char[len];
      for(int i=0;i<len;i++){
         s[i]=b[i];
      }
   };
   Bigint::Bigint(const Bigint& a)
   {
      len=a.len;
      s=new char[len];
      for(int i=0;i<len;i++)
      {
         s[i]=a.s[i];
      }
   }
   Bigint::~Bigint(){
      delete[]s;
   }
   bool Bigint::operator==(const Bigint& a){
      if(len==a.len) {isZero=1;}else{return 0;}
      for(int i=0;i<len;i++){
         if(s[i]==a.s[i]){
            isZero=1;
         }else
         {
            return 0;
         }
      }
      return isZero;
   }
      bool Bigint::operator<=(const Bigint& a){
      if(*this==a) return 1;
      int count;
      if(len>a.len) return 0;
      if(len<a.len) return 1;
      for(int i=0;i<len;i++){
         if(s[i]<=a.s[i]) isZero=1;
         else return 0;
      }
      return isZero;
   }
   bool Bigint::operator!=(const Bigint&a){
      if(*this==a) return 0;
      else return 1;
   }
  bool Bigint::operator<(const Bigint &a){
      if(*this==a) {return 0;}
      else {
         if(*this<=a) return 1;
         else return 0;
      }
   }
  bool Bigint::operator>=(const Bigint& a){
      if(*this<a) return 0;
      else return 1;
   }
  bool Bigint::operator>(const Bigint& a){
      if(*this==a) return 0;
      if(*this>=a){return 1;}
      else{return 0;}
   }
  Bigint& Bigint::operator=(const Bigint& a){
      if(*this==a) return *this;
      len=a.len;
      s=new char[len];
      for(int i=0;i<len;i++){
         s[i]=a.s[i];
      }
      return *this;
   }

ostream& operator<<(ostream& cout,const Bigint& a)
{
   for(int i=0;i<a.len;i++){
      cout<<a.s[i];
   }
   return cout;
}
