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
//ll n,t,m,x;
//ll ans = 1e9;
//map<ll,ll>mp;
//void solve(string str, ll MAX, ll sz, ll cnt){
//    if(sz>=n) {
//        ans = min(ans,cnt);
//        return;
//    }
//    mp[MAX]=cnt;
//    for(int i=0;i<str.size();i++){
//        if(str[i]=='0' || str[i]=='1')
//            continue;
//        ll tm;
//        tm = MAX* (str[i]-'0');
//        if(mp.find(tm)==mp.end()) {
//            string ts = to_string(tm);
//            solve(ts, tm, ts.size(), cnt + 1);
//        }
//        else if(mp[tm]>cnt+1){
//            string ts = to_string(tm);
//            solve(ts, tm, ts.size(), cnt + 1);
//        }
//    }
//
//}
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//    cin>>n>>x;
//    if(n!=1 && x==1)
//    {
//        cout<<-1<<endl;
//        return 0;
//    }
//    string str = to_string(x);
//    bool check = false;
//    for(auto c:str){
//        if(c!='0' && c!='1'){
//            check = true;
//            break;
//        }
//    }
//    if(!check){
//        if(str.size()==n)
//            cout<<0<<endl;
//        else
//            cout<<-1<<endl;
//        return 0;
//    }
//    string sx= to_string(x);
//    solve(sx,x,sx.size(),0);
//    cout<<ans<<endl;
//
//    return 0;
//}
//
