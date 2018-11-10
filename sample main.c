#include<stdio.h>
#include "BT.h"

BinTree BT_insert(BinTree root,int x)
{
    BinTree temp;
    int i=1;
    temp=root;
    /*check if the node is null or not ,if not then determine should go right or left*/
    while(!BT_IsEmpty(temp))
    {
        if(temp->value>x)/*left*/
        {
            i=2*(temp->index);
        }
        else/*right*/
        {
            i=2*(temp->index)+1;
        }
        /*the index of a[0] is one not zero so have to deal with it*/
        temp=&root[i-1];
    }

    temp->value=x;
}
BinTree BT_preorder(BinTree bt)
{
    if(BT_data(bt))
    {
        printf("%d ",BT_data(bt));
        BT_preorder(BT_Lchild(bt));
        BT_preorder(BT_Rchild(bt));
    }

}
BinTree BT_inorder(BinTree bt)
{
    if(BT_data(bt))
    {
        BT_inorder(BT_Lchild(bt));
        printf("%d ",BT_data(bt));
        BT_inorder(BT_Rchild(bt));
    }

}

BinTree BT_postorder(BinTree bt)
{
    if(BT_data(bt))
    {
        BT_postorder(BT_Lchild(bt));
        BT_postorder(BT_Rchild(bt));
        printf("%d ",BT_data(bt));
    }

}


int main()
{
    int i, item;
    int val, val_parent, val_Lchild, val_Rchild;
    BinTree a;

    a = BT_Create(); // create a new empty BT rooted at "a"

    printf("Please input some positive integer to insert into the BT.\n");
    // separated by a blank, and enter 0 when the input is complete. ex:1 2 3 4 0

    for(i=0; i<1024; i++)
    {
        scanf("%d", &item);
        if(item==0)
            break;
        BT_insert(a, item);
    }
    if (!BT_IsEmpty(a))
    {
        printf("\nThe result of preorder traversal of the BT is :\n");
        BT_preorder(a);
        printf("\nThe result of inorder traversal of the BT is :\n");
        BT_inorder(a);
        printf("\nThe result of postorder traversal of the BT is :\n");
        BT_postorder(a);
    }

    return 0;
}

