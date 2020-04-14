#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(vector<vector<ll>> v,ll p,ll q,ll r,ll s){
    vector<ll> A;
    // for(ll i=0;i<4;i++){
	   //     for(ll j=0;j<4;j++){
	   //         cout<<v[i][j]<<" ";
	   //     }
	   //     cout<<endl;
	   // }
    A.push_back(v[p][0]);
    A.push_back(v[q][1]);
    A.push_back(v[r][2]);
    A.push_back(v[s][3]);
    sort(A.begin(),A.end());
    //   for(ll i=0;i<4;i++){
    //     cout<< A[i];
    // }
    ll profit = A[0]*25 + A[1]*50+A[2]*75+A[3]*100;
    ll c = count(A.begin(), A.end(), 0);
    profit = profit - c*100;
    return profit;
}
int main() {
	// your code goes here
	ll T;
	cin>>T;
	vector<ll> R;
	while(T--){
	    ll N;
	    vector<vector<ll>> S(4,vector<ll>(4));
	    cin>>N;
	    char a;
	    ll t;
	    for(ll i=0;i<N;i++){
	        cin>>a>>t;
	        ll x,y;
	        switch(a){
	            case 'A':x=0;
	                break;
	            case 'B':x=1;
	                break;
	            case 'C':x=2;
	                break;
	            case 'D':x=3;
	                break;
	        }
	        switch(t){
	            case 12:y=0;
	                break;
	            case 3:y=1;
	                break;
	            case 6:y=2;
	                break;
	            case 9:y=3;
	                break;
	        }
	        S[x][y]+=1;
	    } 
	   // for(ll i=0;i<4;i++){
	   //     for(ll j=0;j<4;j++){
	   //         cout<<S[i][j]<<" ";
	   //     }
	   //     cout<<endl;
	   // }
	   vector<ll> ans;
	   ans.push_back(sum(S,0,1,2,3));
	   ans.push_back(sum(S,0,1,3,2));
	   ans.push_back(sum(S,0,2,1,3));
	   ans.push_back(sum(S,0,2,3,1));
	   ans.push_back(sum(S,0,3,1,2));
	   ans.push_back(sum(S,0,3,2,1));
	   
	   ans.push_back(sum(S,1,0,2,3));
	   ans.push_back(sum(S,1,0,3,2));
	   ans.push_back(sum(S,1,2,0,3));
	   ans.push_back(sum(S,1,2,3,0));
	   ans.push_back(sum(S,1,3,0,2));
	   ans.push_back(sum(S,1,3,2,0));
	   
	   ans.push_back(sum(S,2,0,1,3));
	   ans.push_back(sum(S,2,0,3,1));
	   ans.push_back(sum(S,2,1,0,3));
	   ans.push_back(sum(S,2,1,3,0));
	   ans.push_back(sum(S,2,3,1,0));
	   ans.push_back(sum(S,2,3,0,1));
	   
	   ans.push_back(sum(S,3,0,1,2));
	   ans.push_back(sum(S,3,0,2,1));
	   ans.push_back(sum(S,3,1,2,0));
	   ans.push_back(sum(S,3,1,0,2));
	   ans.push_back(sum(S,3,2,1,0));
	   ans.push_back(sum(S,3,2,0,1));
	   sort(ans.begin(),ans.end());
	    cout<<ans[23]<<endl;
	    R.push_back(ans[23]);
	}
	cout<<accumulate(R.begin(), R.end(), 0);
	return 0;
}
