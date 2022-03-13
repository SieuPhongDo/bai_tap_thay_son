
#include<bits/stdc++.h>
using namespace std;
int P(int arr[],int b,int e){
    int pivot=arr[start];
    int c=0;
    for(int i=b+1;i<=e;i++){
        if(arr[i]<=pivot)
            c++;
    }
    int pivotInd=b+c;
    swap(arr[pivotInd],arr[b]);

    int i=b,j=e;
    while(i<pivotInd && j>pivotInd){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotInd && j>pivotInd){
            swap(arr[i++],arr[i--]);
        }
    }
    return pivotInd;
}
void quicksort(int arr[],int start,int end){
    if(b>=e)
        return;

    int p=P(arr,b,e);
    quicksort(arr,b,p-1);
    quicksort(arr,p+1,e);
}
