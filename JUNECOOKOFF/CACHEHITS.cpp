#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll N,B,M;
        cin>>N>>B>>M;
        ll s[M];
        for(ll i=0;i<M;i++){
            cin>>s[i];
        }
        if(N<=B){
            cout<<1<<"\n";
            continue;
        }
        ll cnt=1;
        ll curr = s[0]/B;
        for(ll i=1;i<M;i++){
            if(s[i]/B != curr){
                cnt++;
                curr=s[i]/B;
            }
        }
        cout<<cnt<<"\n";
        
    }
    return 0;
}

