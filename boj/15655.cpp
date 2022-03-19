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
//int n,m;
//vector<int>v;
//
//void solve(vector<int>&v,int index,vector<int>&ans)
//{
//    if (index==n){
//        if(ans.size()==m){
//            for(auto i:ans)
//                cout<<i<<' ';
//            cout<<endl;
//            return;
//        }
//        else
//            return;
//    }
//    if(ans.size()==m){
//        for(auto i:ans)
//            cout<<i<<' ';
//        cout<<endl;
//        return;
//    }
//    ans.push_back(v[index]);
//    solve(v,index+1,ans);
//    ans.pop_back();
//    solve(v,index+1,ans);
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n>>m;
//    for(int i=0,p1;i<n;i++){
//        cin>>p1;
//        v.push_back(p1);
//    }
//    sort(v.begin(),v.end());
//    vector<int>tmp;
//    solve(v,0,tmp);
//    return 0;
//}
//
//
