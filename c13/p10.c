#include <stdio.h>
#define MAX 10
typedef struct {
    int data[MAX];
    int left;
    int right;
} Deque;
void initDeque(Deque *deque) {
    deque->left=-1;
    deque->right=-1;
}
int isFull(Deque *deque) {
    return ((deque->left==0 && deque->right==MAX-1) || (deque->left==deque->right+1));
}
int isEmpty(Deque *deque) {
    return (deque->left==-1);
}
void addToRight(Deque *deque, int num) {
    if(isFull(deque)) {
        printf("Deque overflow\n");
        return;
    }
    if(deque->right==MAX-1 || deque->right==-1)
        deque->right=0;
    else
        deque->right++;
    deque->data[deque->right]=num;
    if(deque->left==-1)
        deque->left=0;
}
void addToLeft(Deque *deque, int num) {
    if(isFull(deque)) {
        printf("Deque overflow\n");
        return;
    }
    if(deque->left==-1)
        deque->left=MAX-1;
    else if(deque->left==0)
        deque->left=MAX-1;
    else
        deque->left--;
    deque->data[deque->left]=num;
    if(deque->right==-1)
        deque->right=0;
}
int removeFromLeft(Deque *deque) {
    if (isEmpty(deque)) {
        printf("Deque underflow\n");
        return -1;
    }
    int num=deque->data[deque->left];
    if(deque->left==deque->right) {
        deque->left=-1;
        deque->right=-1;
    }
    else {
        if(deque->left == MAX-1)
            deque->left=0;
        else
            deque->left++;
    }
    return num;
}
int removeFromRight(Deque *deque) {
    if(isEmpty(deque)) {
        printf("Deque underflow\n");
        return -1;
    }
    int num=deque->data[deque->right];
    if(deque->left==deque->right) {
        deque->left=-1;
        deque->right=-1;
    }
    else {
        if(deque->right==0)
            deque->right=MAX-1;
        else
            deque->right--;
    }
    return num;
}
void display(Deque *deque) {
    if(isEmpty(deque)) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque:: ");
    int i=deque->left;
    while(1) {
        printf("%d ", deque->data[i]);
        if(i==deque->right)
            break;
        if(i==MAX-1)
            i=0;
        else
            i++;
    }
    printf("\n");
}
int main() {
    Deque deque;
    initDeque(&deque);
    addToRight(&deque, 1);
    addToRight(&deque, 2);
    addToRight(&deque, 3);
    display(&deque);
    addToLeft(&deque, 5);
    addToLeft(&deque, 10);
    display(&deque);
    removeFromLeft(&deque);
    display(&deque);
    removeFromRight(&deque);
    display(&deque);
    return 0;
}