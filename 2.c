#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,6};
    int xor=0;
    int xor1=0;
    for(int i=1;i<=5;i++){
        xor=xor^1;
    }
    for(int i=0;i<6;i++){
        xor1=xor1^arr[i];  
    }
    printf("%d",xor^xor1);
    return 0;

    
}
