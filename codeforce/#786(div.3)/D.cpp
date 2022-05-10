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
//        int n;
//        cin>>n;
//        int arr[200000];
//        for(int i=0;i<n;i++)cin>>arr[i];
//        stack<int>s1;
//        stack<int>s2;
//        bool check = true;
//        for(int i=n-1;i>=0;i--){
//            if(i==n-1){
//                s1.push(arr[i]);
//                continue;
//            }
//            if(i==n-2){
//                s2.push(arr[i]);
//                continue;
//            }
//            if(s1.size()<=s2.size()&&s1.top()>=arr[i]){
//                s1.push(arr[i]);
//                continue;
//            }
//            if(s2.size()<=s1.size()&&s2.top()>=arr[i]){
//                s2.push(arr[i]);
//                continue;
//            }
//            else{
//                check = false;
//                break;
//            }
//        }
//        vector<int>ans;
//        while(!s1.empty() && !s2.empty()){
//            if(s1.size()>=s2.size()&&s1.top()<=s2.top()) {
//                ans.push_back(s1.top());
//                s1.pop();
//            }
//            else if(s2.size()>=s1.size() &&s2.top()<=s1.top()){
//                ans.push_back(s2.top());
//                s2.pop();
//            }
//            else{
//                break;
//            }
//        }
//        if(!s1.empty())
//        {
//            ans.push_back(s1.top());
//        }
//        if(!s2.empty()){
//            ans.push_back(s2.top());
//        }
//        if(ans.size()!=n){
//            check = false;
//        }
//        for(int i=1;i<ans.size();i++){
//            if(ans[i]<ans[i-1])
//            {
//                check = false;
//                break;
//            }
//        }
//        if(!check)cout<<"NO"<<endl;
//        else
//            cout<<"YES"<<endl;
//    }
//    return 0;
//}
//
