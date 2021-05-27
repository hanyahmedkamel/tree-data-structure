//
//  main.cpp
//  trees
//
//  Created by HanyAhmed on 9/26/20.
//  Copyright © 2020 HanyAhmed. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class node{
public:
    int value;
    node * left;
    node * right;
    node(int value){
        this->value=value;
        left=NULL;
        right=NULL;
    }
};
class tree{
    node Root=NULL;
public:
    void insert(int value){
        node *currentnode=&Root;
        if(currentnode->value==NULL){
            currentnode->value=value;
            cout<<Root.value<<endl;
        }else{
            node *newnode=new node(value);
            while(true){
                if (currentnode->value>newnode->value) {
                    if (currentnode->left==NULL) {
                        currentnode->left=newnode;
                        return;
                    }
                    currentnode=currentnode->left;
                }else if (currentnode->value<newnode->value) {
                    if (currentnode->right==NULL) {
                        currentnode->right=newnode;
                        return;
                    }
                    currentnode=currentnode->right;
                }
            }
        }
    }
    bool lookup(int value){
        node *currentnode=&Root;
        if (currentnode==NULL) {
            return false;
        }
        node *newnode=new node(value);
         while(currentnode!=NULL){
             if (currentnode->value>newnode->value) {
                 if (currentnode->value==value) {
                     return true;
                 }
                 currentnode=currentnode->left;
             }else if (currentnode->value<=newnode->value) {
                 if (currentnode->value==value) {
                     return true;
                 }
                 currentnode=currentnode->right;
             }
         }
        return false;
    }
};
int main() {
    tree x;
    x.insert(10);
    x.insert(5);
    x.insert(23);
    x.insert(7);
    x.insert(25);
    x.insert(4);
    x.insert(20);
    cout<<x.lookup(4);
    
    
    
    
}
