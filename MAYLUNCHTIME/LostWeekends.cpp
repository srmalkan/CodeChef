#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll A[5];
	    for(int i=0;i<5;i++){
	        cin>>A[i];
	    }
	    int P;
	    cin>>P;
	    int sum=0;
	    for(int i=0;i<5;i++){
	        sum += A[i]*P;
	    }
	    if(sum>120){
	        cout<<"Yes"<<"\n";
	    }else{
	        cout<<"No"<<"\n";
	    }
	}
	return 0;
}
