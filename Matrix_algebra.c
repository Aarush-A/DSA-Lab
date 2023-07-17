//Addition, subtraction, division, and multiplication of matrices using a menu-driven program

#include <stdio.h>
void addition(int r, int c, int arr1[r][c], int arr2[r][c]) {
    int ans[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ans[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}

void subtraction(int r, int c, int arr1[r][c], int arr2[r][c]){
    int ans[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ans[i][j]=arr1[i][j]-arr2[i][j];
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int r, int c, int arr1[r][c], int arr2[r][c]) {
    int ans[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            ans[i][j]=0;
            for(int k=0;k<c;k++){
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}

void division(int r, int c, int arr1[r][c], int arr2[r][c]) {
    int ans[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            ans[i][j]=0;
            for(int k=0;k<c;k++){
                ans[i][j]+=arr1[i][k]/arr2[k][j];
            }
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r,c;
    printf("Choose size of matrices (R C):");
    scanf("%d%d",&r,&c);
    int choice;
    
    int arr1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter Element [%d][%d] for matrix 1:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter Element [%d][%d] for matrix 2:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    
    printf("Enter Your Choice: (1-4) \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            addition( r, c,arr1, arr2);
            break;
        case 2:
            subtraction(r, c,arr1, arr2);
            break;
        case 3:
            multiplication(r, c,arr1, arr2);
            break;
        case 4:
            division(r, c,arr1, arr2);
            break;
        default:
            printf("Wrong Choice");
            break;
    }
}
