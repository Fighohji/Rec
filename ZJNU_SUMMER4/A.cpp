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
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
using namespace std;

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
constexpr int maxn = 5e5 + 50;
constexpr int INF = 0x3f3f3f3f;
constexpr ll LINF =  0x3f3f3f3f3f3f3f3f;
constexpr int mod = 998244353; /* 1e9 + 7 */
constexpr int dir[8][2] = {-1, 0, -1, 1, 0, 1, 1, 1, 1, 0, 1, -1, 0, -1, -1, -1};

// mt19937_64 rnd(random_device {}());
// uniform_int_distribution<ull> dist(0, ULLONG_MAX);//use dist(rnd)

bool BEGIN;
int n, q;
pii a[maxn];
int h[maxn];
vector<int> tmp;
int pre[maxn];

void solve(int cas) {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].fir >> a[i].sec;
        tmp.eb(a[i].fir);
        tmp.eb(a[i].sec);
    }
    cin >> q;
    for (int i = 1; i <= q; ++i) {
        cin >> h[i];
        tmp.eb(h[i]);
    }
    tmp.eb(INF);
    sort(all(tmp));
    tmp.erase(unique(all(tmp)), tmp.end());
    for (int i = 1; i <= n; ++i) {
        a[i].fir = lower_bound(all(tmp), a[i].fir) - tmp.begin() + 1;
        a[i].sec = lower_bound(all(tmp), a[i].sec) - tmp.begin() + 1;
    }
    for (int i = 1; i <= q; ++i) {
        h[i] = lower_bound(all(tmp), h[i]) - tmp.begin() + 1;
        pre[h[i]]++;
    }
    for (int i = 1; i <= 400000; ++i)
        pre[i] += pre[i - 1];
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (pre[a[i].sec] - pre[a[i].fir - 1]) {
            ans++;
        }
    }
    cout << ans << '\n';

}

bool END;
signed main() {
    // cout << fixed << setprecision(10);
    ios::sync_with_stdio(false); cin.tie(nullptr);
    // int T; cin>>T; while (T--)
    solve(1);
    // cout << ((&END - & BEGIN) >> 21) << '\n';
    return 0;
}
