

#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
// using namespace __gnu_pbds;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long 
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define ln "\n"
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
template <class T>
T power(T N, T P)
{
    return (P == 0) ? 1 : N * power(N, P - 1);
}
#define input_Vector(n, a) \
    int n;                 \
    cin >> n;              \
    vi a(n);               \
    f(i, 0, n) cin >> a[i];
#define input_Vector1based(n, a) \
int n;                 \
cin >> n;              \
vi a(n+1);               \
f(i, 1, n+1) cin >> a[i];
#define ps(x, y) fixed << setprecision(y) << x
#define pii pair<int,int>
// eg-> maxh<int>
template<typename T> using minh = priority_queue<T, vector<T>, greater<T>>;
template<typename T> using maxh = priority_queue<T>;
#define vi vector<int>
#define flushC cout.flush(); //for interactive problem at the end of every input and output
#define flushR cerr.flush();
#define f(i, a, b) for (int i = a; i < b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
#define yes {cout<<"YES";return;}
#define no {cout<<"NO";return;}
const char sp = ' ';
#ifdef DEBUG
#define debug(x...) cerr << #x <<  "= ["; _print(x); cerr << "]" << ln;
#else
#define debug(x...)
#endif

typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

//void _print(int t) {cerr << t;}
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
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <typename T, typename... V>
void _print(T t, V... v) {_print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/
int expo(int a, int b) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % MOD; a = (a * a) % MOD; b = b >> 1;} return res;}
void extendgcd(int a, int b, int*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); int x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
int mminv(int a, int b) {int arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
int mminvprime(int a, int b) {return expo(a, b - 2);}
int combination(int n, int r, int m, int *fact, int *ifact) {int val1 = fact[n]; int val2 = ifact[n - r]; int val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
int mod_add(int a, int b) {a = a % MOD; b = b % MOD; return (((a + b) % MOD) + MOD) % MOD;}
int mod_mul(int a, int b) {a = a % MOD; b = b % MOD; return (((a * b) % MOD) + MOD) % MOD;}
int mod_sub(int a, int b) {a = a % MOD; b = b % MOD; return (((a - b) % MOD) + MOD) % MOD;}
int mod_div(int a, int b) {a = a % MOD; b = b % MOD; return (mod_mul(a, mminvprime(b, MOD)) + MOD) % MOD;}  //only for prime m
int phin(int n) {int number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (int i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
/*--------------------------------------------------------------------------------------------------------------------------*/


//https://www.youtube.com/watch?v=TqfgWGbZK8s
//https://www.geeksforgeeks.org/sum-xor-possible-subsets/
void solve() {
        int n, m;
    cin >> n >> m;
    int OR = 0;
    vector<int> str(m);
    for (int i = 0; i < m; ++i) {
        int l, r, x;
        cin >> l >> r >> x;
        // OR |= x;
        str[i] = x;
    }
    // cout << modmul(OR, modpow(2, n - 1)) << Endl;
    int ans = 0;
    for (int i = 0; i < 32; ++i) {
        int mask = (1ll << i);
        bool atleastOneSet=false;
        for (int j = 0; j < m; ++j) {
            if (str[j] & mask) {
                atleastOneSet=true;
                break;
            }
        }
        if (atleastOneSet) {
            ans = mod_add(ans, mod_mul(mask, expo(2, n - 1)));
            // ans = modadd(ans, modmul(mask, modmul(modpow(2, cnt - 1), modpow(2, n - cnt))));
        }
    }
    cout << ans ;
}

signed main() {
#ifdef aditya
   freopen("Error.txt", "w", stderr);
#endif
   fastio();
   auto start1 = high_resolution_clock::now();
   int t=1;
    // see if you need number of test case or not
   cin >> t;
   while (t--) {
                 
     solve();
     cout<<ln;  
   }
   auto stop1 = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef aditya
   cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}