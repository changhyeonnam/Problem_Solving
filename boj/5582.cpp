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
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//int t;
//int dp[4001][4001];
//string s1, s2;
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>s1>>s2;
//    int ans = 0;
//    memset(dp,0,sizeof(dp));
//    ans = 0 ;
//    for(int i=1;i<=s1.size();i++){
//       for(int j=1;j<=s2.size();j++){
//           if(s1[i-1]==s2[j-1]){
//               dp[i][j]=dp[i-1][j-1]+1;
//               ans = max(ans,dp[i][j]);
//           }
//       }
//    }
//    cout<<ans<<endl;
//    return 0;
//}
//
