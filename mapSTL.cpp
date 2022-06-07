#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
 int q;
 cout<<"Enter Q:";
 cin>>q;

 map<string,int>m;

  for(int i=0;i<q;i++){
    int y,q1;
    cout<<"Enter Query:";
    cin>>q1;
    string x;
    cout<<"Enter Name:";
    cin>>x;
    
    if(q1==1){
        cout<<"Enter Mark:";
      cin>>y;
      m[x]+=y;
    }

    else if(q1==2){
        m.erase(x);
    }
    else{
        map<string ,int>::iterator itr=m.find(x);
        if(itr!=m.end()){
            cout<<m[x]<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
  }    
 return 0;
 }