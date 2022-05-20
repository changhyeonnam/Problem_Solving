////
//// Created by changhyeonnam on 2022/05/20.
////
//
//#include<iostream>
//using namespace std;
//typedef long long ll;
//
//int main(){
//    int n;
//    int arr[100000];
////    freopen("input.txt", "r", stdin);
//    cin>>n;
//    ll sum = 0;
//    ll cnt_2=0;
//    for(int i=0;i<n;i++) {
//        cin >> arr[i];
//        sum+=arr[i];
//        cnt_2+=arr[i]/2;
//    }
//    bool check = true;
//    if(sum%3!=0)
//    {
//        check = false;
//    }
//    else{
//        if(sum/3>cnt_2)
//            check =false;
//    }
//    if(check)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
//
//}