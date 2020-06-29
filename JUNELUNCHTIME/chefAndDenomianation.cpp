#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio
    ll T;
    cin>>T;
    while(T--){
        ll S,N;
        cin>>S>>N;
        if(S==1){
            cout<<1<<"\n";
            continue;
        }
        if(N>=S){
            if(S%2==0){
                cout<<1<<"\n";
            }else{
                cout<<2<<"\n";
            }
            continue;
        }
        vector<ll> coins;
        ll cnt=0;
        cnt+=S/N;
        S=S%N;
        if(S!=0){
            if(S%2==0){
                cnt+=1;
            }else{
                if(S==1){
                    cnt+=1;
                }else{
                    cnt+=2;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}