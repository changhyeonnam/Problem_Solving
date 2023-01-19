//#include <iostream>
//#include <string>
//using namespace std;
//
//int t;
//string s;
//int length;
//
//
//
//int main() {
//    cin >> t;
//    while (t--) {
//        bool flipped = 0;
//        int flag = 0;
//
//        int arr[100005];
//        cin >> s;
//        cin >> length;
//        flipped = 0;
//        flag = 0;
//
//        int* pointer1=NULL;
//        int* pointer2=NULL;
//
//        char temp;
//        cin >> temp;
//        if (length != 0) {
//            for (int i = 0; i < length; i++) {
//                cin >> arr[i];
//                cin >> temp;
//            }
//            pointer1 = &arr[0];
//            pointer2 = &arr[length - 1];
//        }
//        else {
//            cin >> temp;
//            flag = 2;
//        }
//
//        for (int i = 0; i < s.size(); i++) {
//            if (s[i] == 'R') {
//                if (flag == 2) {
//                    break;
//                }
//
//                int* temp = pointer1;
//                pointer1 = pointer2;
//                pointer2 = temp;
//                if (flipped) flipped = 0;
//                else flipped = 1;
//
//            }
//            else if (s[i] == 'D') {
//                if (flag == 2) {
//                    flag = 1;
//                    break;
//                }
//                if (flipped) {
//                    if (pointer1 < pointer2) {
//                        flag = 1;
//                        break;
//                    }
//                    else if (pointer1 == pointer2)
//                        flag = 2;
//                    else {
//                        pointer1--;
//                    }
//                }
//                else {
//                    if (pointer1 > pointer2) {
//                        flag = 1;
//                        break;
//                    }
//                    else if (pointer1==pointer2) {
//                        flag = 2;
//                    }
//                    else {
//                        pointer1++;
//                    }
//                }
//            }
//        }
//        if (flag == 2) {
//            cout << "[]" << "\n";
//        }
//        else if (flag == 1) {
//            cout << "error" << "\n";
//        }
//        else {
//            cout << "[";
//            while (pointer1 != pointer2) {
//                if (flipped) {
//                    cout << *pointer1;
//                    pointer1--;
//                }
//                else {
//                    cout << *pointer1;
//                    pointer1++;
//                }
//                cout << ",";
//            }
//            cout << *pointer2<<"]" << "\n";
//        }
//    }
//}