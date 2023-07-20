//Insertion, Deletion, Sorting \& Searching in an array using a menu-driven program.
#include <stdio.h>
void insertion(int n,int arr[n]){
    int val,ind;
    printf("Enter Value To Be Inserted:");
    scanf("%d",&val);
    printf("Enter Index To Be Inserted:");
    scanf("%d",&ind);
    int arr2[n+1];
    for(int i=0; i<ind;i++){
        arr2[i]=arr[i];
    }
    arr2[ind]=val;
    for(int i=ind;i<n;i++){
        arr2[i+1]=arr[i];
    }
    for(int i=0;i<n+1;i++){
        printf("%d ", arr2[i]);
    }
}

void delt(int n,int arr[n]){
    int ind;
    printf("Enter Index To Be Deleted:");
    scanf("%d",&ind);
    int arr2[n-1];
    for(int i=0; i<ind;i++){
        arr2[i]=arr[i];
    }
    for(int i=ind;i<n-1;i++){
        arr2[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ", arr2[i]);
    }
}

void bub(int n,int arr[n]){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

void bs(int n, int arr[n]){
    int s=0;
    int e=n-1;
    int target;
    printf("Enter Element To Be Searched:");
    scanf("%d",&target);
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==target){
            printf("It exists");
            return;
        }
        else if(arr[m]>target){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    printf("It doesn't exists");
}
int main() {
    int n;
    printf("Enter Size Of Array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter Element %d:", i);
        scanf("%d",&arr[i]);
    }
    int choice;
    printf("Enter Choice: \n 1. Insertion \n 2. Deletion \n 3. Sorting \n 4. Searching \n ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            insertion(n,arr);
            break;
        case 2:
            delt(n,arr);
            break;
        case 3:
            bub(n,arr);
            break;
        case 4:
            bs(n,arr);
            break;
        default:
            printf("Wrong digit");
            break;
    }
    return 0;
}
