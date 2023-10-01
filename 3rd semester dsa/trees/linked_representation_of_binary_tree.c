#include<stdio.h>
#include<malloc.h>

struct binary{
    int value;
    struct binary * left;
    struct binary * right;
};

// creating the node
struct binary * create(int data){
    struct binary * n;
    n = (struct binary*)malloc(sizeof(struct binary));
    n -> value = data;
    n -> left = NULL;
    n -> right= NULL;
    return n;
}

// preorder traversal 
void preorder(struct binary * root){
    if(root == NULL){
        return;
    }
    printf("%d ", root -> value);
    preorder(root -> left);
    preorder(root -> right);
}

// post order traversal
void postorder(struct binary * root){
    if(root == NULL){
        return;
    }
    postorder(root -> left);
    postorder(root -> right);
    printf("%d ", root -> value);
}

// in order traversal 
void inorder(struct binary * root){
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    printf("%d ", root -> value);
    inorder(root -> right);
}

// find max depth of the tree
int maxdepth(struct binary* root){
    if(root == NULL){
        return 0;
    }
    else{
        int left = maxdepth(root -> left);
        int right = maxdepth(root -> right);
        if(left > right){
            return left + 1;
        }
        else{
            return right + 1;
        }
    }
}

int main(){
    // struct binary* root;
    // root = (struct binary*)malloc(sizeof(struct binary));
    // root -> value = 14;
    // root -> left = NULL;
    // root -> right = NULL;

    struct binary * root = create(14);
    struct binary * r1 = create(2);
    struct binary * r2 = create(4);
    struct binary * r11 = create(5);
    struct binary * r12 = create(8);

    // linking nodes
    root -> left = r1;
    root -> right = r2;
    printf("height of the tree : %d\n", maxdepth(root));
    r1 -> left = r11;
    r1 -> right = r12;
    r12 -> left = create(9);

    preorder(root);printf("\n");
    postorder(root);printf("\n");
    inorder(root);

    printf("height of the tree : %d", maxdepth(root));
}