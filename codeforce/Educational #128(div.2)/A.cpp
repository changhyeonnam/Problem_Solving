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
//int t,n;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        string s;
//        cin>>s;
//        int one =0;
//        int dp[200000][2];
//
//        if(s[0]=='1')
//            dp[0][1]=1;
//        else if(s[0]=='0')
//            dp[0][0]=1;
//        for(int i=1;i<s.size();i++){
//            if(s[i]=='1'){
//                dp[i][1]=dp[i-1][1]+1;
//                dp[i][0]=dp[i-1][0];
//            }
//            else{
//                dp[i][0]=dp[i-1][0]+1;
//                dp[i][1]=dp[i-1][1];
//            }
//        }
//        int ans = 1e9;
//        int k = dp[s.size()-1][1];
//        for(int i=0;i<s.size()-k;i++){
//            if(i==0){
//                int removal = dp[s.size()-1][1]-dp[i+k][1];
//                int remain = dp[i+k]
//            }
//        }
//
//
//    }
//    return 0;
//}