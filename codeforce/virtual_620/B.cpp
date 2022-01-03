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
//
//
//bool solve(string a, string b,int idx){
//    if(idx==m-1){
//        if(a[idx]==b[m-1-idx])
//            return true;
//        else
//            return false;
//    }
//    if(a[idx]==b[m-1-idx]){
//        return solve(a,b,idx+1);
//    }
//    else
//        return false;
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n>>m;
//    string s[100];
//
//    for(int i=0;i<n;i++)
//        cin>>s[i];
//    vector<string>s1;
//    bool check[101];
//    memset(check,false,sizeof(check));
//    vector<string>st;
//    vector<string>st2;
//    for(int i=0;i<n;i++){
//        if(check[i])continue;
//        if(solve(s[i],s[i],0))
//        {
//            s1.push_back(s[i]);
//            check[i]=true;
//            continue;
//        }
//        for(int j=i+1;j<n;j++){
//            if(check[j])continue;
//            if(solve(s[i],s[j],0))
//            {
//                st.push_back(s[i]);
//                st2.push_back(s[j]);
//                check[i]=true;
//                check[j]=true;
//                break;
//            }
//        }
//    }
//    int single = (s1.size()>=1)?1:0;
//    int cnt =st.size()*m*2+single*m;
//    cout<<cnt<<endl;
//    for(auto str:st)
//        cout<<str;
//    if(single!=0){
//        cout<<s1[0];
//    }
//    for(int i=st2.size()-1;i>=0;i--){
//        cout<<st2[i];
//    }
//
//    return 0;
//}
//
