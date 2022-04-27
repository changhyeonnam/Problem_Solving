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
//int t,n,x;
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        cin>>n>>x;
//        vector<ll>v;
//        for(int i=0;i<n;i++){
//            int p1;
//            cin>>p1;
//            v.push_back(p1);
//        }
//        sort(v.begin(),v.end());
//        for(int i=1;i<n;i++){
//            v[i]+=v[i-1];
//        }
//        ll ans = 0;
//        ll cnt2=0;
//        for(int i=v.size()-1;i>=0;i--){
//            ll cnt=0;
//            if(v[i]<=x)cnt+=1;
//            ll tmp = x-v[i];
//            if(tmp>0) {
//                tmp /= (i + 1);
//                cnt += tmp;
//            }
//            cnt-=cnt2;
//            if(cnt<0)break;
//            ans+=(cnt)*(i+1);
//            cnt2+=cnt;
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
