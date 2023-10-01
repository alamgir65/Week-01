#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s; cin>>s;
    string s2;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
            s2.push_back(s[i]);
        }
    }
    cout<<s2<<endl;
    return 0;
}