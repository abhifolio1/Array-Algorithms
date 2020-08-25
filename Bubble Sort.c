/******************************************************************************

Bubble sort

Example array : [5,1,4,2,8] 

1st pass: (5 1 4 2 8) --> (1 5 4 2 8)
2nd pass: (1 5 4 2 8) --> (1 4 5 2 8)
3rd pass: (1 4 5 2 8) --> (1 4 2 5 8)
4th pass: (1 4 2 5 8) --> (1 2 4 5 8) FUllY SORTED.

*******************************************************************************/
// C program for implementation of Bubble sort 
#include <stdio.h> 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)	 

	// Last i elements are already in place 
	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

// Driver program to test above functions 
int main() 
{ 
	int n=0,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	    
	}
	bubbleSort(arr,n);
	printf("The Sorted array is :\n");
	printArray(arr,n);
} 

