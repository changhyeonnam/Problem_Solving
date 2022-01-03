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
//int n,m,k;
//vector<int>w;
//vector<vector<int>>v;
//int par[51];
//// 각 파티에 포함되어 있으면 부모가 같게 merge.
//
//int find(int a){
//    if(par[a]==a)return a;
//    else return find(par[a]);
//}
//
//void merge(int a, int b){
//    int a_root = find(a), b_root= find(b);
//    if(a_root!=b_root) par[b_root]=a_root;
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n>>m;
//    cin>>k;
//    v.resize(m+1);
//    for(int i=1;i<=n;i++){
//        par[i]=i;
//    }
//    for(int i=0,p1;i<k;i++)
//    {
//        cin>>p1;
//        w.push_back(p1);
//    }
//    for(int i=0,p1;i<m;i++){
//        cin>>p1;
//        int any=0;
//        for(int j=0,p2;j<p1;j++){
//            cin>>p2;
//            v[i].push_back(p2);
//            if(j==0) {
//                any = find(p2);
//                continue;
//            }
//            merge(any,p2);
//        }
//    }
//    int ans = 0;
//    set<int>check_st;
//    for(int i=1;i<=n;i++){
//        bool check = false;
//        for(auto j:w){
//            if(find(i)==find(j)){
//                check = true;
//                break;
//            }
//        }
//        if(!check){
//            if(check_st.find(par[i])==check_st.end()){
//                check_st.insert(par[i]);
//            }
//        }
//    }
//    for(int i=0;i<m;i++){
//        bool check = true;
//        for(int j=0;j<v[i].size();j++){
//            if(check_st.find(par[v[i][j]])==check_st.end()){
//                check=false;
//                break;
//            }
//        }
//        if(check){
//            ans+=1;
//        }
//    }
//    cout<<ans<<endl;
//    return 0;
//}
//
