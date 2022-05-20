////
//// Created by changhyeonnam on 2022/05/18.
////
//
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//#define endl '\n'
//
//int n,m;
//int arr[1001][1001];
//int dp[1001][1001];
//int ans = 0;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//    cin>>n>>m;
//    for(int i=1;i<=n;i++){
//        string str;
//        cin>>str;
//        for(int j=0;j<m;j++){
//            arr[i][j+1]=str[j]-'0';
//        }
//    }
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            if(arr[i][j]==1){
//                dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
//                ans = max(ans,dp[i][j]);
//            }
//        }
//    }
//    cout<<ans*ans<<endl;
//    return 0;
//}
//
