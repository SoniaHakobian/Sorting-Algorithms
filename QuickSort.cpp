#include<iostream>

void quicksort(int arr[], int left, int right)
{
    int i = left;
    int j = right;
    int temp;
    int pivot = arr[(left+right)/2];
    while(i<=j)
    {
            while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<=j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if(j>left)
    {
        quicksort(arr,left,j);
    }
    if(i<right)
    {
        quicksort(arr, i, right);
    }   
}
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}


int main()
{
    int arr[] = {8,9,3,0,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Before sorting"<<std::endl;
    print(arr, n);
    quicksort(arr, 0, n-1);
    std::cout<<"after sorting"<<std::endl;
    print(arr, n);

    return 0;
}
