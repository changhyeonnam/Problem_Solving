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
//int n,t;
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//    cin>>t;
//    while(t--){
//        cin>>n;
//        string str;
//        cin>>str;
//        int cnt  =0;
//        int x = str.size()/2;
//
//        char c = str[x];
//        if(str.size()%2==1) {
//            cnt += 1;
//            for (int i = 1; i <= str.size() / 2; i++) {
//                if (str[x - i] == str[x + i] && str[x - i] == c) {
//                    cnt += 2;
//                } else {
//                    break;
//                }
//            }
//        }
//        else{
//            for (int i = 1; i <= str.size() / 2; i++) {
//                if (str[x - i] == str[x] && str[x - i] == c) {
//                    cnt += 2;
//                } else {
//                    break;
//                }
//            }
//        }
//        cout<<cnt<<endl;
//
//    }
//    return 0;
//}
//
