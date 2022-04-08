//#include<iostream>
//using namespace std;
//
//typedef struct Node
//{
//    int data;
//    Node * left;
//    Node * right;
//    Node(int val)
//    {
//        data = val;
//        left =nullptr;
//        right= nullptr;
//    }
//} Node;
//
//void PostOrder(Node* node){
//    if(node==nullptr)
//        return;
//    PostOrder(node->left);
//    PostOrder(node->right);
//    cout<<node->data<<" ";
//}
//void PreOrder(Node* node){
//    if(node==nullptr)
//        return;
//    cout<<node->data<<" ";
//    PreOrder(node->left);
//    PreOrder(node->right);
//}
//void InOrder(Node* node){
//    if(node==nullptr)
//        return;
//    InOrder(node->left);
//    cout << node->data<<" ";
//    InOrder(node->right);
//}
//int main()
//{
//    Node * root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//
//    cout << "\nPreorder traversal of binary tree is \n";
//    PreOrder(root);
//
//    cout << "\nInorder traversal of binary tree is \n";
//    InOrder(root);
//
//    cout << "\nPostorder traversal of binary tree is \n";
//    PostOrder(root);
//    return 0;
//
//}
