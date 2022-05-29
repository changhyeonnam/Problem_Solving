////
//// Created by changhyeonnam on 2021/07/13.
////
//
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <vector>
//using namespace std;
//typedef long long ll;
//int n,k;
//int ans = 1e9;
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin>>n>>k;
//    vector<int>arr(n);
//    for(auto&i : arr)
//        cin>>i;
//    int sum = 0;
//    int ptr1=0,ptr2=0;
//    if(arr[0]==1)
//        sum+=1;
//    while(1){
//        if(sum==k) {
//            ans = min(ptr2 - ptr1 + 1, ans);
//        }
//        if(ptr1==n-1 && ptr2==n-1)
//            break;
//        if(ptr2==n-1){
//            if(arr[ptr1]==1)
//                sum-=1;
//            ptr1+=1;
//            continue;
//        }
//        if(ptr1==ptr2){
//            ptr2+=1;
//            if(arr[ptr2]==1)
//                sum+=1;
//            continue;
//
//        }
//        if(sum>=k)
//        {
//            if(arr[ptr1]==1)
//                sum-=1;
//            ptr1+=1;
//            continue;
//        }
//        if(sum<k){
//            ptr2+=1;
//            if(arr[ptr2]==1)
//                sum+=1;
//            continue;
//        }
//    }
//    if(ans==1e9)
//        cout<<-1;
//    else
//        cout<<ans<<'\n';
//    return 0;
//}