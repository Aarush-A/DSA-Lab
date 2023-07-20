#include <stdio.h>
void delt(int n, int arr[],int key){
    int indx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            indx=i;    
        }
    }
    if(indx!=-1){
        for(int i=indx;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        for(int i=0;i<n-1;i++){
            printf("%d ", arr[i]);
        }
        return;
    }
    printf("The element doesnt exist");
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    delt(n, arr, 4);
    return 0;
}
