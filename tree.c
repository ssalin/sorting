#include <stdio.h>
#include <stdlib.h>

struct node{
	int val;
	int height;
	node * left;
	node * right;
};


void addnode(node * root, node * toadd)
{
	if(!root)
		root = toadd;

	if(root -> val > toadd -> val)
		addnode(root->right,toadd);
	if (root -> val < toadd -> val)
		addnode(root->left, toadd);
}

struct node * minvalnode(struct node * node)
{
	struct node * current = node;
	
	while(current->left)
		current = current -> left;

	return current;
}
struct node * deletenode(node * root, int rmval)
{
	if(!root)
		return root;

	else if(root->val > rmval){
		root->right = deletenode(root->right, rmval);
	}
	
	else if(root->val < rmval){
		root->left = deletenode(root->left, rmval)
	}
	
	else if(root->val == rmval){ //found the node to kill!
		if(!root->left){
			struct node * tmp = root->right;
			free (root);
			return tmp;
		}
		else if(!root->right){
			node * tmp = root->left;
			free(root);
			return tmp;
		}
		else{ //two children
			struct node * tmp = minvalnode(root->right)
			root->key=temp->key;
			root->right = deletenode(root->right,tmp->key);
		}
	
	}
		return root;	
}

struct node rotate_L(node * root)
{
	return 0;
}

struct node rotate_R(node * root)
{
	return 0;
}
