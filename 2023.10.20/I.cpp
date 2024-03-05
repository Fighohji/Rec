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
constexpr int maxn = 2e6 + 50;
constexpr int INF = 0x3f3f3f3f;
constexpr ll LINF =  0x3f3f3f3f3f3f3f3f;
constexpr int mod = 998244353; /* 1e9 + 7 */
constexpr int dir[8][2] = {-1, 0, -1, 1, 0, 1, 1, 1, 1, 0, 1, -1, 0, -1, -1, -1};

mt19937_64 rnd(random_device {}());
uniform_int_distribution<ull> dist(1, 1e9);//use dist(rnd)
map<int, int>mp;
void solve() {

    int maxx = 1;
    int now;
    for(int i = 1; i <= 3333; ++i)
    {
        cout << "walk " << dist(rnd) % 1000000000 << endl;
        cin >> now;
        maxx = max(maxx, now);
    }
    // cout << "walk " << maxx - now << endl;
    // cin >> now;
    // mp[now] = 0;
    for(int i = 1; i <= 3333; ++i)
    {
        cout << "walk " << 1 << endl;
        cin >> now;
        if(mp.count(now))
        {
            cout << "guess " << i - mp[now] << endl;
            return ;
        }
        else mp[now] = i;
    }
    cout << "walk " << maxx << endl;
    cin >> now;
    if(mp.count(now))
    {
        cout << "guess " << maxx + 3333 - mp[now] << endl;
        return ;
    }
    for(int i = 1; i <= 3333; ++i)
    {
        cout << "walk " << 3333 << endl;
        cin >> now;
        if(mp.count(now))
        {
            cout << "guess " << maxx + 3333 * (i + 1) - mp[now] << endl;
            return ;
        }
    }

}

signed main() {
    // cout << fixed << setprecision(10);
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // int T; cin >> T; while (T--)
    solve();
    return 0;
}
