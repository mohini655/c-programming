#include<stdio.h>
#include<malloc.h>

struct binary{
    int height;
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
    n -> height = 1;
    return n;
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

// finding height of the tree
int get_height(struct binary * root){
    if(root == NULL){
        return 0;
    }
    return root -> height;
}


// insertion in AVL trees
struct binary * insert(struct binary * root, int data){
    if(root == NULL){
        return create(data);
    }
    if(root -> value < data){
        root -> right = insert(root -> right, data);
    }
    else if(root -> value > data){
        root -> left = insert(root -> left, data);
    }
    else{
        printf("can't insert\n");
        return root;
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

    inorder(root);printf("\n");

    insert(root, 2);
    insert(root, 4);
    insert(root, 10);
    insert(root, 12);
    insert(root, 13);
    insert(root, 16);
    insert(root, 1);
    printf("here - \n");
    inorder(root);printf("\n");


    
}