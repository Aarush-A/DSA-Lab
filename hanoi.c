#include<stdio.h>

void hanoi(int n,char s,char a, char e){
    if(n==1){
      printf("Move disk 1 from %c to %c \n",s,e);
      return;  
    } 
    hanoi(n-1,s,e,a);
    printf("Move disk %d from %c to %c \n",n,a,e);
    hanoi(n-1,a,s,e);
}

int main(){
    hanoi(3,'A','C','B');
    return 0;
}
