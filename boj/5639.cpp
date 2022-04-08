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
//struct Node{
//    int data;
//    Node* left;
//    Node* right;
//};
//
//Node* insert(Node* node, int data){
//    if(node==NULL){
//        node = new Node();
//        node->data=data;
//        node->left = node->right  = NULL;
//    }
//    else  if(data<= node->data)
//        node->left = insert(node->left, data);
//    else
//        node->right = insert(node->right, data);
//    return node;
//}
//
//void postorder(Node* node){
//    if(node->left!=NULL)
//        postorder(node->left);
//    if(node->right!=NULL)
//        postorder(node->right);
//    cout<<node->data<<'\n';
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    Node* root  = NULL;
//    int val;
//    while(cin>>val){
//        if(val==EOF) break;
//        root = insert(root,val);
//    }
//    postorder(root);
//    return 0;
//}
//
