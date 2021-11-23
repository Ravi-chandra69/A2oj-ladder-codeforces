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
    ll n,f,c;string a,b;
    cin>>n>>b;
    cin>>a;
    c=0;f=0;
    for (int i = 0; i <n ; ++i)
    {
        if(b[0]!=a[i]){
            c++;
            // break;
            
        }
    }
    if(c==0)
        cout<<"0\n";
    else{
        for (int i = 2; i <=n; ++i)
        {
            c=0;
            if(a[i-1]==b[0]){

                for (int j = i; j <=n; j+=i)
                {
                    if(a[j-1]!=b[0]){
                        c++;
                        break;
                    }
                }
                if(c==0){
                    cout<<"1\n"<<i<<nline;
                    f=1;break;
                }
            }
        }
        if(f==0){
            cout<<"2\n";
            cout<<n-1<<" "<<n<<nline;
        }
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
  