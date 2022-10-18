// code by Aniket Sukhija

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
using namespace std;

#define rep(i,n) for(long long int i=0;i<n;i++)
#define repinv(i,n) for(long long int i=n-1;i>=0;i--)
#define rep1(i,n) for(long long int i=1;i<=n;i++)
#define repinv1(i,n) for(long long int i=n;i>0;i--)
#define loop(i,a,b,k) for(long long int i=a;i<=b;i=i+k)

#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define ll long long 
#define ld long double
#define ull unsigned ll
#define vi vector<int>
#define vl vector<ll>
#define vd vector<double>
#define vc vector<char>
#define vb vector<bool>
#define vstr vector<string>
#define vvi vector<vi>
#define vvl vector<vl>

#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pii>
#define vll vector<pll>

#define uii unordered_map<int,int>
#define si  set<int>
#define sl set<ll>
#define minpq priority_queue<ll,vl>
#define maxpq priority_queue<ll,vl,greater<ll>()>

// for Input-output operations.
#define newl cout<<"\n"
#define coutv(v) for(auto it: (v)){cout<<it<<" ";}newl;
#define cout2d(v) for(auto it: (v)) {for(auto j:it) cout<<j<<" ";newl;}
#define cinv(v,n) vl (v)(n);rep(i,n){cin>>v[i];}
#define cinvg(v,n) (v).resize(n);rep(i,n){cin>>v[i];}
#define cin2d(v,n,m) vvl (v)(n,vll(m,0));rep(i,n){rep(j,m){cin>>v[i][j];}}
#define cin2dg(v,n,m) (v).resize(n,vll(m));rep(i,n){rep(j,m){cin>>v[i][j];}}
#define pyes(CONDITION) cout << (CONDITION ? "YES" : "NO") << '\n';

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define INF 1e18
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void solve(){
    ll n;
    cin>>n;
    cinv(arr,n);
    vl modarr(n,0);
    bool checker=true;
    ll counter=0;
    rep(i,n){
        modarr[i] = arr[i]%(i+2);
    }
    rep(i,n){
        if(modarr[i]==0){
            ll tempcounter=counter;
            while(tempcounter>0){
                tempcounter--;
                if(arr[i]%(i+2 + tempcounter-counter)==0){
                    if(tempcounter==0)
                    checker=false;
                } else {
                    counter++;
                    break;
                }
            }
        } else {
            counter++;
        }
    }
    pyes(counter==n);
    return;
}

int main(){
    #ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
    #endif
    fastio();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}