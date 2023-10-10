#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    long long sum=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2 != 0){
            v.push_back(a[i]);
        }
    }
    sort(v.begin(),v.end());
    if(sum%2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-v[0]<<endl;
    }
    return 0;
}