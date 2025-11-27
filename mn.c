

int main() {
    int arr[] = {12, 45, 2, 67, 34, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum element in array: %d\n", min);
    return 0;
}