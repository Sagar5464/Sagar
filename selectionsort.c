#include <stdio.h>

void selectionSort(int arr[], int n) 
{
	int i,j;
    for (i = 0; i < n - 1; i++) 
	{
        int minIndex = i;

        // Find the index of the smallest element.
        for (j = i + 1; j < n; j++) 
		{
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }

        // Swap the smallest element with the first element of the unsorted region.
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) 
{
	int i;
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int i,n;
	printf("Enter the Size of the Array\n");
	scanf("%d",&n);
	int arr[n];
	
	//Read the Array Elements
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);


    selectionSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

