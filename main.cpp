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
//#define MOD 1e9+7
//using namespace std;
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef pair<ll, ll> pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//
//ll n;
//
//int main(){
//    ios_base::sync_with_stdio(0); cin.tie(0);
//#ifndef ONLINE_JUDGE
//    freopen("./input.txt", "r", stdin);
//#endif
//
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int c;
//        cin>>n>>c;
//        map<int,int>mp;
//        int cnt = 0;
//        int cnt1=0;
//        for(int i=0;i<n;i++){
//            int x;
//            cin>>x;
//            if(mp.find(x)!=mp.end()){
//                mp[x]+=1;
//            }
//            else{
//                mp[x]=1;
//            }
//            cnt+=1;
//        }
//        int ans=0;
//        for(auto k:mp){
//            ans += min(k.second,c);
//        }
//        cout<<ans<<endl;
//    }
//
//    return 0;
//
//
//}
