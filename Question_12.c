#include <stdio.h>
#include <limits.h>

int largest( int arr[], int size)
{
    int max = INT_MIN;
    for (int i=0; i<size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {5,10,15,20,25};
    int size = 5;

    int maximum = largest(arr,size);
    printf("The largest element in the array is %d",maximum);
    return 0;
}