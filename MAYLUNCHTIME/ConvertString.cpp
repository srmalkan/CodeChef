#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N;
	    cin>>N;
	    string A,B;
	    cin>>A>>B;
	    vector<vector<int>> a(26,vector<int>(N));
	    vector<int> alp(N);
	    for(int i=0;i<N;i++){
	        a[A[i]-'a'][i]=1;
	        alp[A[i]-'a']=1;
	    }
	    vector<vector<int>> b(26);
	    ll ans = 0;
	    for(ll i=0;i<N;i++){
	        if(A[i]==B[i]){
	            continue;
	        }else if(int(A[i])<int(B[i])){
	            ans=-1;
	            break;
	        }else{
	            if(alp[B[i]-'a']!=1){
	                ans = -1;
	                break;
	            }
	            b[B[i]-'a'].push_back(i);
	        }
	    }
	    if(ans==-1){
	        cout<<-1<<"\n";
	        continue;
	    }
	    for(ll i=25;i>=0;i--){
	        if(!b[i].empty()){
	            ans++;
	            for(int j=0;j<N;j++){
	                if(a[i][j]==1){
	                    b[i].push_back(j);
	                    break;
	                }
	            }
	            for(int x:b[i]){
	                a[A[x]-'a'][x]=0;
	                a[i][x]=1;
	            }
	            
	        }
	    }
	    cout<<ans<<"\n";
	    for(ll i=25;i>=0;i--){
	        if(!b[i].empty()){
	            cout<<b[i].size()<<" ";
	            for(int x:b[i]){
	                cout<<x<<" ";
	            }
	            cout<<"\n";
	        }
	    }
	   // cout<<"\n";
	}
	return 0;
}
