#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
int n;
cout<<"Enter N: ";
cin>>n;
set<int>s;
cout<<"Enter Values: ";
for(int i=0;i<n;i++){
    int q=0,x=0;
    cin>>q;
    if(q==1){
        s.insert(x);
    }
    else if(q==2){
        s.erase(x);
    }

   else{
    set<int>::iterator itr=s.find(x);
    if(itr==s.end()){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    }
}
return 0;
}