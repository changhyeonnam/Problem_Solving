//
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
//    stack<pair<ll,ll>>st;
//    ll ans =0;
//    while(t--){
//        ll num;
//        cin>>num;
//        ll val=1;
//        if(!st.empty()  && st.top().first<=num){
//            while(!st.empty()&&st.top().first<num) {
//                ans += st.top().second;
//                st.pop();
//            }
//            while(!st.empty()&&st.top().first==num){
//                ans += st.top().second;
//                val = st.top().second+1;
//                st.pop();
//            }
//        }
//        if(!st.empty())
//            ans+=1;
//        st.push({num,val});
//    }
//    cout<<ans<<endl;
//
//    return 0;
//}
//
