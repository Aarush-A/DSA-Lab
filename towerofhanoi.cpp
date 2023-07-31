#include<bits/stdc++.h>
using namespace std;
void hanoi(int n,char s, char a, char d){
    if(n==1) {cout<<"Move disk 1 from "<<s<<" to "<<d<<endl;
    return;}
    hanoi(n-1,s,d,a);
    cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    hanoi(n-1,a,s,d);
}

int main(){
    hanoi(3,'A','C','B');
    return 0;
}
