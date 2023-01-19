////
//// Created by changhyeonnam on 2022/10/11.
////
//
//#include<vector>
//#include<queue>
//#include<iostream>
//#include<tuple>
//using namespace std;
//int dy[4]={-1,0,1,0};
//int dx[4]={0,1,0,-1};
//int dx2[2]={0,0};
//int dy2[2]={1,-1};
//int dx1[2]={1,-1};
//int dy1[2]={0,0};
//
//int n,m,h,k;
//int ans = 0;
//int dp[20000];
//vector<tuple<int,int,int>>v1;
//vector<tuple<int,int,int>>v2;
//vector<pair<int,int>>tree;
//int cy=0,cx=0;
//int total = 0;
//void follower(int turn,vector<pair<int,int>>tree){
//    if(!v1.empty()){
//        for(auto&[y,x,d]:v1){
//            int dist = abs(cy-y)+abs(cx-x);
//            if(dist>3)
//                continue;
//            else{
//                int ny = y+dy1[d];
//                int nx = x+dx1[d];
//                if(ny<=0||ny>n||nx<=0||nx>n){
//                    d= (d+1)%2;
//                    ny = y+dy1[d];
//                    nx = x+dx1[d];
//                    if(ny==cy && nx==cx)
//                        continue;
//                    else{
//                        y = ny;
//                        x = nx;
//                        d = d;
//                        continue;
//                    }
//                }
//                else if(ny==cy && nx==cx)
//                    continue;
//                else{
//                    y= ny;
//                    x= nx;
//                }
//            }
//        }
//    }
//    if(!v2.empty()){
//        for(auto&[y,x,d]:v2){
//            int dist = abs(cy-y)+abs(cx-x);
//            if(dist>3)
//                continue;
//            else{
//                int ny = y+dy2[d];
//                int nx = x+dx2[d];
//                if(ny<=0||ny>n||nx<=0||nx>n){
//                    d= (d+1)%2;
//                    ny = y+dy2[d];
//                    nx = x+dx2[d];
//                    if(ny==cy && nx==cx)
//                        continue;
//                    else{
//                        y = ny;
//                        x = nx;
//                        d = d;
//                        continue;
//                    }
//                }
//                else if(ny==cy && nx==cx)
//                    continue;
//                else{
//                    y= ny;
//                    x= nx;
//                }
//            }
//        }
//    }
//}
//void catcher(int turn,vector<pair<int,int>>tree) {
//    int catched= 0 ;
//    if(((turn-1)/(total))%2==0){
//        int tmp_turn =(turn-1)%(total)+1;
//        int direction = dp[tmp_turn];
//        int direc_y = dy[direction];
//        int direc_x = dx[direction];
//        cy += direc_y;
//        cx += direc_x;
//        int ny = cy;
//        int nx = cx;
//        if(tmp_turn==total){
//            direc_y = -direc_y;
//            direc_x = -direc_x;
//        }
//        else if(dp[tmp_turn]!=dp[tmp_turn+1]){
//            direction=dp[tmp_turn+1];
//            direc_y = dy[direction];
//            direc_x = dx[direction];
//        }
//        for(int i=0;i<3;i++) {
//            if(i!=0) {
//                ny += direc_y;
//                nx += direc_x;
//            }
//            vector<tuple<int,int,int>>new_v1;
//            vector<tuple<int,int,int>>new_v2;
//            while(!v1.empty()){
//                auto [y,x,d]=v1.back();
//                v1.pop_back();
//                if(y==ny && x==nx){
//                    bool flag = false;
//                    for(auto[ty,tx]:tree){
//                        if(ty==y && tx==x)
//                        {
//                            flag=true;
//                            break;
//                        }
//                    }
//                    if(flag)
//                        new_v1.push_back({y,x,d});
//                    else
//                        catched+=1;
//                }
//                else
//                    new_v1.push_back({y,x,d});
//            }
//            while(!v2.empty()){
//                auto [y,x,d]=v2.back();
//                v2.pop_back();
//                if(y==ny && x==nx){
//                    bool flag = false;
//                    for(auto[ty,tx]:tree){
//                        if(ty==y && tx==x)
//                        {
//                            flag=true;
//                            break;
//                        }
//                    }
//                    if(flag)
//                        new_v2.push_back({y,x,d});
//                    else
//                        catched+=1;
//                }
//                else
//                    new_v2.push_back({y,x,d});
//            }
//            v1= new_v1;
//            v2= new_v2;
//        }
//        ans += catched*turn;
//    }
//    else{
//        int tmp_turn = total-((turn-1)%(total));
//        int direction = dp[tmp_turn];
//        int direc_y = -dy[direction];
//        int direc_x = -dx[direction];
//        cy = cy + direc_y;
//        cx = cx + direc_x;
//        int ny = cy;
//        int nx = cx;
//        if(tmp_turn==1){
//            direc_y = -direc_y;
//            direc_x = -direc_x;
//        }
//        else if(dp[tmp_turn]!=dp[tmp_turn-1]){
//            direction=dp[tmp_turn-1];
//            direc_y = -dy[direction];
//            direc_x = -dx[direction];
//        }
//
//        for(int i=0;i<3;i++) {
//            if(i!=0) {
//                ny += direc_y;
//                nx += direc_x;
//            }
//            vector<tuple<int,int,int>>new_v1;
//            vector<tuple<int,int,int>>new_v2;
//            while(!v1.empty()){
//                auto [y,x,d]=v1.back();
//                v1.pop_back();
//                if(y==ny && x==nx){
//                    bool flag = false;
//                    for(auto[ty,tx]:tree){
//                        if(ty==y && tx==x)
//                        {
//                            flag=true;
//                            break;
//                        }
//                    }
//                    if(flag)
//                        new_v1.push_back({y,x,d});
//                    else
//                        catched+=1;
//                }
//                else
//                    new_v1.push_back({y,x,d});
//            }
//            while(!v2.empty()){
//                auto [y,x,d]=v2.back();
//                v2.pop_back();
//                if(y==ny && x==nx){
//                    bool flag = false;
//                    for(auto[ty,tx]:tree){
//                        if(ty==y && tx==x)
//                        {
//                            flag=true;
//                            break;
//                        }
//                    }
//                    if(flag)
//                        new_v2.push_back({y,x,d});
//                    else
//                        catched+=1;
//                }
//                else
//                    new_v2.push_back({y,x,d});
//            }
//            v1= new_v1;
//            v2= new_v2;
//        }
//        ans += catched*turn;
//    }
//
//}
//int main(){
////#ifndef ONLINE_JUDGE
////    freopen("./input.txt", "r", stdin);
////#endif
//    cin>>n>>m>>h>>k;
//    int tmp =0;
//    int cnt = 0;
//    total = n*n-1;
//    for(int i=1;i<=total;i++){
//        tmp%=4;
//        cnt+=1;
//        for(int j=i;j<i+cnt;j++){
//            dp[j]=tmp;
//        }
//        tmp+=1;
//        tmp%=4;
//        for(int j=i+cnt;j<i+2*cnt;j++){
//            dp[j]=tmp;
//        }
//        tmp+=1;
//        i+=cnt*2-1;
//    }
//
//
//    for(int i=0;i<m;i++){
//        int x,y,d;
//        cin>>x>>y>>d;
//        if(d==1){
//            v1.push_back({x,y,0});
//        }
//        else{
//            v2.push_back({x,y,0});
//        }
//    }
//    for(int i=0;i<h;i++){
//        int x,y;
//        cin>>x>>y;
//        tree.push_back({x,y});
//    }
//    cy = (n+1)/2;
//    cx = (n+1)/2;
//
//    for(int i=1;i<=k;i++){
//        follower(i,tree);
//        catcher(i,tree);
//        if(v1.empty() && v2.empty())
//            break;
//    }
//    cout<<ans;
//    return 0;
//}