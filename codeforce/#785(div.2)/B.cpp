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
//typedef pair<int, int> pl;
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
//    while(t--){
//        string s;
//        cin>>s;
//        bool check=true;
//        for(char c='a';c<='z';c++){
//            vector<int>v(26,0);
//            if(s.find(c)==string::npos) continue;
//            for(auto k:s){
//                if(k==c)
//                    v = vector<int>(26,0);
//                else{
//                    v[k-'a']+=1;
//                    if(v[k-'a']>1){
//                        check = false;
//                        break;
//                    }
//                }
//            }
//        }
//        if(check)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//
//
//
//
//    }
//    return 0;
//}
//
