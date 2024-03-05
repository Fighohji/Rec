#include <cstdlib>
#include <ios>
#include <map>
#include <set>
#include <array>
#include <cmath>
#include <queue>
#include <stack>
#include <tuple>
#include <bitset>
#include <cctype>
#include <cstdio>
#include <random>
#include <string>
#include <vector>
#include <cassert>
#include <cstring>
#include <iomanip>
#include <limits.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
using namespace std;

#define N maxn
#define db double
#define il inline
#define fir first
#define sec second
#define eps (1e-8)
#define pb push_back
#define ll long long
#define mkp make_pair
#define eb emplace_back
#define pii pair<int, int>
#define lowbit(a) (a & (-a))
#define SZ(a) ((int)a.size())
#define ull unsigned long long
#define all(a) a.begin(), a.end()
#define split cout << "=========\n";
#define pll pair<long long, long long>
#define equals(a, b) (fabs((a) - (b)) < eps)

constexpr int ON = 0;
constexpr int CW = -1;
constexpr int CCW = 1;
constexpr int BACK = 2;
constexpr int FRONT = -2;
const db pi = acos(-1.000);
constexpr int maxn = 3e5 + 50;
constexpr int INF = 0x3f3f3f3f;
constexpr ll LINF =  0x3f3f3f3f3f3f3f3f;
constexpr int mod = 998244353; /* 1e9 + 7 */
constexpr int dir[8][2] = {-1, 0, -1, 1, 0, 1, 1, 1, 1, 0, 1, -1, 0, -1, -1, -1};

mt19937_64 rnd(random_device {}());
uniform_int_distribution<ull> dist(0, ULLONG_MAX);//use dist(rnd)

ll n,w;
ll x[N],y[N];
ll cg(ll s,ll fl)
{
    return w+s*fl;
}
ll f(ll x)
{
    return x*(x+1)*(n-x)/2+(n-x)*(n-x-1)/2+x*(x-1)/2;
}
void solve()
{
    cin>>n>>w;
    ll det=n/2+(n%2);
    for(int i=1;i<=n;++i) x[i]=i;
    for(int i=1;i<=det;++i) y[i]=det-i+1;
    for(int i=det+1;i<=n;++i) y[i]=i;
    // for(int i=1;i<=n;++i) y[i]=n-y[i];
    for(int i=1;i<=n;++i)
    {
        if(w>n) cout<<cg(n-y[i]+1,-1)<<' '<<x[i]<<endl;
        else cout<<cg(n-y[i]+1,1)<<' '<<x[i]<<endl;
    }
}

signed main() {
    // cout << fixed << setprecision(10);
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // int T; cin >> T; while (T--)
    solve();
    return 0;
}
