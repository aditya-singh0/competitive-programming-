#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
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
    int n;                       \
    cin >> n;                    \
    vi a(n + 1);                 \
    f(i, 1, n + 1) cin >> a[i];
#define ps(x, y) fixed << setprecision(y) << x
#define pii pair<int, int>
// eg-> maxh<int>
template <typename T>
using minh = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using maxh = priority_queue<T>;
#define vi vector<int>
#define flushC cout.flush(); // for interactive problem at the end of every input and output
#define flushR cerr.flush();
#define f(i, a, b) for (int i = a; i < b; i++)
#define fr(i, a, b) for (int i = a; i >= b; i--)
#define yes            \
    {                  \
        cout << "YES"; \
        return;        \
    }
#define no            \
    {                 \
        cout << "NO"; \
        return;       \
    }
#define minusOne      \
    {                 \
        cout << "-1"; \
        return;       \
    }
const int dx[8] = {0, 1, -1, 0, -1, -1, 1, 1};
const int dy[8] = {1, 0, 0, -1, 1, -1, -1, 1};
const char sp = ' ';

#define debug(x...)      \
    cerr << #x << "= ["; \
    _print(x);           \
    cerr << "]" << ln;

typedef unsigned long long ull;
typedef long double lld;

void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(unordered_map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <typename T, typename... V>
void _print(T t, V... v)
{
    _print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
// copy math template here

void solve()
{
    // see if you need number of test case or not
    string s, t;
    cin >> s >> t;

    sort(all(s));
    string tp = s;

    int n = s.size();
    tp.erase(unique(all(tp)), tp.end());
    int m = tp.size();
    int f = 0;

    for (int i = 0; i + 2 < m; i++)
    {
        if (tp.substr(i, 3) == "abc")
        {
            f = 1;
            break;
        }
    }

    if (t == "abc" and f)
    {
        string k = "acb";
        vi mp(26, 0);
        for (auto i : s)
        {
            mp[i - 'a']++;
        }

        // debug(mp);
        string ans;

        for (auto i : k)
        {
            ans += string(mp[i - 'a'], i);
        }

        f(i, 3, 26)
        {
            ans += string(mp[i], 'a' + i);
        }

        cout << ans;
    }

    else
    {

        cout << s;
        return;
    }
}

signed main()
{
#ifndef ONLINE_JUDGE
    // uncomment for seeing input and ouput in file
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cerr << "Finished" << ln;
#endif
    fastio();

    int t = 1;
    cin >> t;
    // precomputation cannot be dependend on array size(n) or range etc
    // precomput();
    while (t--)
    {
        solve();
        cout << ln;
    }
}