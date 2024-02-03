#include"Node.h"
#include<iostream>

using namespace std;

        Node::Node(){
            this->data = 0;

            this->left = NULL;
            this->right = NULL;
        }

        Node::Node(int val){
            this->data = val;

            this->left = NULL;
            this->right = NULL;
        }