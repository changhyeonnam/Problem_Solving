//#include <iostream>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <map>
//#include <set>
//#include <cmath>
//#define endl '\n'
//#define INF 1e9
//#define LINF 9223372036854775807
//#define all(x) (x).begin(), (x).end()
//using namespace std;
//typedef long long ll;
//typedef pair<ll, ll> pii;
//typedef tuple<int, int, int> tp;
//
//int f(ll x) {
//    int ans = 0;
//    while (x) {
//        int r = x % 10;
//        x /= 10;
//        ans = ans | (1 << r);
//    }
//    return ans;
//}
//
//int g(ll x) {
//    int ans = 0;
//    while (x) {
//        ans++;
//        x /= 10;
//    }
//    return ans;
//}
//
//int main(void) {
//    cin.tie(0)->sync_with_stdio(0);
//    freopen("input.txt", "r", stdin);
//
//    ll n, x, ans = 0;
//    cin >> n >> x;
//    vector<vector<ll> > dp(66, vector<ll>(1025, -1));
//    int tmp = f(x);
//    dp[0][tmp] = x;
//    for (int i = 0; i < 64; i++) {
//        for (int j = 0; j < 1024; j++) {
//            if (dp[i][j] == -1) continue;
//            if (g(dp[i][j]) == n) {
//                cout << i << '\n';
//                return 0;
//            }
//            for (ll k = 0; k < 10; k++) {
//                if ((1 << k) & j) {
//                    ll tmp = dp[i][j] * k;
//                    ll com = f(tmp);
//                    dp[i+1][com] = max(dp[i+1][com], tmp);
//                }
//            }
//        }
//    }
//    cout << -1 << '\n';
//    return 0;
//}