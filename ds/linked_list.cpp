////
//// Created by changhyeonnam on 2022/04/07.
////
//
//#include<iostream>
//using namespace std;
//typedef struct Node{
//    int data;
//    Node* next;
//} Node;
//
//Node* list;
//
//// add new node to head
//void add(int key){
//    Node* new_node = (Node*)malloc(sizeof(Node));
//    new_node->data = key;
//    new_node->next = NULL;
//
//    if(list==nullptr){
//        list=new_node;
//    }
//    else{
//        // add new node to head
//        new_node->next = list;
//        list = new_node;
//    }
//}
//
//void ascending_order_add(int key){
//    Node* new_node = (Node*)malloc(sizeof(Node));
//    new_node->data = key;
//    new_node->next = NULL;
//    if(list== nullptr)
//        list=new_node;
//    else{
//        Node* cur = list;
//        Node* prev = NULL;
//
//        // if first element is larger than key
//        if(cur->data > new_node->data){
//            new_node->next = cur;
//            list = new_node;
//        }
//        else{
//            while(cur!=nullptr && cur->data < new_node->data){
//                prev=cur;
//                cur = cur->next;
//            }
//            // add in the middle
//            if(cur!=nullptr){
//                new_node -> next = cur;
//                prev->next = new_node;
//            }
//            // add in the end
//            else{
//                prev->next = new_node;
//            }
//        }
//    }
//}
//
//void add_unique(int key){
//    Node* new_node = (Node*)malloc(sizeof(Node));
//    new_node->data = key;
//    new_node->next = NULL;
//
//    if(list==nullptr){
//        list = new_node;
//    }
//    else{
//        Node*cur = list;
//
//        //duplication check
//        while(cur!=nullptr){
//            if(cur->data==key){
//                return;
//            }
//            cur=cur->next;
//        }
//        new_node -> next = list;
//        list = new_node;
//    }
//}
//
//bool Remove(int key){
//    if(list == nullptr){
//        return false;
//    }
//    if(list->data ==key){
//        Node* cur = list;
//        list = list->next;
//        free(cur);
//        return true;
//    }
//    else{
//        Node* cur = list->next;
//        Node* prev = list;
//        while(cur!=nullptr && cur->data!=key){
//            prev = cur;
//            cur = cur->next;
//        }
//        if(cur==nullptr)
//            return false;
//
//        prev -> next = cur->next;
//        free(cur);
//        return true;
//    }
//}
//
//void init(){
//    if(list == nullptr){
//        return ;
//    }
//    else{
//        Node* cur;
//        cur = list;
//        while(cur!=nullptr){
//            list = cur->next;
//            free(cur);
//            cur = list;
//        }
//    }
//}
//void traverse(){
//    Node* cur = list;
//    while(cur!=nullptr){
//        cout<<cur->data<<' ';
//        cur = cur->next;
//    }
//    cout<<endl;
//}
//
//int main(){
//    int arr[9] = { 2, 4, 6, 8, 1, 3, 5, 7, 9 };
//    int arr_duplicated[18] = { 8, 1, 3, 2, 4, 6, 8, 1, 3, 5, 7, 9, 2, 4, 6, 5, 7, 9 };
//    int arr_rmv[4] = { 2, 9, 8, 100 };
//    init();
//    for(auto i : arr){
//        add(i);
//    }
//    traverse();
//
//    init();
//    for(auto i : arr){
//        ascending_order_add(i);
//    }
//    traverse();
//
//    init();
//    for(auto i: arr_duplicated){
//        add_unique(i);
//    }
//    traverse();
//
//    for(auto i:arr_rmv){
//        Remove(i);
//    }
//    traverse();
//}
