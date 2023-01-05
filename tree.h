#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>
using namespace std;

#define left(P) (P)->left
#define right(P) (P)->right
#define info(P) (P)->info

typedef int infotype;

typedef struct node *adrNode;

struct node{
    infotype info;
    adrNode left;
    adrNode right;
};
typedef adrNode Tree;

adrNode newNode_1301213207(infotype x);
adrNode findNode_1301213207(adrNode root, infotype x);
void insertNode_1301213207(adrNode &root, adrNode p);
void printPreOrder_1301213207(adrNode root);
void printDescendant_1301213207(adrNode root, infotype x);
int sumNode_1301213207(adrNode root);
int countLeaves_1301213207(adrNode root);
int heightTree_1301213207(adrNode root);




#endif // TREE_H_INCLUDED
