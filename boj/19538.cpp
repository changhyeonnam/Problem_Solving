////
//// Created by changhyeonnam on 2022/05/20.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//typedef long long ll;
//
//int n;
//int visited[200001];
//vector<int>v[200001];
//int cnt[200001];
//int believe[200001];
//int main(){
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        while(1){
//            int p1;
//            cin>>p1;
//            if(p1==0)
//                break;
//            v[i].push_back(p1);
//            v[p1].push_back(i);
//        }
//    }
//    for(int i=1;i<=n;i++){
//        cnt[i]=v[i].size();
//    }
//    int m;
//    cin>>m;
//    queue<pair<int,int>>q;
//    memset(visited,-1,sizeof(visited));
//
//    for(int i=0,p1;i<m;i++){
//        cin>>p1;
//        q.push({p1,0});
//        visited[p1]=0;
//    }
//    while(!q.empty()){
//        int cur = q.front().first;
//        int t = q.front().second;
//        q.pop();
//        for(auto c:v[cur]){
//            if(visited[c]!=-1)
//                continue;
//            believe[c]+=1;
//            if((cnt[c]+1)/2>believe[c])
//                continue;
//            visited[c]= t+1;
//            q.push({c,t+1});
//        }
//    }
//    for(int i=1;i<=n;i++)
//    {
//        cout<<visited[i]<<' ';
//    }
//
//}