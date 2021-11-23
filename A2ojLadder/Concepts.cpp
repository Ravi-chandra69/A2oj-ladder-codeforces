Codeforces Round 747 | Division 2 | Problem B

//Binary exponentiation question  


#include<bits/stdc++.h>
using namespace std;

#define tezi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fr(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define W(x) ll x;cin>>x;while(x--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

bool powerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr<< "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void solve(){
    ll mod = 1000000007;
    ll n,k;cin>>n>>k;

    if(powerOfTwo(k))
        cout<<powermod(n,ceil(log2(k)),mod)<<endl;
    else{ 
        ll c=0;
        while(k>0)
        {
        if(k==1){c++;k=0;}
        else if(k==2) {c+=n%mod;k=0;}
        else if(k==3) {c+=(n+1)%mod;k=0;}
        else if(powerOfTwo(k))
        {
            c+= powermod(n,ceil(log2(k)),mod);
            k=0;
        }
        else
        {
            ll x= pow(2,floor(log2(k)));
            c+=powermod(n,floor(log2(k)),mod);
            k-=x;
        }
    }
    cout<<c%mod<<nline;
}
}


int main() {
    tezi;
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    W(t){
     solve();
 }
}
    




   

    






   

    


