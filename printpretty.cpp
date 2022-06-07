#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   int T;
   cout<<"Enter T:";
   cin>>T;
   cout<<setiosflags(ios::uppercase);
   cout<<setw(0xf)<<internal;
   while (T--)
   {
       double A,B,C;
       cout<<"Enter A: ";
       cin>>A;
       cout<<"Emter B: ";
       cin>>B;
       cout<<"Enter C: ";
       cin>>C;

       cout<<std::hex<<std::left<<std::right<<std::showbase<<std::nouppercase;
       cout<<(long long) A<<endl;

       cout<<std::dec<<std::right<<setw(15)<<showpos<<setfill('_')<<std::fixed<<setprecision(2);
       cout<<B<<endl;

       cout<<std::scientific<<setprecision(9)<<std::noshowpos<<std::uppercase;
       cout<<C<<endl;
   }
   
  return 0;
}
