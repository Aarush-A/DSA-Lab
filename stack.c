#include <stdio.h>
#define MAX 4
int top=-1, item[MAX];
void push(){
    int x;
    if (top==MAX-1) printf("\nOverflow!!");
    else{
        printf("\nEnter the element:");
        scanf("%d", &x);
        top++;
        item[top] = x;
    }
}

void pop(){
    if (top==-1) printf("\nUnderflow!!");
    else top--;
}

void print()
{
    for (int i = top; i >= 0; --i){
        printf("%d\n", item[i]);
    }
}
int main(){
    int choice;
    while (1){
        printf("Choose \n1.Push \n2.Pop \n3.Print\n");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        default:
            printf("\nInvalid choice!!");
        }
    }
}
