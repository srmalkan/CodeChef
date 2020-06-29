#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio
    ll p[40];
    p[0]=1;
    for(int i=1;i<40;i++){
        p[i]=p[i-1]*2;
    }
    ll T;
    cin>>T;
    while(T--){
        ll N,K;
        cin>>N>>K;
        ll A[N];
        for(ll i=0;i<N;i++){
            cin>>A[i];
        }
        ll X[35];
        memset(X,0,sizeof(X));
        for(ll i=0;i<N;i++){
            ll temp = A[i];
            ll j=0;
            while(temp){
                X[j]+= temp & 1;
                temp = temp>>1;
                j++;
            }
        }
        map<ll,vector<ll>> mp;
        for(ll i=0;i<35;i++){
            X[i] = X[i]*p[i];
        }
        for(ll i=0;i<35;i++){
            mp[X[i]].push_back(i);
        }
        memset(X,0,sizeof(X));
        for(auto itr=mp.rbegin();itr!=mp.rend();itr++){
            for(auto v:itr->second){
                if(K){
                    X[v]=1;
                    K--;
                }
            }
            if(!K){
                break;
            }
        }
        ll fans =0;
        for(int i=0;i<35;i++){
            fans += X[i]*p[i];
        }
        cout<<fans<<"\n";
    }
    return 0;
}