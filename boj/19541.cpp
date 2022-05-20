////
//// Created by changhyeonnam on 2022/05/20.
////
//
//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//vector<int>v[100001];
//int visited[100001];
//int ans[100001];
//int ans2[100001];
//
//int n,m;
//
//int main(){
//    cin>>n>>m;
//    for(int i=0;i<m;i++){
//        int k;
//        cin>>k;
//        for(int j=0;j<k;j++){
//            int p1;
//            cin>>p1;
//            v[i].push_back(p1);
//        }
//    }
//    for(int i=1;i<=n;i++){
//        cin>>visited[i];
//    }
//
//    for(int i=1;i<=n;i++)
//        ans[i]=visited[i];
//
//    for(int i=m-1;i>=0;i--){
//        bool check = true;
//        for(auto c: v[i]) {
//            if (ans[c]==0) {
//                check = false;
//                break;
//            }
//        }
//        if(!check){
//            for(auto c: v[i]) {
//                ans[c] = 0;
//                ans2[c]=0;
//            }
//        }
//    }
//
//    for(int i=1;i<=n;i++)
//        ans2[i]=ans[i];
//
//
//    for(int i=0;i<m;i++){
//        bool check = true;
//        for(auto c:v[i]){
//            if( ans2[c]==1){
//                check = false;
//                break;
//            }
//        }
//        if(!check){
//            for(auto c:v[i]){
//                ans2[c]=1;
//            }
//        }
//    }
//
//    bool check = true;
//
//    for(int i=1;i<=n;i++){
//        if(ans2[i]!=visited[i])
//        {
//            check = false;
//            break;
//        }
//    }
//    if(!check)
//        cout<<"NO";
//    else{
//        cout<<"YES"<<'\n';
//        for(int i=1;i<=n;i++){
//            cout<<ans[i]<<' ';
//        }
//    }
//
//}