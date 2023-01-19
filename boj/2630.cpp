//
//// Created by changhyeonnam on 2023/01/09.
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
//#define MOD 1e9+7
//using namespace std;
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef pair<ll, ll> pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//ll n;
//
//struct cmp{
//    bool operator()(int &a, int&b){
//        if (abs(a)==abs(b)){
//            return a>b;
//        }
//        return abs(a)>abs(b);
//    }
//};
//priority_queue<int,vector<int>,cmp>pq;
//
//int main(){
//    ios_base::sync_with_stdio(0); cin.tie(0);
//#ifndef ONLINE_JUDGE
//    freopen("./input.txt", "r", stdin);
//#endif
//
//    cin>> n;
//    for(int i=0, input;i<n;i++){
//        cin>>input;
//        if(input==0){
//            if(pq.empty())
//                cout<<0<<endl;
//            else {
//                cout<<pq.top()<<endl;
//                pq.pop();
//            }
//        }
//        else{
//            pq.push(input);
//        }
//
//    }
//
//    return 0;
//
//
//}
