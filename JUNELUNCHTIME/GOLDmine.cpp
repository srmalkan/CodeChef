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
        double chef=0,chefu=0;
        for(int i=0;i<N;i++){
            ll G,t1,t2;
            cin>>G>>t1>>t2;
            double s1 = (G/(double)t1);
            double s2 = (G/(double)t2);
            double t = (G)/(double)(s1+s2);
            chef += s1 * t;
            chefu += s2 * t; 
        }
        cout<<fixed<<showpoint;
        cout<<setprecision(6)<<chef<<" "<<setprecision(6)<<chefu<<"\n";
    }
    return 0;
}