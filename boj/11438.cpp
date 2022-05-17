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
//vector<int>v[100001];
//int d[100001];
//bool visited[100001];
//int dp[100001][21];
//
//int lca(int x, int y){
//    if(d[x]>d[y])
//        swap(x,y);
//    for(int i=20;i>=0;i--){
//        if(d[y]-d[x]>=(1<<i)){
//            y = dp[y][i];
//        }
//        if(y==x)return x;
//    }
//    for(int i=20;i>=0;i--){
//        if(dp[x][i]!=dp[y][i]){
//            x= dp[x][i];
//            y = dp[y][i];
//        }
//    }
//    return dp[x][0];
//}
//void dfs(int x, int depth){
//    visited[x]=true;
//    d[x]=depth;
//    for(auto c : v[x]){
//        if(visited[c])
//            continue;
//        dp[c][0] = x;
//        dfs(c,depth+1);
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
//        v[p2].push_back(p1);
//    }
//    dfs(1,0);
//
//    for(int j=1;j<21;j++){
//        for(int i=1;i<=n;i++){
//            dp[i][j]=dp[dp[i][j-1]][j-1];
//        }
//    }
//
//    int m;
//    cin>>m;
//    for(int i=0,p1,p2;i<m;i++){
//        cin>>p1>>p2;
//        cout<<lca(p1,p2)<<endl;
//    }
//    return 0;
//}
//
