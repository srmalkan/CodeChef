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
	    ll A[N],B[N];
	    ll prefA[N+1],prefB[N+1];
	    prefA[0]=0;
	    prefB[0]=0;
	    for(ll i=0;i<N;i++){
	        cin>>A[i];
	        prefA[i+1]=A[i]+prefA[i];
	    }
	    
	    for(ll i=0;i<N;i++){
	        cin>>B[i];
	        prefB[i+1]=B[i]+prefB[i];
	    }
	    ll ans=0;
	    for(ll i=0;i<N;i++){
	        if(prefA[i]==prefB[i]){
	            if(A[i]==B[i]){
	                ans+=A[i];
	            }
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
