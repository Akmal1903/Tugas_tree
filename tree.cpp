#include "tree.h"

adrNode newNode_1301213207(infotype x){
    adrNode P = new node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;
    return P;
}
adrNode findNode_1301213207(adrNode root, infotype x){
    if(root == NULL){
        return NULL;
    }else{
        if(x < info(root)){
            return findNode_1301213207(left(root), x);
        }else if(x > info(root)){
            return findNode_1301213207(right(root), x);
        }else{
            return root;
        }
    }
}
void insertNode_1301213207(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else{
        if(info(p) < info(root)){
            insertNode_1301213207(left(root), p);
        }else if(info(p) > info(root)){
            insertNode_1301213207(right(root), p);
        }else{
            cout<< "Angka tersedia" << endl;
        }
    }
}
void printPreOrder_1301213207(adrNode root){
    if(root != NULL){
        if(root != NULL){
        cout << info(root) << " ";
        }
        printPreOrder_1301213207(left(root));
        printPreOrder_1301213207(right(root));
    }
}
void printDescendant_1301213207(adrNode root, infotype x){
    adrNode q = findNode_1301213207(root, x);
    if(q != NULL){
        adrNode z = left(q);
        adrNode x = right(q);
        printPreOrder_1301213207(z);
        printPreOrder_1301213207(x);
    }else{
        cout<< "node tidak tersedia" << endl;
    }
}
int sumNode_1301213207(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        return info(root) + sumNode_1301213207(left(root)) + sumNode_1301213207(right(root));
    }
}
int countLeaves_1301213207(adrNode root){
    if(root == NULL){
        return 0;
    }
    if(left(root) == NULL && right(root) == NULL){
        return 1;
    }else{
        return countLeaves_1301213207(left(root)) + countLeaves_1301213207(right(root));
    }
}
int heightTree_1301213207(adrNode root){
    if(root == NULL){
        return 0;
    }else{
        int ldepth = heightTree_1301213207(left(root));
        int rdepth = heightTree_1301213207(right(root));
        return max(ldepth, rdepth) + 1;
    }
}
