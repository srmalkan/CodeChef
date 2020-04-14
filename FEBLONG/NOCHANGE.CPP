#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll N,P,x;
	    cin>>N>>P;
	    vector<ll> D(N);
	    bool cl=true;
	    for(ll i=0;i<N;i++){
	        cin>>D[i];
	        if(cl && P%D[i]!=0){
	            cl=false;
	            x=i;
	        }
	    }
	    if(cl){
	        ll i;
	        for(i=1;i<N;i++){
	            if(D[i]%D[i-1]!=0){
	                break;
	            }
	        }
	        if(i!=N){
	            cout<<"YES"<<" ";
	            for(ll j=0;j<N;j++){
	                if(j==i-1){
	                    cout<<(D[i]/D[j])+1<<" ";
	                    j++;
	                    cout<<(P/D[j])-1<<" ";
	                }else{
	                    cout<<0<<" ";
	                }
	            }
	            cout<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }else{
	        cout<<"YES"<<" ";
	        for(ll i=0;i<N;i++){
	            if(x==i){
	                cout<<(P/D[x])+1<<" ";
	            }else{
	                cout<<0<<" ";
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
