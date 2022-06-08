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

    int m = tp.size();
    tp.erase(unique(all(tp)), tp.end());

    if (t != "abc")
    {
        cout << s;
        return;
    }
    else
    {