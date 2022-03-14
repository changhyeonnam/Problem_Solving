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
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        vector<ll> a;
//        vector<ll> b;
//        for(int i=0;i<n;i++){
//            ll p1;
//            cin>>p1;
//            a.push_back(p1);
//        }
//        for(int i=0;i<n;i++){
//            ll p1;
//            cin>>p1;
//            b.push_back(p1);
//        }
//        ll ans = abs(a[0]-b[0])+abs(a[n-1]-b[n-1]);
//
//        ll tans = INF;
//        ll tans1 = INF;
//        ll tans2 = INF;
//        ll tans3 = INF;
//        for(int i=0;i<n;i++){
//            if (i==0)
//                continue;
//            tans = min(tans,abs(a[i]-b[0]));
//            tans1 = min(tans1,abs(b[i]-a[0]));
//        }
//        for(int i=0;i<n;i++){
//            if (i==n-1)
//                continue;
//            tans2 = min(tans2,abs(a[i]-b[n-1]));
//            tans3 = min(tans3,abs(b[i]-a[n-1]));
//        }
//        ans = min(ans,tans+tans1+tans2+tans3);
//        ans = min(ans,abs(a[0]-b[0])+tans2+tans3);
//        ans = min(ans,abs(a[n-1]-b[n-1])+tans+tans1);
//        ans = min(ans,abs(a[n-1]-b[0])+abs(b[n-1]-a[0]));
//        ans = min(ans,abs(a[n-1]-b[0])+tans2+tans1);
//        ans = min(ans,abs(b[n-1]-a[0])+tans3+tans);
//
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
