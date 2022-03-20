////
//// Created by changhyeonnam on 2022/03/20.
////
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
//using namespace std;
//
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//int t;
//bool check[100000];
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    int test = t;
//    while(t--){
//        string s;
//        cin>>s;
//        string s1;
//        cin>>s1;
//        int ptr1=0;
//        int ans =0;
//        for(int i=0;i<s1.size();i++){
//            if(s1[i]==s[ptr1]){
//                ptr1+=1;
//                continue;
//            }
//            else{
//                ans+=1;
//            }
//        }
//        if(ptr1==s.size()){
//            cout<<"Case #"<<test-t<<": "<<ans<<endl;
//        }
//        else{
//            cout<<"Case #"<<test-t<<": "<<"IMPOSSIBLE"<<endl;
//        }
//    }
//    return 0;
//}
//
