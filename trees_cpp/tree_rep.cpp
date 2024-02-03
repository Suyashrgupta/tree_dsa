#include<bits/stdc++.h>
#include"Node.cpp"

using namespace std;
/*
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(){
            this->data = 0;

            this->left = NULL;
            this->right = NULL;
        }

        Node(int val){
            this->data = val;

            this->left = NULL;
            this->right = NULL;
        }

};
*/

int main(){
    Node* head = new Node(3);
    head->left = new Node(1);
    head->right = new Node(2);
    cout<<head->data<<" "<<head->left->data<<" "<<head->right->data<<" "<<endl;
}

