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
//        cin>>n;
//        vector<int>v;
//        v.resize(n+1);
//        for(int i=1;i<=n;i++)cin>>v[i];
//        int ans =0;
//        for(int i=1;i<=n;i++){
//            for(int j=i+1;j<=n;j++){
//                if(v[i]>=v[j])
//                    ans+=1;
//            }
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
