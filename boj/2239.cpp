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
//typedef pair<int, int> pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//int arr[9][9];
//bool col[9][10];
//bool row[9][10];
//bool cell[9][10];
//
//
//bool check_num(int x, int y, int num){
//    if(!row[x][num] && !col[y][num] && !cell[(x / 3) * 3 + (y / 3)][num])
//        return true;
//    else
//        return false;
//}
//
//bool solve(int cnt){
//    int cx = cnt/9;
//    int cy = cnt%9;
//    if(cnt==81)
//        return true;
//    if(arr[cx][cy]==0){
//        for(int i=1;i<=9;i++){
//            if(check_num(cx,cy,i)){
//              row[cx][i]=true;
//              col[cy][i]=true;
//              cell[(cx/3)*3+(cy/3)][i]=true;
//              arr[cx][cy]=i;
//              if(solve(cnt+1))
//                  return true;
//              else{
//                  arr[cx][cy]=0;
//                  row[cx][i]=false;
//                  col[cy][i]=false;
//                  cell[(cx/3)*3+(cy/3)][i]=false;
//              }
//            }
//        }
//    }
//    else {
//        return solve(cnt + 1);
//    }
//    return false;
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    for(int i=0;i<9;i++){
//        string str;
//        cin>>str;
//        for(int j=0;j<9;j++){
//            arr[i][j]=str[j]-'0';
//            if(arr[i][j]!=0){
//                row[i][arr[i][j]]=true;
//                col[j][arr[i][j]]=true;
//                cell[(i/3)*3+(j/3)][arr[i][j]]=true;
//            }
//        }
//    }
//    solve(0);
//    for(int i=0;i<9;i++){
//        for(int j=0;j<9;j++){
//            cout<<arr[i][j];
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}
//
