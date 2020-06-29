#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vector<vector<ll>> adj(300100);
bool visited[300100],prov[300100];
ll cnt;
void dfs(ll v){
    visited[v]=1;
    cnt++;
    for(auto u : adj[v]){
        if(!visited[u]){
            dfs(u);
        }
    }
}

void dfs2(ll v){
    visited[v]=1;
    cout<<v+1<<" ";
    for(auto u : adj[v]){
        if(!visited[u]){
            dfs2(u);
        }
    }
}

int main() {
    fastio
    ll T;
    cin>>T;
    while(T--){
        ll N,M;
        cin>>N>>M;
        ll A[N],B[N];
        vector<double> C(N);
        for(ll i=0;i<N;i++){
            cin>>A[i];
            adj[i].clear();
            visited[i]=0;
        }
        for(ll i=0;i<N;i++){
            cin>>B[i];
            C[i] = ((double)A[i] / (double)B[i]);
        }
        double mpc = *max_element(C.begin(),C.end());
        vector<ll> mp;
        for(ll i=0;i<N;i++){
            if(C[i]==mpc){
                prov[i]=1;
                mp.push_back(i);
                continue;
            }
            prov[i]=0;
        }
        for(ll i=0;i<M;i++){
            ll u,v;
            cin>>u>>v;
            if(prov[u-1]==1 && prov[v-1]==1){
                adj[u-1].push_back(v-1);
                adj[v-1].push_back(u-1);
            }
        }
        ll ans = 0,ind=-1;
        for(auto i:mp){
            if(!visited[i]){
                cnt=0;
                dfs(i);
                if(cnt>ans){
                    ans = cnt;
                    ind=i;
                }
            }
        }
        for(auto i:mp){
            visited[i]=0;
        }
        cout<<ans<<"\n";
        dfs2(ind);
        cout<<"\n";

    }
    return 0;
}