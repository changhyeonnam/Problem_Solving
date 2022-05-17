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
//int t;
//vector<int>v[4001];
//int n;
//string s;
//int dp[4001];
//bool visited[4001];
//
//void dfs(int x){
//    visited[x]=true;
//    if(s[x-1]=='W')
//    {
//        dp[x]+=1;
//    }
//    else{
//        dp[x]-=1;
//    }
//    for(auto c:v[x]){
//        if(visited[c])
//            continue;
//        dfs(c);
//        dp[x]+=dp[c];
//    }
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        cin>>n;
//        memset(dp,0,sizeof(dp));
//        memset(visited,0,sizeof(visited));
//        memset(v,0,sizeof(v));
//        for(int i=2;i<=n;i++) {
//            int p1;
//            cin>>p1;
//            v[p1].push_back(i);
//        }
//        cin>>s;
//        dfs(1);
//        int ans =0;
//        for(int i=1;i<=n;i++){
//            if(dp[i]==0) {
//                ans += 1;
//            }
//        }
//        cout<<ans<<endl;
//
//    }
//    return 0;
//}
//
