

// int main() {
//     int arr[] = {12, 45, 2, 67, 34, 89};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int min = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     printf("Minimum element in array: %d\n", min);
//     return 0;
// }
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}