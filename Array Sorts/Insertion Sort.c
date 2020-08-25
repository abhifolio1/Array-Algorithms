/******************************************************************************

Insertion Sort 

Example array : [12, 11, 13, 5, 6]
1st pass : (12, 11, 13, 5, 6) --> (11, 12, 13, 5, 6)
2nd pass : (11, 12, 13, 5, 6) --> (11, 12, 13, 5, 6)
3rd pass : (11, 12, 13, 5, 6) --> (5, 11, 12, 13, 6)
4th pass : (5, 11, 12, 13, 6) --> (5, 6, 11, 12, 13) Fully Sorted Array.

Time Complexity : O(n^2)

*******************************************************************************/
// C program for insertion sort 
#include <math.h> 
#include <stdio.h> 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

/* Driver program to test insertion sort */
int main() 
{ 
	int n=0,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	    
	}
	insertionSort(arr,n);
	printf("The Sorted array is :\n");
	printArray(arr,n);
} 

