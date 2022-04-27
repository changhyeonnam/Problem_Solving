//
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
//using namespace std;
//
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//int n,Max;
//vector<int>m;
//vector<int>c;
//int dp[100][10001];
//int solve(int i,int C){
//    if(i==n)
//        return 0;
//    if(dp[i][C]!=-1)
//        return dp[i][C];
//    dp[i][C] = solve(i+1,C);
//    if(C>=c[i]){
//        dp[i][C]=max(dp[i][C],solve(i+1,C-c[i])+m[i]);
//    }
//    return dp[i][C];
//}
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n>>Max;
//
//    m.resize(n);
//    c.resize(n);
//    for(int i=0;i<n;i++)cin>>m[i];
//    for(int i=0;i<n;i++)cin>>c[i];
//    memset(dp,-1,sizeof(dp));
//    int ans = 0;
//    for(int i=0;i<=10000;i++){
//        int ret = solve(0,i);
//        if(ret>=Max){
//            ans = i;
//            break;
//        }
//    }
//    cout<<ans<<endl;
//    return 0;
//}
//
