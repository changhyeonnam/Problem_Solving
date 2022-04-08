////
//// Created by changhyeonnam on 2022/04/08.
////
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//int n,m;
//int dx[4]={1,-1,0,0};
//int dy[4]={0,0,1,-1};
//bool check[1000][1000];
//int arr[1000][1000];
//
//void dfs(int y, int x){
//    check[y][x]=true;
//    for(int i=0;i<4;i++){
//       int ny = y+dy[i];
//       int nx = x+dx[i];
//       if(ny<0 || nx<0 || ny>=m || nx>=n)
//           continue;
//       if(arr[ny][nx]!=0)
//           continue;
//       if(!check[ny][nx])
//            dfs(ny,nx);
//    }
//}
//
//int main(){
//    cin>>m>>n;
//    for(int i=0;i<m;i++){
//        string str;
//        cin>>str;
//        for(int j=0;j<str.size();j++){
//            arr[i][j]=str[j]-'0';
//        }
//    }
//    memset(check,false,sizeof(check));
//    for(int i=0;i<n;i++){
//        if(!check[0][i] && arr[0][i]==0)
//            dfs(0,i);
//    }
//    bool answer = false;
//    for(int i=0;i<n;i++){
//        if(check[m-1][i])
//        {
//            answer=true;
//            break;
//        }
//    }
//    if(answer)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
//}