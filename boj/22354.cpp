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
//ll n;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//    cin>>n;
//    string str;
//    cin>>str;
//    vector<pair<ll,char>>arr(n);
//    for(int i=0,p1;i<n;i++){
//        cin>>p1;
//        arr[i]={p1,str[i]};
//    }
//    vector<pair<ll,char>>v;
//    v.push_back({arr[0].first,arr[0].second});
//    for(int i=1;i<n;i++){
//        auto[value,color]=arr[i];
//        auto[pre_value,pre_color]=v.back();
//        if(pre_color==color &&  value>pre_value){
//            v.pop_back();
//            v.push_back({arr[i]});
//        }
//        else if(pre_color!=color){
//            v.push_back({arr[i]});
//        }
//    }
//    int cnt =  (v.size()-2+1)/2;
//    vector<ll>ans;
//    for(int i=1;i<v.size()-1;i++){
//        ans.push_back(v[i].first);
//    }
//    sort(ans.begin(),ans.end());
//    ll answer=0;
//    while(cnt!=0){
//        answer+=ans.back();
//        ans.pop_back();
//        cnt-=1;
//    }
//    cout<<answer;
//    return 0;
//}
//
