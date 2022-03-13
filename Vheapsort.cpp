#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int i){
  int la=i;
  int l=2*i+1;
  int r=2*i+2;
  if(l<n && a[l]>a[la]){
    la=l;
  }
  if(r<n && a[r]>a[la]){
    la=r;
  }
   if(la!=i){
    swap(a[i],a[la]);
    heapify(a,n,la);
  }
}
void heapsort(int a[],int n){
  for(int i=n/2;i>=0;i--){
    heapify(a,n,i);
  }
  for(int i=n-1;i>=0;i--){
    swap(a[0],a[i]);
    heapify(a,i,0);
  }
}
