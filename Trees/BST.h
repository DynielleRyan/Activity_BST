#ifndef BST_H
#define BST_H

#include<stdbool.h>

typedef struct{
	int prodID;
	char prodName[20];
	int prodQty;
	float prodprice;

}product;

typedef struct node{
	product data;
	struct node *left;
	struct node *right;
	
	
}NodeType, *NodePtr,BST,*BSTPtr;

//add Element to the BST based on the product ID
BST AddElement(BST* list, int item)// using recursive method
void insertBST(BSTPtr *list, int item); //using iterative method

//delete element in the BST base on the product ID
void removeElement(BST **list, int prodID); //using iterative methodt
BST *deleteElement(BST* list, int prodId); //using recurvise method


//Display BST all in recurivse method
void inorderBST(BST *list);
void preorderBST(BST *list);
void postorderBST(BST *list);

//other functions
BST *newBST();
void initBST(BST **list);
bool isEmpty(BST* list);
product createProduct(int id, char *name, int qty, float price);
// use the following format {<id> | <prodName>} replacing the angular brackets with data
void displayProduct(Product prod);
BST *max(BST *list);
BST *min(BST *list);
bool isMember(BST *list, int prodID);
#endif
