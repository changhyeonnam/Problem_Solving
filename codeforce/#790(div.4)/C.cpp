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
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        int n,m;
//        cin>>n>>m;
//        vector<string>arr;
//        arr.resize(n);
//        for(int i=0;i<n;i++)cin>>arr[i];
//        int ans = 1e9;
//        for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//                int tmp = 0;
//                for(int k=0;k<m;k++){
//                    tmp += abs(arr[i][k]-arr[j][k]);
//                }
//                ans = min(tmp,ans);
//            }
//        }
//        cout<<ans<<endl;
//
//    }
//    return 0;
//}
//
