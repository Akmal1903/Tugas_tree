#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
    int x[9] = {5,3,9,10,4,7,1,8,6};
    for(int i = 0; i < 9; i++){
        cout << x[i] << " ";
    }
    cout << endl << endl;
    Tree tree = NULL;
    adrNode P;

    for(int j = 0; j < 9; j++){
        P = newNode_1301213207(x[j]);
        insertNode_1301213207(tree, P);
    }

    cout<<  "Pre order\t\t: ";
    printPreOrder_1301213207(tree);
    cout<< endl << endl;

    cout<< "Descendent of node 9 \t: ";
    printDescendant_1301213207(tree, 9);
    cout << endl << endl;

    cout<< "sum of BST info\t\t: "<< sumNode_1301213207(tree)<< endl;
    cout<< "Number of Leaves\t: " << countLeaves_1301213207(tree) <<endl;
    cout<< "Height of Tree\t\t: " << heightTree_1301213207(tree) - 1 << endl;
    return 0;
}
