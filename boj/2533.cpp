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
//typedef pair<ll, ll> pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//int n;
//vector<int>v[1000001];
//int dp[1000001][2];
//void dfs(int x){
//    dp[x][0]=1;
//    for(auto c:v[x]){
//        dfs(c);
//        dp[x][1]+=dp[c][0];
//        dp[x][0]+=min(dp[c][0],dp[c][1]);
//    }
//
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n;
//    for(int i=0,p1,p2;i<n-1;i++){
//        cin>>p1>>p2;
//        v[p1].push_back(p2);
//    }
//    memset(dp,0,sizeof(dp));
//    dfs(1);
//    cout<<min(dp[1][0],dp[1][1]);
//    return 0;
//}
//
