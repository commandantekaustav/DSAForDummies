/* 	Code: Standard Operations using an Array.
	@commandanteK

A basic program written using C to demonstrate different operations over an 
array which includes the following;
	1) Pushing elements from Front/Rear
	2) Popping elements from Front/Rear
	3) Putting element in a given position
	4) Popping out element from a given postion
	5) Resizing an Array.
	*/

#include<stdio.h>
#include<stdlib.h>
int SIZE=5;

void display(int*, int);
void insert_end(int*, int*, int);
void insert_front(int*, int*, int);
void delete_end(int*);
void delete_front(int*, int*);

int main(){

	int current_end=0;

	int *int_array = (int*)calloc(SIZE,sizeof(int));

		display(int_array, current_end);
	insert_end(int_array, &current_end, 9);
		display(int_array, current_end);
	insert_end(int_array, &current_end, 11);
		display(int_array, current_end);
	delete_end(&current_end);
		display(int_array, current_end);
	insert_end(int_array, &current_end, 26);
		display(int_array, current_end);
	insert_end(int_array, &current_end, 11);
		display(int_array, current_end);
	insert_front(int_array, &current_end, 69);
		display(int_array, current_end);
	delete_front(int_array, &current_end);
		display(int_array, current_end);

}

void insert_end(int *array, int *end, int data){
	if(*end==SIZE)	printf("'''''''''\nOVERFLOW\n'''''''''");
	else 		array[(*end)++] = data;
}

void insert_front(int *array, int *end, int data){
	int i;
	if(*end==SIZE)	printf("'''''''''\nOVERFLOW\n'''''''''");
	else 		{
			i = ++(*end);
			while(i>0)
				array[i--]=array[i];			
			array[0] = data;
			}
}

void delete_end(int *end){
	if(*end==0)	printf("'''''''''\nUNDERFLOW\n'''''''''");
	else 		(*end)--;
}

void delete_front(int *array, int *end){
	int i;
	if(*end==0)	printf("'''''''''\nUNDERFLOW\n'''''''''");
	else 		{
			i=0;
			while(i<*end-1)
				array[i++]=array[i];
			(*end)--;
			}
}


void display(int *array,int end){
	int i = 0;
	printf("\n------------------------------------------------------\n");

	if(end==0)		printf("'''''''''\nUNDERFLOW\n'''''''''");
	else if(end==SIZE)	printf("'''''''''\nOVERFLOW\n'''''''''");
	else			for(i=0; i<end; i++) 
					printf("\t|%d|\n", *(array+i));

	printf("\n------------------------------------------------------\n");

}

