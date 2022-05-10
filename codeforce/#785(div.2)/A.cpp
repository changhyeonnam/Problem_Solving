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
//        int a=0,b=0;
//        if(s.size()>=2 && s.size()%2==1) {
//            if(s[0]>s[s.size()-1]) {
//                for (int i = 0; i < s.size() - 1; i++) {
//                    a += s[i] - 'a' + 1;
//                }
//                b= s[s.size()-1]-'a'+1;
//            }
//            else{
//                for (int i = 1; i < s.size() ; i++) {
//                    a += s[i] - 'a' + 1;
//                }
//                b= s[0]-'a'+1;
//            }
//        }
//        else if(s.size()>=2 &&s.size()%2==0){
//            for (int i = 0; i < s.size(); i++) {
//                a += s[i] - 'a' + 1;
//            }
//        }
//        else
//            b= s[0]-'a'+1;
//        if(a>b) cout<<"Alice"<<' '<<a-b<<endl;
//        else cout<<"Bob"<<' '<<b-a<<endl;
//    }
//    return 0;
//}
//
