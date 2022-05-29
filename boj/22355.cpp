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
//#define MAX 100011
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
//ll n,k,a[MAX], asc[MAX],desc[MAX],ans=LINF;
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
//void update(vector<Tree>& tree, int node, int s, int e,
//            int left, int right, ll diff) {
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
//ll solve(int s, int e){
//    // 삼분 탐색
//    while(s+3 <=e){
//        int p = (s*2 +e)/3;
//        int q = (s+e*2)/3;
//        ll A1 = query(tree, 1,1,MAX,p,p);
//        ll A2 = query(tree, 1,1,MAX,q,q);
//        ll B1 = query(cons, 1,1,MAX,p,p);
//        ll B2 = query(cons, 1,1,MAX,q,q);
//        if(A1*p+B1>A2*q+B2)
//            s=p;
//        else
//            e=q;
//    }
//    ll ret = LINF;
//    for(int i=s;i<=e;i++){
//        ll A = query(tree,1,1,MAX,i,i);
//        ll B = query(cons,1,1,MAX,i,i);
//        ret = min(ret,A*i+B);
//    }
//    return ret;
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//    cin>>n>>k;
//    tree.resize(1<<18);
//    cons.resize(1<<18);
//    for(int i=1;i<=n;i++)
//        cin>>a[i];
//    for(int i=1;i<=n;i++)
//        cin>>asc[i];
//    for(int i=1;i<=n;i++)
//        cin>>desc[i];
//
//    for(int i=1;i<=n;i++){
//        update(tree,1,1,MAX,1,a[i]-1,-desc[i]);
//        update(cons,1,1,MAX,1,a[i]-1,desc[i]*a[i]);
//        update(tree,1,1,MAX,a[i],MAX,asc[i]);
//        update(cons,1,1,MAX,a[i],MAX,-asc[i]*a[i]);
//        if(i>=k){
//            ans = min(ans,solve(1,100000));
//            update(tree,1,1,MAX,1,a[i-k+1]-1,desc[i-k+1]);
//            update(cons,1,1,MAX,1,a[i-k+1]-1,-desc[i-k+1]*a[i-k+1]);
//            update(tree,1,1,MAX,a[i-k+1],MAX,-asc[i-k+1]);
//            update(cons,1,1,MAX,a[i-k+1],MAX,asc[i-k+1]*a[i-k+1]);
//        }
//    }
//    cout<<ans<<endl;
//
//    return 0;
//}
//
