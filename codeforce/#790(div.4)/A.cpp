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
//        for(int i=1;i<=n;i++) {
//            cin >> v[i];
//        }
//        int ans =0;
//        vector<int>v1;
//        v1=v;
//        sort(v1.begin()+i+1,v1.end());
//        for(int i=1;i<=n;i++){
//            auto iter = upper_bound(v1.begin()+i+1,v1.end(),v[i]);
//            if(iter!=v.end()) {
//                if(iter-v1.begin()==0&&v1[iter-v1.begin()]>v[i])
//                    continue;
//                ans+=iter-v1.begin()-i-1;
//            }
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
