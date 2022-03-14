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
//    while(t--){
//        int n;
//        cin>>n;
//        vector<string>v;
//        set<string>st;
//        v.resize(n+1);
//        for(int i=0;i<n;i++){
//            cin>>v[i];
//            st.insert(v[i]);
//        }
//        bool check = true;
//        for(auto str:v){
//            string tmp="";
//            for(int i=0;i<str.size();i++){
//                tmp+=str[i];
//                if(tmp==str)
//                    continue;
//                if(st.find(tmp)!=st.end())
//                {
//                    check=false;
//                    break;
//                }
//            }
//            if(!check) break;
//        }
//        string ans = check?"YES":"NO";
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
