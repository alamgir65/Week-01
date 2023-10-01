#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int x; cin>>x;
    string s;
    while(x!=0){
        char c=(x%10)+'0';
        s.push_back(c);
        x=x/10;
    }
    int sz=s.size();
    if(sz==0){
        s.push_back('0');
        s.push_back('0');
        s.push_back('0');
        s.push_back('0');
    }
    if(sz==1){
        s.push_back('0');
        s.push_back('0');
        s.push_back('0');
    }
    else if(sz==2){
        s.push_back('0');
        s.push_back('0');
    }
    else if(sz==3){
        s.push_back('0');
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}