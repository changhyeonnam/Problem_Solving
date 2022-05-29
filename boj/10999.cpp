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
//#define MAX 1000011
//#define LINF 1e18
//using namespace std;
//
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef pair<ll, ll> pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//ll n,k,m,a[MAX];
//
//struct Tree{
//    ll val, lazy;
//};
//
//vector<Tree> tree,cons;
//void update_lazy(vector<Tree>&tree, int node, int s, int e) {
//    if (tree[node].lazy) {
//        tree[node].val += ((ll)e - s + 1) * tree[node].lazy;
//        if (s != e) {
//            tree[node * 2].lazy += tree[node].lazy;
//            tree[node * 2 + 1].lazy += tree[node].lazy;
//        }
//        tree[node].lazy = 0;
//    }
//}
//ll query(vector<Tree>& tree, int node, int s, int e, int left, int right) {
//    update_lazy(tree, node, s, e);
//    if (e < left || right < s)
//        return 0;
//    if (left <= s && e <= right)
//        return tree[node].val;
//    int mid = (s + e) / 2;
//    return query(tree, node * 2, s, mid, left, right)
//           + query(tree, node * 2 + 1, mid + 1, e, left, right);
//}
//void update(vector<Tree>& tree, int node, int s, int e,int left, int right, ll diff) {
//    update_lazy(tree, node, s, e);
//    if (e < left || right < s)
//        return;
//    if (left <= s && e <= right) {
//        tree[node].lazy += diff;
//        update_lazy(tree, node, s, e);
//        return;
//    }
//    int mid = (s + e) / 2;
//    update(tree, node * 2, s, mid, left, right, diff);
//    update(tree, node * 2 + 1, mid + 1, e, left, right, diff);
//    tree[node].val = tree[node * 2].val + tree[node * 2 + 1].val;
//}
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//    cin>>n>>m>>k;
//    tree.resize(4*n);
//    for(int i=1;i<=n;i++){
//        cin>>a[i];
//        update(tree,1,1,n,i,i,a[i]);
//    }
//
//    for(int i=0;i<=m+k-1;i++){
//        ll a,b,c,d;
//        cin>>a;
//        if(a==1){
//            cin>>b>>c>>d;
//            update(tree,1,1,n,b,c,d);
//        }
//        else if(a==2){
//            cin>>b>>c;
//            cout<<query(tree,1,1,n,b,c)<<endl;
//        }
//    }
//    return 0;
//}
//
