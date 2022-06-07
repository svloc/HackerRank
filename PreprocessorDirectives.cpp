#define FUNCTION(name,operator) void name(int &current,int candidate) {!(current operator candidate)? current=candidate:false;}
#define foreach(v,i) for(int i=0;i<v.size();i++)
#define io(v) cin>>v
#define INF 10000000
#define toStr(s) #s

#include<iostream>
#include<vector>
using namespace std;

#if !defined toStr||!defined io||!defined FUNCTION ||!defined INF
#error Missing something
#endif

FUNCTION(minimum,<)
FUNCTION(maximum,>)

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter N Values: ";
    foreach(v,i){
        io(v)[i];
    }
   
    int mn=-INF;
    int mx=INF;
    foreach(v,i){
        minimum(mn,v[i]);
        maximum(mx,v[i]);
   }
   int ans=mx-mn;
   cout<<toStr(result=)<<' '<<ans;
    
return 0;
}