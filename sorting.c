#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubleSort(int ar[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(ar[j]>ar[j+1])
                swap(&ar[j],&ar[j+1]);
}
void insertionSort(int ar[],int n){
    int i,j,current;
    for(i=0;i<n;i++){
        current=ar[i];
        j=i-1;
        while(j>=0&&ar[j]>current){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=current;
    }
}
void selectionSort(int ar[],int n){
    int i,j,minIndex;
    for(i=0;i<n-1;i++){
        minIndex=i;
        for(j=i+1;j<n;j++)
            if(ar[j]<ar[minIndex])
                minIndex=j;
        swap(&ar[minIndex],&ar[i]);
    }

}
void arrayPrint(int ar[],int n){
    int i;
    for(i=0;i<n;i++)    
        printf("%d ",ar[i]);
    printf("\n");
}
void main(){
    int array1[]={10,5,8,1,55,4,36,33};
    int array2[]={20,5,45,1,2,55,6,78,12};
    int array3[]={8,4,1,2,6,11,55,5,66};
    printf("Sorted Array 1 is ");
    bubleSort(array1,sizeof(array1)/sizeof(int));
    arrayPrint(array1,sizeof(array1)/sizeof(int));
    printf("Sorted Array 2 is ");
    insertionSort(array2,sizeof(array2)/sizeof(int));
    arrayPrint(array2,sizeof(array2)/sizeof(int));
    printf("Sorted Array 3 is ");
    selectionSort(array3,sizeof(array3)/sizeof(int));
    arrayPrint(array3,sizeof(array3)/sizeof(int));
}