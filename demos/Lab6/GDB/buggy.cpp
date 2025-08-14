#include <stdio.h>

int calculate_sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i <= size; i++)
        sum += arr[i];
    return sum;
}

int main()
{
    int my_array[5] = {10, 20, 30, 40, 50};
    int total_size = 5;

    printf("Calculating the sum...\n");
    int result = calculate_sum(my_array, total_size);
    printf("The sum is: %d\n", result);
    printf("It should be: %d\n", (10 + 20 + 30 + 40 + 50));

    return 0;
}