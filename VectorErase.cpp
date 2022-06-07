#include<iostream>
#include<vector>
using namespace std;

int main(){
 int n,x,q1,q2,q3;
 cout<<"Enter N:";
 cin>>n;

 vector<int> v;
 cout<<"Enter N values: ";
 for(int i=0;i<n;i++){
     cin>>x;
     v.push_back(x);
 }
 cout<<"Enter Q1:";
 cin>>q1;
 v.erase(v.begin()+q1-1);
 cout<<"Enter Q1 & Q2:";
 cin>>q2>>q3;
 v.erase(v.begin()+q2-1,v.end()+q3-1);

cout<<v.size()<<endl;

for(int j=0;j<v.size();j++){
    cout<<v.at(j)<<" ";
}
}