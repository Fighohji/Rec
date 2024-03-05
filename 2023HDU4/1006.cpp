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
#include <numeric>
#include <iomanip>
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
#define GG { cout << "NO\n"; return; }
#define pll pair<long long, long long>
#define equals(a, b) (fabs((a) - (b)) < eps)

constexpr int ON = 0;
constexpr int CW = -1;
constexpr int CCW = 1;
constexpr int BACK = 2;
constexpr int FRONT = -2;
const db pi = acos(-1.000);
constexpr int maxn = 2e5 + 50;
constexpr int INF = 0x3f3f3f3f;
constexpr ll LINF =  0x3f3f3f3f3f3f3f3f;
constexpr int mod = 998244353; /* 1e9 + 7 */
constexpr int dir[8][2] = {-1, 0, -1, 1, 0, 1, 1, 1, 1, 0, 1, -1, 0, -1, -1, -1};

// mt19937_64 rnd(random_device {}());
// uniform_int_distribution<ull> dist(0, ULLONG_MAX);//use dist(rnd)

bool BEGIN;
#define endl '\n'
struct ty
{
    ll a,b;
}mas[N];
bool cmp(ty a,ty b)
{
    return a.a+a.b>b.a+b.b;
}
ll n;
void solve(int cas) {

    cin>>n;
    for(int i=1;i<=n;++i) cin>>mas[i].a>>mas[i].b;
    sort(mas+1,mas+1+n,cmp);
    ll sum1=0,sum2=0;
    // ll l=1,r=n;
    // while(l<r)
    // {
    //     sum1+=mas[l].a;sum2+=mas[r].b;
    //     l++;r--;
    // }
    // if(l==r)sum1+=mas[l].a;
    for(int i=1;i<=n;i+=2) sum1+=mas[i].a;
        for(int i=2;i<=n;i+=2) sum2+=mas[i].b;
    cout<<sum1-sum2<<endl;
}

bool END;
signed main() {
    // cout << fixed << setprecision(9);
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T; while (T--)
    solve(1);
    // cout << ((&END - & BEGIN) >> 21) << '\n';
    return 0;
}
