#include <stdio.h>
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void bubleSort(int ar[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(ar[j]>ar[j+1])
                swap(&ar[j],&ar[j+1]);
}

void arrayPrint(int ar[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
void main(){
    int array1[]={10,5,8,1,55,4,36,33};
    printf("Sorted Array 1 is ");
    bubleSort(array1,sizeof(array1)/sizeof(int));
    arrayPrint(array1,sizeof(array1)/sizeof(int));
}