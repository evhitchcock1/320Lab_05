#include <iostream>
#include <ctime>
#include <utility>
#include "int.h"
#include "d_stree.h"
#include "d_random.h"
using namespace std;

int main(){

    int n = 0;
    stree<integer> intTree;
    for(int i = 0; i < 20; i++){
        n = (rand() % 6) + 1;
        integer intObj(n);
        if (intTree.find(intObj) == intTree.end()){
            cout <<" inserting " << n << "  in the tree" << endl;
            intTree.insert(intObj);
        }
        if (intTree.find(intObj) != intTree.end()){
            cout << intObj.getInt() << " is already in the tree" << endl;
            intObj.incCount();

        }
        
    }
    cout << "size " << intTree.size() << endl;
    intTree.writeSTree(intTree);
    cout << endl;
    cout << "Displaying Tree " << endl;
    intTree.displayTree(intTree.size());





    return 0;
}
