////
////#include <iostream>
////#include <cstring>
////#include <string>
////#include <algorithm>
////#include <vector>
////#include <queue>
////#include <stack>
////#include <map>
////#include <set>
////#include <cmath>
////#define endl '\n'
////#define INF 1e9
////#define LINF 9223372036854775807
////using namespace std;
////
////typedef long long ll;
////typedef pair<int, int> pi;
////typedef tuple<int, int, int> tup;
////ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
////priority_queue<tup,vector<tup>,greater<tup>> edge;
////
////int t;
////
////int dp[21][21][21];
////
////int w(int a,int b,int c){
////    if(a<=0 || b<=0 || c<=0)
////        return 1;
////    else if(a>20||b>20||c>20)
////        return w(20,20,20);
////    else if(a<b&&b<c)
////    {
////        if(dp[a][b][c]!=0)
////            return dp[a][b][c];
////        else{
////            return dp[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
////        }
////    }
////    else{
////        if(dp[a][b][c]!=0)
////            return dp[a][b][c];
////        else
////            return dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
////    }
////}
////int main(){
////    ios_base::sync_with_stdio(false);
////    cin.tie(NULL);cout.tie(NULL);
////    memset(dp,0,sizeof(dp));
////
////    while(1){
////        int a,b,c;
////        cin>>a>>b>>c;
////        if(a==-1 && b==-1 && c==-1)
////            break;
////        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
////    }
////    return 0;
////}
////
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
//
//int dp[101][101][101];
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    memset(dp,0,sizeof(dp));
//
//    for(int i=0;i<=70;i++){
//        for(int j=0;j<=70;j++){
//            for(int l=0;l<=70;l++){
//                if(i<=50 || j<=50 || l<=50){
//                    dp[i][j][l]=1;
//                    continue;
//                }
//                if(i<j&&j<l)
//                {
//                    dp[i][j][l] = dp[i][j][l-1]+dp[i][j-1][l-1]-dp[i][j-1][l];
//                }
//                else{
//                    dp[i][j][l]=dp[i-1][j][l]+dp[i-1][j-1][l]+dp[i-1][j][l-1]-dp[i-1][j-1][l-1];
//                }
//            }
//        }
//    }
//    for(int i=0;i<=100;i++){
//        for(int j=0;j<=100;j++){
//            for(int l=0;l<=100;l++){
//                if(i<=70&&j<=70&&l<=70)
//                    continue;
//                if(i<=50 || j<=50 || l<=50){
//                    dp[i][j][l]=1;
//                    continue;
//                }
//                if(i>70 || j>70 || l>70){
//                    dp[i][j][l]=dp[70][70][70];
//                    continue;
//                }
//                if(i<j&&j<l)
//                {
//                    dp[i][j][l] = dp[i][j][l-1]+dp[i][j-1][l-1]-dp[i][j-1][l];
//                }
//                else{
//                    dp[i][j][l]=dp[i-1][j][l]+dp[i-1][j-1][l]+dp[i-1][j][l-1]-dp[i-1][j-1][l-1];
//                }
//            }
//        }
//    }
//
//
//    while(1){
//        int a,b,c;
//        cin>>a>>b>>c;
//        if(a==-1 && b==-1 && c==-1)
//            break;
//        cout << "w(" << a << ", " << b << ", " << c << ") = ";
//        a+=50;
//        b+=50;
//        c+=50;
//        cout<<dp[a][b][c]<<endl;
//    }
//    return 0;
//}
//
