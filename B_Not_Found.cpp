#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s; cin>>s;
    int frq[26]={0};
    for(int i=0;i<s.size();i++){
        frq[s[i]-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++){
        if(frq[i]==0){
            ans=i+'a';
            break;
        }
        else{
            ans="None";
        }
    }
    cout<<ans<<endl;
    return 0;
}