#define TRUE 1
#define FALSE 0
#define BT_ERROR -1
#define MAX 1025
typedef struct NODE *BinTree;
typedef struct NODE
{
    int value;
    int index;

}NODE_STRUC;

BinTree BT_Create();
int BT_IsEmpty(BinTree bt);
BinTree BT_Parent(BinTree bt);
BinTree BT_Lchild(BinTree bt);
BinTree BT_Rchild(BinTree bt);
int BT_data(BinTree bt);
int BT_change(BinTree bt,int item);
