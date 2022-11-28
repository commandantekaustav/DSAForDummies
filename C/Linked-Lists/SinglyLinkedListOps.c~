/* A program to demonstrate how standard operations are
performed over a single(read, "one directional") linked list.
          @commandantekaustav.github.io
          
The set of operations that have been demonstrated here are the following;
        1) How to create a node using Dynamic Memory Allocation in C
        2) How to add a node to an existing linked-list from front/rear
           or at a given index.
        3) How to delete a node and de-allocate the preoccupied space.
        4) How to add a node from an existing linked-list from front/rear
           or any given index.
*/

/* ASSIGNMENT:
  1) Reduce the temporary pointer used in del_any();
  2) Implement a different initialisation function which can only be used in a
  blank list.
  3) Modify this code to create a stack.
  4) Modify this code to create a queue.
  5) Handle or the print statements through the display() function.
  6) Remove all the global variables.
*/


#include<stdio.h>
#include<stdlib.h>

typedef struct list {
    int data;
    struct list * next;
}
node;

node * start = NULL, * newnode, * ptr;

void ins_beg() {
    newnode = (node * ) malloc(sizeof(node * ));
    printf("\nEnter Data:\t ");
    scanf("%d", & newnode -> data);
    if (start == NULL) {
        start = newnode;
        newnode -> next = NULL;
    } else {
        newnode -> next = start;
        start = newnode;
    }
}
void ins_end() {
    newnode = (node * ) malloc(sizeof(node * ));
    if (start == NULL) {
        ins_beg();
    } else {
        ptr = start;
        while (ptr -> next != NULL) {
            ptr = ptr -> next;
        }
        ptr -> next = newnode;
        newnode -> next = NULL;
        printf("\nEnter Data:\t");
        scanf("%d", & newnode -> data);
    }
 }
void ins_any() {
    node *leftptr;
    ptr = start;
    newnode = (node * ) malloc(sizeof(node * ));
    int i, n;
    printf("\nEnter a position:\t");
    scanf("%d", & n);
    if (n == 1) {
        ins_beg();
    } else {
        for (i = 2; i <= n; i++) {
            leftptr = ptr;
            ptr = ptr -> next;
            if (ptr -> next == NULL && i != n) {
                printf("\nCan't Insert at the given position\n");
            }
            if (ptr == NULL && i == n) {
                ins_end();
            }
        }
        leftptr -> next = newnode;
        newnode -> next = ptr;
        printf("\nEnter the data:\t");
        scanf("%d", & newnode -> data);
    }
}

void display() {
    ptr = start;
    if (start == NULL)
        printf("\nLIST IS EMPTY!\n");
    else {
        printf("\n\n DATA LINK\n\n");
        printf(" START [%p]\n", ptr);
        while (ptr != NULL) {
            printf("%6d [%4p]\n", ptr -> data, ptr -> next);
            ptr = ptr -> next;
        }
    }
}

void del_beg() {
    if (start == NULL) {
        printf("\nLIST IS EMPTY!\n");
    } else {
        ptr = start;
        start = start -> next;
        printf("\n%d[%p] DELETED\n", ptr -> data, ptr);
        free(ptr);
    }
}

void del_end() {
    node * ptr1;
    ptr = start;
    ptr1 = ptr;
    if (start == NULL) {
        printf("\nLIST IS EMPTY!\n");
    } else {
        while (ptr -> next != NULL) {
            ptr1 = ptr;
            ptr = ptr -> next;
        }
        printf("\n%d[%p] DELETED!\n", ptr -> data, ptr);
        ptr1 -> next = NULL;
        free(ptr);
    }
    if (ptr == start) {
        start = NULL;
    }
}


void del_any() {
    int i = 1, pos;
    node * ptr1;
    ptr = start;
    printf("position: ");
    scanf("%d", & pos);
    if (start == NULL) {
        printf("LIST IS EMPTY!!");
    } else {
        while (ptr -> next != NULL && i < pos) {
            ptr1 = ptr;
            ptr = ptr -> next;
            i++;
        }
        printf("\n%d[%p] DELETED!\n", ptr -> data, ptr);
        ptr1 -> next = ptr -> next;
    }
}

int main() {
    int ch;
    do {
        printf("\n1.I-B\t2.I-E\t3.I-ANY\t\t\t\t\t4.DISP\n5.DEL-B\t6.DEL-E\t7.DEL-ANY\t\t9.CLRSCR\t0.EXIT\n");
        scanf("%d", & ch);
        switch (ch) {
        case 1:
            ins_beg();
            break;
        case 2:
            ins_end();
            break;
        case 3:
            ins_any();
            break;
        case 4:
            display();
            break;
        case 5:
            del_beg();
            break;
        case 6:
            del_end();
            break;
        case 7:
            del_any();
            break;
        case 9:
            system("clear");
            break;
        case 0:
            break;
        }
    }
    while (ch != 0);
    return 0;
}
