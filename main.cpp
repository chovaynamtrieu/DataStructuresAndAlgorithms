#include <QCoreApplication>
#include "binary_search_tree.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    BinarySearchTree bst;

    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(2);
    bst.insert(4);
    bst.insert(6);
    bst.insert(8);

    bst.inOrderTraversal();

    return a.exec();
}
