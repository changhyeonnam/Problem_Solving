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
//int t,n,m;
//int ti[100];
//int l[100];
//int h[100];
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        cin>>n>>m;
//        bool check = true;
//        for(int i=0;i<n;i++){
//            cin>>ti[i]>>l[i]>>h[i];
//        }
//        int st=m;
//        int en=m;
//        int last_ti=0;
//        for(int i=0;i<n;i++) {
//            if((st-(ti[i]-last_ti))>h[i] || en+(ti[i]-last_ti)<l[i]){
//                check= false;
//                break;
//            }
//            en = min(en+(ti[i]-last_ti),h[i]);
//            st = max(st-(ti[i]-last_ti),l[i]);
//            last_ti=ti[i];
//        }
//        cout<<((check)?"YES":"NO")<<endl;
//    }
//    return 0;
//}
//
