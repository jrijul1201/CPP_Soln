#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define int long long int 
#define REP(i,k,n) for (int i = k ; i < n; i++)
#define REPD(i,k,n) for (int i = k; i >= n; i--)
#define all(v) v.begin(),v.end() 
#define SZ(x) ((int)(x).size())
#define br cout <<"\n";
// bool cmp( pair<int,int> a , pair<int,int> b ){
//     if( a.first == b.first )
//         return (a.second > b.second);
//     return a.first < b.first ;
// }
const int MOD = 1000000007;
const int INF = 1e18;
 
void solve(){
    int n,x;
    double s;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
    	cin>>x;
    	v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    s=0;
    for(int i=1;i<n;i++){
    	s=s+v[i];
    }
    s=double(v[0])+ s/(n-1);
    cout<<fixed<<setprecision(9)<<s<<"\n";
} 
 
int32_t main() {
    #ifndef ONLINE_JUDGE  
        freopen("input.txt", "r", stdin);  
        freopen("output.txt", "w", stdout); 
    #endif
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t ;
    cin >> t;
    while(t--){
        solve();
    }    
    return 0;
}