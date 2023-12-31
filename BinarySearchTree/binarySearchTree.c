#include "binarySearchTree.h"


enum STATUS_CODE
{
    ON_SUCCESS,
    NULL_PTR,
    MALLOC_ERROR,
    INVALID_ACCESS,
};
/*二叉搜索树的初始化*/
int binarySearchTreeInit(BinarySearchTree **pBstree)
{
    int ret = 0;
    BinarySearchTree * bstree = (BinarySearchTree *)malloc(sizeof(BinarySearchTree) * 1);
    if(bstree == NULL)
    {
        return  MALLOC_ERROR;
    }
    /*清除脏数据*/
    memset(bstree, 0, sizeof(BinarySearchTree) * 1);
    /*初始化树*/
    {
    bstree->root = 0;
    bstree->size = 0;
    }


    /*分配根结点*/
    bstree->root = (BSTreeNode *)malloc(sizeof(BSTreeNode) * 1);
    if =(bstree->root == NULL)
    {
        return MALLOC_ERROR;
    }
    memset(bstree->root, 0, sizeof(BSTreeNode) * 1);
    /*初始化根结点*/
    {
        bstree->root->data = 0;
        bstree->root->left = NULL;
        bstree->root->right = NULL;
        bstree->root->parent = NULL;
    }
    *pBstree = bstree;
    return ret;
}


static int compareFunc(ELEMENTTYPE val,  ELEMENTTYPE val2)
{
#if 0
    if(val1 < val2)
    {
        return -1;
    }
    else if(val1 > val2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
#endif
    return val1 - val2;
}

/*二叉搜索树的插入*/
int binarySearchTreeInsert(BinarySearchTree *pBstree, ELEMENTTYPE val)
{
    int ret = 0;
    /*空树*/
    if(pBstree->size == 0)
    {
        /*更新树的结点*/
        (pBstree->size)++;
        pBstree->root->data = val;
        return ret;
    }

    /*travelNode 指向根结点*/
    BSTreeNode * parentNode = pBstree->root;
    BSTreeNode * travelNode = pBstree->root;

    /*确定符号：到底放在左边还是右边*/
    int cmp = 0;
    
    while(travelNode != NULL)
    {
        /*标记父节点*/
        parentNode = travelNode;
        cmp = compareFunc(val, travelNode->data);
        /*插入元素 < 遍历到结点*/
        if(cmp < 0)
        {
            travelNode = travelNode->left;
        }
        else if(cmp > 0) /*插入元素 > 遍历到结点*/
        {
            travelNode = travelNode->right;
        }
        else
        {
            /*插入元素 = 遍历到结点*/
            return ret;
        }
    }
    
    /*分配根结点*/
    BSTreeNode * newBstNode = malloc(sizeof(BSTreeNode) * 1);
    if(newBstNode == NULL)
    {
        return MALLOC_ERROR
    }
    memset(newBstNode, 0, sizeof(BSTreeNode) * 1);
    {
        newBstNode->root->data = 0;
        newBstNode->root->left = NULL;
        newBstNode->root->right = NULL;
        newBstNode->root->parent = NULL;
    }
    /*新结点赋值*/
    newBstNode->data = val;
    /*挂在左子树*/
    if(cmp < 0)
    {
        parentNode->left = newBstNode;
    }
    else
    {
        /*挂在右子树*/
        parentNode->right = newBstNode;
    }
    /*新结点的parent指针赋值*/
    newBstNode->parent = newBstNode;

    /*更新树的结点*/
    (pBstree->size)++;
    return ret;
}
