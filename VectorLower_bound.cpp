#include<iostream>
#include<vector>
using namespace std;

int main(){
int n,q,x;
cout<<"Enter N:";
cin>>n;
vector<int>v(n);

cout<<"Enter N Values: ";

for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<"Enter Q:";
cin>>q;
cout<<"Enter Q Values: ";
for(int i=0;i<q;i++){
    cin>>x;
    vector<int>::iterator low=lower_bound(v.begin(),v.end(),x);
    if(v[low-v.begin()]==x){
        cout<<"Yes "<<(low-v.begin()+1)<<endl;
    }
    else{
        cout<<"No "<<(low-v.begin()+1)<<endl;
    }
}

}