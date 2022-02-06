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
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        int n,k;
//        cin>>n>>k;
//        string s;
//        cin>>s;
//        map<char,int>mp;
//        for(int i=0;i<n;i++){
//            if(mp.find(s[i])==mp.end())
//                mp[s[i]]=1;
//            else
//                mp[s[i]]+=1;
//        }
//        int pair = 0;
//        int cnt = 0;
//        for(auto i:mp){
//            pair += i.second/2;
//            cnt+=i.second%2;
//        }
//        int ans = (pair/k)*2 ;
//        cnt+=(pair%k)*2;
//        if(cnt>=k)
//            ans+=1;
//        else if (ans==0)
//            ans=1;
//
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
