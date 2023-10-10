#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    int cnt[n+1]={0};
    for(int i=1;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    int x;
    for(int i=1;i<=n;i++){
        if(cnt[i]==0){
            x=i;
            break;
        }
    }
    cout<<x<<endl;
    
    return 0;
}