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
//int n,q;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        cin>>n>>q;
//        vector<int>v;
//        v.resize(n);
//        for(int i=0;i<n;i++)cin>>v[i];
//        sort(v.begin(),v.end(),greater<int>());
//        vector<ll> pre;
//        pre.resize(n);
//        pre[0]=v[0];
//        for(int i=1;i<n;i++){
//            pre[i]=v[i]+pre[i-1];
//        }
//        for(int i=0;i<q;i++){
//            ll x;
//            cin>>x;
//            auto iter = lower_bound(pre.begin(),pre.end(),x);
//            if(iter==pre.end())
//                cout<<-1<<endl;
//            else{
//                cout<<iter-pre.begin()+1<<endl;
//            }
//        }
//
//    }
//    return 0;
//}
//
