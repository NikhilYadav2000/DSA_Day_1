// Selection Sort
#include <bits/stdc++.h>
using namespace std;
int selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                swap(arr[min], arr[j]);
        }
    }
}
int bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                didSwap = 1; // if it entered the loop means there was atleast one value that was greater then the value ahead of it
            }
            // but if it never entered the loop, this means that the array is already sorted so,
            if (didSwap == 0)
                break;
            cout << "Run" << endl;
            /*
            Run
            Run
            Run
            Run
            // If the array is unsorted, Run will be printed n-1 times (4 here as n = 5),
            
            // If it is already sorted then Run wont be printed
            */
        }
    }
}
int insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j =i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    } // It never enters the while loop in case of an already sorted array.
}
void merge(int arr[],int l,int m,int h){
    vector<int> vec;
    int left=l,right=m+1;
    while(left<=m && right<=h){
        if(arr[left]<=arr[right]){
            vec.push_back(arr[left]);
            left++;
        }
        else{
            vec.push_back(arr[right]);
            right++;
        }
    }
    while(left<=m){
        vec.push_back(arr[left]);
        left++;
    }
    while(right<=h){
        vec.push_back(arr[right]);
        right++;
    }
    for(int i=l;i<=h;i++){
        arr[i]=vec[i-l];
    }
}
void mergeSort(int arr[],int l,int h){
    if(l==h) return;
    int m=(l+h)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,h);
    merge(arr,l,m,h);
}

int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j){ // This loop is O(n), bcoz i is going from l to h and j is moving from h to l, and as they are moving simultaneously, its O(n)
        while(arr[i]<=pivot && i<=h-1){ // <= bcoz we want to put value equal to the pivot on the left, we can also do it on the right
            i++;
        }
        while(arr[j]>pivot && j>=l+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]); // bigger got on the right and smaller on the left and as this loop will go on...
    }
    swap(arr[l],arr[j]); // 4 will come in the middle
    return j; // returning index of 4 as we have to perform the recursion
}
void quickSort(int arr[],int l,int h){
    if(l<h){
        int pInd=partition(arr,l,h);
        quickSort(arr,l,pInd-1);
        quickSort(arr,pInd+1,h);
    }
}
int main()
{
    cout << endl << "selectionSort" << endl;
    int arr1[6] = {13, 46, 24, 52, 20, 9};
    selectionSort(arr1, 6);
    for (auto it : arr1)
        cout << it << " "; // 9 13 20 24 46 52

    cout << endl << "bubbleSort" << endl;
    // int arr2[5] = {9, 13, 20, 24, 52};
    int arr2[5] = {9, 13, 20, 24, 52};
    bubbleSort(arr2, 5);
    for (auto it : arr2) cout << it << " "; // 9 13 20 24 52

    cout << endl << "insertionSort" << endl;
    int arr3[7]={14,9,15,12,6,8,13};
    insertionSort(arr3,7);
    for (auto it : arr3) cout << it << " "; // 6 8 9 12 13 14 15

    cout << endl << "mergeSort" << endl;
    int arr4[9]={3,1,2,4,1,5,2,6,4};
    mergeSort(arr4,0,8);
    for (auto it : arr4) cout << it << " "; // 1 1 2 2 3 4 4 5 6
    
    cout << endl << "quickSort" << endl;
    int arr5[9]={4,6,2,5,7,9,1,3};
    quickSort(arr5,0,8);
    for (auto it : arr5) cout << it << " "; // 0 1 2 3 4 5 6 7 9 


    return 0;
}

