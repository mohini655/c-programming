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

// searching in a binary search tree
int search(struct binary* root, int key){
    if(root == NULL){
        return 0;
    }
    if(root -> value == key){
        return 1;
    }
    else if(root -> value > key){
        return search(root -> left, key);
    }
    else{
        return search(root -> right, key);
    }
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

void insert(struct binary * root, int data){
    struct binary* node = create(data);
    struct binary* prev = NULL;
    while(root != NULL){
        prev = root;
        if(root -> value == data){
            printf("can't insert bcoz of duplicate data\n");
            return;
        }
        else if(root -> value < data){
            root = root -> right;
        }
        else{
            root = root -> left;
        }
    }
    if(prev -> value > data){
        prev -> left = node;
    }
    else{
        prev -> right = node;
    }
}

struct binary* inpre(struct binary * root){
    root = root -> left;
    while(root -> right != NULL){
        root = root -> right;
    }
    return root;
}

struct binary * delete(struct binary * root , int val){
    struct binary * prev = NULL;
    if(root == NULL){
        return NULL;
    }
    if(root -> value > val){
        return delete(root-> left, val);
    }
    else if(root -> value < val){
        return delete(root-> right , val);
    }
    else{
        if(root -> left == NULL && root-> right == NULL){
            free(root);
        }

    }
    return root;
    
}

int main(){
    // struct binary* root;
    // root = (struct binary*)malloc(sizeof(struct binary));
    // root -> value = 14;
    // root -> left = NULL;
    // root -> right = NULL;

    struct binary * root = create(11);
    struct binary * r1 = create(5);
    struct binary * r2 = create(15);
    struct binary * r11 = create(7);
    struct binary * r12 = create(9);

        //          11
        //       /      \
        //      5       15
        //     / \     /  \
        //    2   9   12   16
        //     \  / \   \
        //      4 7  10  13
    // linking nodes
    root -> left = r1;
    root -> right = r2;
    r1 -> right = r12;
    r12 -> left = r11;

    preorder(root);printf("\n");
    postorder(root);printf("\n");
    inorder(root);printf("\n");

    insert(root, 2);
    insert(root, 4);
    insert(root, 10);
    insert(root, 12);
    insert(root, 13);
    insert(root, 16);
    inorder(root);printf("\n");

    int key = 15;
    if(search(root, key)){
        printf("key %d is present in the tree \n", key);
    }
    else{
        printf("key %d is not present in the tree \n", key);
    }

    delete(root,4);
    inorder(root);printf("\n");
    delete(root,16);
    inorder(root);printf("\n");
    delete(root,10);
    inorder(root);printf("\n");
    delete(root,13);
    inorder(root);printf("\n");
    delete(root,7);
    inorder(root);printf("\n");
}