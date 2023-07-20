#include <stdio.h>

void delt(int n,int arr[], int key){
    for(int i=key;i<n-1;i++){
            arr[i]=arr[i+1];
        }
}
int main()
{
    int arr[10]={1,2,3,4,5,5,6,7,8,9};
    int n=10;
    int target=5;
    int cnt=0;
    int i=0;
    while(i<n){
        if(arr[i]==target){
            delt(n,arr,i);
            cnt++;
            i--;
        }
        i++;
    }
    for(int i=0;i<n-cnt;i++){
        printf("%d ", arr[i]);
    }
}
