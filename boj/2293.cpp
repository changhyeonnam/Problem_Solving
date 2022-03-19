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
//int t;
//int dp[10001];
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    int n,k;
//    cin>>n>>k;
//    int arr[100];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    dp[0]=1;
//    for(int i=0;i<n;i++){
//        int coin=arr[i];
//        for(int j=coin;j<=k;j++){
//            dp[j]+=dp[j-coin];
//        }
//    }
//    cout<<dp[k]<<endl;
//    return 0;
//}
//
