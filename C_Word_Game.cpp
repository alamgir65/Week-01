#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a[3][n];
        map<string,int> mp;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                string s; cin>>s;
                a[i][j]=s;
                mp[s]++;
            }
        }
        for(int i=0;i<3;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(mp[a[i][j]]==1){
                    cnt+=3;
                }
                else if(mp[a[i][j]]==2){
                    cnt+=1;
                }
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
    return 0;
}