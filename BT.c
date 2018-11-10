#include"BT.h"
#include <stdio.h>

BinTree BT_Create()
{
    NODE_STRUC a[MAX+1];
    int i=0;
    for(i=0;i<MAX+1;i++)
    {
        a[i].index=i+1;
        a[i].value=0;
    }
    return a;
}

int BT_IsEmpty(BinTree bt)
{
    /*it's not empty*/
    if(bt->value)
    {
        return FALSE;
    }
    /*it's empty*/
    else
    {
        return TRUE;
    }

}

BinTree BT_Parent(BinTree bt)
{
    /*check if if is null*/
    if(BT_IsEmpty(bt))
    {
        return BT_ERROR;
    }
    else
    {
        bt=bt-(bt->index/2);
        return bt;
    }
}

BinTree BT_Lchild(BinTree bt)
{
    /*check if if is null*/
    if(BT_IsEmpty(bt))
    {
        return BT_ERROR;
    }
    else
    {
        bt=bt+(bt->index);
        return bt;
    }
}

BinTree BT_Rchild(BinTree bt)
{
    /*check if if is null*/
    if(BT_IsEmpty(bt))
    {
        return BT_ERROR;
    }
    else
    {
        bt=bt+(bt->index)+1;
        return bt;
    }
}

int BT_data(BinTree bt)
{
    return bt->value;
}

int BT_change(BinTree bt,int item)
{
    if(BT_IsEmpty(bt))
    {
        return FALSE;
    }
    bt->value=item;
    return TRUE;
}







