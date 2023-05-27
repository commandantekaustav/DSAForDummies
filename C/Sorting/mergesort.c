#include<stdio.h>
#define MAX 100

void merge(int*, int,int,int);
void mergesort(int*,int,int);

int main(){
    int arr[] = {9,8,7,1,2,9,3};
    mergesort(arr,0,6);
    
    int i;
    for (i=0;i<7;i++) printf("\n%d",arr[i]);
    
getchar();
return 0;
}

void merge(int *arr,int l, int mid, int h){
    int arr3[200]; //
    int k=l,i=l,j=mid+1; 
    
    while(i<= mid && j<= h) (arr[i]<arr[j])? arr3[k++]=arr[i++]: arr3[k++]=arr[j++];
    while(i<= mid) arr3[k++]=arr[i++];
    while(j<= h) arr3[k++]=arr[j++];          
    
    for(i=l;i<=h;i++) arr[i]=arr3[i];
}

void mergesort(int *arr, int l, int h){
     
     if(l < h){ //l,l+1
          int mid = (l+h)/2;//l
          mergesort(arr,l,mid); // ----- [l,l]---------------------
          mergesort(arr,mid+1,h); // ----[l+1,l+1]---------------
          merge(arr,l,mid,h);  // [l,l,l+1]
          } 
     else return;
          
     }
