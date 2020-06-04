#include <bits/stdc++.h>
using namespace std;
typedef long long ll;\

vector<ll> level(1000000);
vector<ll> parent(1000000);
vector<vector<ll>> adj(1000000);

void dfs(ll v){
    for(auto u:adj[v]){
        if(u!=parent[v]){
            level[u]=level[v]+1;
            parent[u]=v;
            dfs(u);   
        }
    }
}
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll T;
	cin>>T;
	while(T--){
	    ll N,Q;
	    cin>>N>>Q;
	    ll A[N];
// 		adj.clear();
	    for(ll i=0;i<N;i++){
	        adj[i].clear();
	        cin>>A[i];
	    }
	    for(ll i=1;i<N;i++){
	        ll u,v;
	        cin>>v>>u;
	        adj[u-1].push_back(v-1);
	        adj[v-1].push_back(u-1);
	    }
	    level[0] = 0;
	    parent[0] = -1;
	    dfs(0);
	    while(Q--){
	        ll a,b;
	        cin>>a>>b;
	        a=a-1;
	        b=b-1;
	        ll mn=200;
	        ll F[101]={0};
	        while(a!=b){
	            if(level[a]>level[b]){
	                if(F[A[a]]>0){
	                    mn=0;
	                    break;
	                }
	                F[A[a]]++;
	                a=parent[a];
	            }else if(level[a]<level[b]){
	                if(F[A[b]]>0){
	                    mn=0;
	                    break;
	                }
	                F[A[b]]++;
	                b=parent[b];
	            }else{
	                if(F[A[a]]>0){
	                    mn=0;
	                    break;
	                }
	                F[A[a]]++;
	                if(F[A[b]]>0){
	                    mn=0;
	                    break;
	                }
	                F[A[b]]++;
	                a = parent[a];
	                b = parent[b];
	            }
	        }
	        if(mn==0){
	            cout<<mn<<"\n";
	            continue;
	        }
	       F[A[a]]++;
	       int prev = -1;
	       for(ll i=0;i<101;i++){
	           if(F[i]>1){
	               mn=0;
	               break;
	           }
	           if(F[i]>0){
	               if(prev==-1){
	                   prev=i;
	                   continue;
	               }
	               mn = min(mn,i-prev);
	               prev=i;
	           }
	            
	        }
	        cout<<mn<<"\n";
	        
	    }
	}
	return 0;
}
