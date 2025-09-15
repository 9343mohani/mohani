// #include<stdio.h>
// void main()
// {
//     int n;
//     printf(" Enter number:");
//     scanf("%d",&n);
//     if(n%9==1)
//     printf("magic number");
//     else
//     printf("not magic number");
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("Enter the nuber of rows:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n-i;j++)
//         printf("");
//         for(j=1;j<=2*i-i;j++)
//         printf("*");
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=5;i>0;i--)
//     {
//         for(j=0;j<i;j++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int  main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    printf("number is even");
      else
    printf("Number is odd");
     return 0;
    
}


