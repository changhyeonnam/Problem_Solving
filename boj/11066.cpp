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
//int dp[500][500];
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        int k;
//        cin>>k;
//        int arr[500];
//        int sum[500];
//        memset(sum,0,sizeof(sum));
//        for(int i=0;i<k;i++) {
//            cin >> arr[i];
//            if(i==0)
//                sum[i]=arr[i];
//            else
//                sum[i]=sum[i-1]+arr[i];
//        }
//        memset(dp,0,sizeof(dp));
//        for(int i=k-1;i>=0;i--){
//            for(int j=i+1;j<k;j++){
//                dp[i][j]=INF;
//                for (int l = i; l < j; l++) {
//                    if (i > 0 && j<k)
//                        dp[i][j] = min(dp[i][j], dp[i][l] + dp[l + 1][j] + sum[j] - sum[i - 1]);
//                    else if(j<k) {
//                        dp[i][j] = min(dp[i][j], dp[i][l] + dp[l + 1][j] + sum[j]);
//                    }
//                }
//            }
//        }
//        cout<<dp[0][k-1]<<endl;
//
//    }
//    return 0;
//}
//
