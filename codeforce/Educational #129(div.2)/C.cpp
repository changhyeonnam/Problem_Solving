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
//int n,t,m;
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//    cin>>t;
//    while(t--){
//        cin>>n;
//        vector<ll>a(n);
//        vector<ll>b(n);
//        for(auto&i:a)
//            cin>>i;
//        for(auto&i:b)
//            cin>>i;
//        ll ans = 0;
//        vector<pi>ans_sort;
//        while(ans<=1e4) {
//            ll cnt = 0;
//            for (int i = 0; i < n - 1; i++) {
//                if (a[i] >= a[i + 1] && b[i] >= b[i + 1]) {
//                    if (a[i] == a[i + 1] && b[i] == b[i + 1])
//                        continue;
//                    swap(a[i], a[i + 1]);
//                    swap(b[i], b[i + 1]);
//                    ans_sort.push_back({i,i+1});
//                    cnt += 1;
//                }
//            }
//            if(cnt==0)
//                break;
//            ans+=cnt;
//        }
//        for(int i=0;i<n-1;i++){
//            if(a[i]>a[i+1] || b[i]>b[i+1])
//            {
//                ans=-1;
//                break;
//            }
//        }
//        if(ans==-1)
//            cout<<-1<<endl;
//        else{
//            cout<<ans<<endl;
//            if(!ans_sort.empty()){
//                for(auto [i,j] : ans_sort){
//                    cout<<i+1<<' '<<j+1<<endl;
//                }
//            }
//        }
//
//    }
//    return 0;
//}
//
