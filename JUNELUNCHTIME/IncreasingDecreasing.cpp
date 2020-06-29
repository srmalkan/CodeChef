#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio
    ll T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        map<ll,ll> mp;
        ll A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
            mp[A[i]]++;
        }
        ll mx = *max_element(A,A+N);
        if(mp[mx]>1){
            cout<<"NO"<<"\n";
            continue;
        }
        bool ans=false;
        for(auto p:mp){
            if(p.second>2){
                ans = true;
                break;
            }
        }
        if(ans){
            cout<<"NO"<<"\n";
            continue;
        }
        vector<ll> a;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            a.push_back(itr->first);
            itr->second-=1;
        }
        for(auto itr=mp.rbegin();itr!=mp.rend();itr++){
            if(itr->second){
                a.push_back(itr->first);
            }
        }
        cout<<"YES"<<"\n";
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    return 0;
}