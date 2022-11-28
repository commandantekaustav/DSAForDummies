/* A program to demonstrate how standard operations are
performed over a single(read, "one directional") linked list.
          @commandanteK
          
The set of operations that have been demonstrated here are the following;
        1) How to create a node using Dynamic Memory Allocation in C
        2) How to add a node to an existing linked-list from front/rear
           or at a given index.
        3) How to delete a node and de-allocate the preoccupied space.
        4) How to add a node from an existing linked-list from front/rear
           or any given index.
           
Assignment:
           1) Implement all the functions
           
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
        int data;
        struct node* next;  
}node;

node *head=NULL, *newnode, *temp;

void listinitialise(int data){
     if(head==NULL){
                 head = (node*)malloc(sizeof *head);
                 newnode = (node*)malloc(sizeof *newnode);
                 head=newnode;
                 newnode->data = data;
                 newnode->next = NULL;
     }
}

void listwipe(){
           head=NULL;
}

void insert_front(int data){
     if(head==NULL) listinitialise(data);
     newnode = (node*)malloc(sizeof *newnode);
     newnode->next=head;
     head=newnode;                 
     newnode->data=data;
}

void display(){
          node* traverser = head;
          
          if (traverser==NULL) printf("\n\n \"\\_O_/\" \n\n");
          
          while(traverser!=NULL) {
                                printf("\n [%d] ---->Data[%d]Next[%d]",
                                                (int)traverser,
                                                traverser->data,(int)traverser->next);
                                traverser = traverser->next;
                                }
          }     

int main(){

    display(); // "\__O__/"
    listinitialise(108);
    display();
    listwipe();
    display();//"\__O__/"
    insert_front(108);
    display();

    getchar();
    return 0;   
}
