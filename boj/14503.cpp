////
//// Created by changhyeonnam on 2022/10/11.
////
//
//#include<vector>
//#include<queue>
//#include<iostream>
//using namespace std;
//
//int n,m;
//int r,c,d;
//bool visited[50][50];
//int dx[4]={0,-1,0,1};
//int dy[4]={-1,0,1,0};
//vector<vector<int>>v;
//
//int dfs(int cy,int cx, int d, int cost){
//    int nd = d;
//    bool flag = false;
//    int tmp = 0;
//    while(1){
//        tmp+=1;
//        if(tmp==5)
//            break;
//        nd = (nd+1)%4;
//        int ny = cy+dy[nd];
//        int nx = cx+dx[nd];
//        if(ny<0||ny>=n ||nx<0 ||nx>=m)
//            continue;
//        if(v[ny][nx]==1)
//            continue;
//        if(visited[ny][nx])
//            continue;
//        if(v[ny][nx]==0){
//            flag = true;
//            break;
//        }
//    }
//    if(flag){
//        int ny = cy+dy[nd];
//        int nx = cx+dx[nd];
//        visited[ny][nx]=true;
//        return dfs(ny,nx,nd,cost+1);
//    }
//    else{
//        cy-=dy[d];cx-=dx[d];
//        if(cy<0||cy>=n ||cx<0 ||cx>=m)
//            return cost;
//        if(v[cy][cx]==1)
//            return cost;
//        return dfs(cy,cx,d,cost);
//    }
//}
//int main(){
//    #ifndef ONLINE_JUDGE
//    freopen("./input.txt", "r", stdin);
//    #endif
//
//    cin>>n>>m;
//    cin>>r>>c>>d;
//    // d=0:N, 1:E, 2:S, 3:W
//    if(d==1){
//        d=3;
//    }
//    else if(d==3){
//        d=1;
//    }
//    v.resize(n);
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            int p1;
//            cin>>p1;
//            v[i].push_back(p1);
//        }
//    }
//    visited[r][c]=true;
//    int ans = dfs(r,c,d,1);
//    cout<<ans<<endl;
//}