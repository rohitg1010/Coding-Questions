//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void insert(int a[], int n)
    {
        //code here
            int i, j, temp;  
            for (i = 1; i < n; i++) {  
                temp = a[i];  
                j = i - 1;  
          
                while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
                {    
                    a[j+1] = a[j];     
                    j = j-1;    
                }    
                a[j+1] = temp;    
            }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code 
        insert(arr,n);
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends