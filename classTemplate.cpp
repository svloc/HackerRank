#include<iostream>
using namespace std;
 template <class T>
 class AddElements{
     T element;
     public:
     AddElements(T arg){
         element=arg;
        }
     add(T element1){
       return element+element1;
     }
 };

 template<>
 class AddElements<string>{
     string element;
   public:
   AddElements(string arg){
     element=arg;
     }
   string concatenate(string element1){
       return element+element1;
   }  

 };


int main(){
   int n;
   cout<<"Enter N:";
   cin>>n;
   
   for(int i=0;i<n;i++){
       string type;
       cout<<"Enter Type:";
       cin>>type;

       if(type=="float"){
           double ele, ele1;
           cout<<"Enter ele & ele1 Float:";
           cin>>ele>>ele1;
           cout<<"Float add result:";
           AddElements<double> my_float(ele);
           cout<<my_float.add(ele1)<<endl;

       }
       else if(type=="int"){
           int ele,ele1;
           cout<<"Enter ele & ele1 Int:";
           cin>>ele>>ele1;
           cout<<"Int add result:";
           AddElements<int> my_int(ele);
           cout<<my_int.add(ele1)<<endl;
         
       }
       else if(type=="string"){
           string ele,ele1;
           cout<<"Enter ele & ele1 String:";
           cin>>ele>>ele1;
          cout<<"String concatenate result:";
           AddElements<string> my_string(ele);
           cout<<my_string.concatenate(ele1)<<endl;
          
       }
       else{
           cout<<"Enter valid:";
       }

   }
    return 0;
}