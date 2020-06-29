#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll N,M;
        cin>>N>>M;
        ll A[N];
        map<ll,ll> mp;
        for(ll i=0;i<N;i++){
            cin>>A[i];
            mp[A[i]]++;
        }
        ll ans = 0;
        ll i=0;
        for(i=1;i<M;i++){
            if(mp.find(i)==mp.end()){
                break;
            }
            ans+=mp[i];
        }
        if(i<M){
            cout<<-1<<"\n";
            continue;
        }
        for(ll i=0;i<N;i++){
            if(A[i]>M){
                ans+=1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

