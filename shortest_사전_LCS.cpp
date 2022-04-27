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
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    map<char,int>mp;
//    string str;
//    string ans="";
//    int k;
//
//    cin>>str;
//    cin>>k;
//    stack<char>stk;
//
//    for(int i=0;i<str.size();i++){
//        if(stk.empty())
//            stk.push(str[i]);
//        else{
//            while((!stk.empty())&&str[i]>stk.top()&&(stk.size()-1+str.size()-i)>=k){
//                stk.pop();
//            }
//            if(stk.empty()||stk.size()<k)
//                stk.push(str[i]);
//        }
//    }
//    while(!stk.empty()){
//        ans = stk.top()+ans;
//        stk.pop();
//    }
//    cout<<ans;
//    return 0;
//}
//
