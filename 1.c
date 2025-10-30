// #include<stdio.h>
// int main(){
//     int n=5;
//     if(n&1){
//         printf("odd");
//     }else{
//         printf("even");
//     }

    
//     return 0;

// // }
// #include<stdio.h>
// int main(){
//     int a,b;
//     a=5;
//     b=3;

//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("%d",a^b);
//     return 0;

// }
#include<stdio.h>
int main(){
    int arr[4]={1,2,4,5};
    int xor=0;
    int xor1=0;
    for(int i=1;i<=5;i++){
        xor=xor^i;
    }
    for(int i=0;i<4;i++){
        xor1=xor1^arr[i];
    }
    printf("%d",xor^xor1);
    return 0;

}


