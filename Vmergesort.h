#ifndef MERGESORT
#define MERGESORT
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int const left,int const  mid,int const right){
  auto const  subArray1=mid-left+1;
  auto const subArray2=right-mid;

  auto*leftArray=new int[subArray1];
  auto*rightArray=new int[subArray2];
  for(int i=0;i<subArray1;i++){
    leftArray[i]=arr[left+i];
  }
  for(int i=0;i<subArray2;i++){
    rightArray[i]=arr[mid+1+i];
  }

  int indA1=0;
  int indA2=0;
  int indMerge=left;
  while(indA1<subArray1 && indA2<subArray2){
    if(leftArray[indA1]<=rightArray[indA2]){
      arr[indMerge]=leftArray[indA1];
      indA1++;
    }
    else{
      arr[indMerge]=rightArray[indA2];
      indA2++;
    }
    indMerge++;
  }
  while(indA1<subArray1){
    arr[indMerge]=leftArray[indA1];
    indA1++;
    indMerge++;
  }
  while(indA1<subArray1){
    arr[indMerge]=rightArray[indA2];
    indA2++;
    indMerge++;
  }
}
void MergeSort(int array[],int const begin,int const end){
  if(begin>=end)
    return;
  auto mid=begin+(end-begin)/2;
  MergeSort(array,begin,mid);
  MergeSort(array,mid+1,end);
  merge(array,begin,mid,end);
}
#endif
