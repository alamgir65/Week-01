#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,m; cin>>n>>m;
    if(n==0 && m==0){
        cout<<"No"<<endl;
    }
    else if(m==n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}