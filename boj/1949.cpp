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
//vector<int>v[10001];
//bool visited[10001];
//vector<int>arr;
//int dp[10001][2];
//
//void dfs(int x){
//    visited[x]=true;
//    dp[x][0]=arr[x];
//    for(auto c:v[x]){
//        if(visited[c])
//            continue;
//        dfs(c);
//        dp[x][0]+=dp[c][1];
//        dp[x][1]+=max(dp[c][1],dp[c][0]);
//    }
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n;
//    arr.resize(n+1);
//    for(int i=1;i<=n;i++)cin>>arr[i];
//    for(int i=0,p1,p2;i<n-1;i++){
//        cin>>p1>>p2;
//        v[p1].push_back(p2);
//        v[p2].push_back(p1);
//    }
//    memset(dp,0,sizeof(dp));
//    memset(visited,false,sizeof(visited));
//    dfs(1);
//    cout<<max(dp[1][0],dp[1][1]);
//    return 0;
//}
//
