////
//// Created by changhyeonnam on 2022/05/19.
////
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define endl '\n';
//
//int dmin[3][3];
//int dmax[3][3];
//int arr[3];
//int n;
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//
//    cin>>n;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<3;j++){
//            cin>>arr[j];
//            if(i==0){
//                for(int k=0;k<3;k++){
//                    dmin[k][j]=arr[j];
//                    dmax[k][j]=arr[j];
//                }
//            }
//            else{
//                if(j==0){
//                    dmax[j][j]=max(dmax[j][j],dmax[j][j+1])+arr[j];
//                    dmin[j][j]=min(dmin[j][j],dmin[j][j+1])+arr[j];
//                }
//                else if(j==1){
//                    dmax[j][j]=max({dmax[j][j],dmax[j][j+1],dmax[j][j-1]})+arr[j];
//                    dmin[j][j]=min({dmin[j][j],dmin[j][j+1],dmin[j][j-1]})+arr[j];
//                }
//                else{
//                    dmax[j][j]=max(dmax[j][j],dmax[j][j-1])+arr[j];
//                    dmin[j][j]=min(dmin[j][j],dmin[j][j-1])+arr[j];
//                    for(int k=0;k<3;k++){
//                        for(int l=0;l<3;l++){
//                            dmin[k][l]=dmin[l][l];
//                            dmax[k][l]=dmax[l][l];
//                        }
//                    }
//                }
//            }
//        }
//    }
//    int ans_max = max({dmax[0][0],dmax[1][1],dmax[2][2]});
//    int ans_min = min({dmin[0][0],dmin[1][1],dmin[2][2]});
//
//
//    cout<<ans_max<<' '<<ans_min;
//
//}