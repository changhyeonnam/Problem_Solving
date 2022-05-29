//#include <iostream>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include<queue>
//#include<map>
//#define endl '\n'
//#define INF 1e9
//#define LINF 2e15
//
//using namespace std;
//typedef long long ll;
//typedef pair<int,int> pi;
//
//int n,b;
//int arr[100000];
//map<int,int>lmap,rmap;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin>>n>>b;
//    int pos=0;
//    int count=0;
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//        if(arr[i]==b)
//            pos=i;
//    }
//    int small=0,big=0;
//    for(int i=pos-1;i>=0;i--){
//        if(arr[i]<b)
//            small++;
//        if(arr[i]>b)
//            big++;
//        lmap[big-small]++;
//    }
//
//    small=0,big=0;
//    for(int i=pos+1;i<n;i++){
//        if(arr[i]<b)
//            small++;
//        if(arr[i]>b)
//            big++;
//        rmap[small-big]++;
//    }
//
//    lmap[0]++; // 왼쪽에서 선택하지 않는 경우.
//    rmap[0]++; // 오른쪽에서 선택하지 않는 경우.
//
//    for(auto [i,j] : lmap){
//        count += rmap[i]*j;
//    }
//    cout<<count<<'\n';
//}