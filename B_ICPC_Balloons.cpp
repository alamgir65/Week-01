#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int frq[26]={0};
        for(int i=0;i<n;i++){
            if(frq[s[i]-'A']>0){
                frq[s[i]-'A']++;
            }
            else{
                frq[s[i]-'A']+=2;
            }
        }
        int sum=0;
        for(int i=0;i<26;i++){
            sum+=frq[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}