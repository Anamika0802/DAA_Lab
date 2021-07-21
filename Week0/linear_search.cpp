#include<iostream>
using namespace std;
void linear_search(int* a,int n,int k){
  for(int i=0;i<n;i++){
    if(a[i]==k){
      cout<<"Present"<<endl<<"Comparision no. "<<i+1<<endl;
      return ;
      }
  }
  cout<<"Not Present"<<endl;
  return;
}
int main(){
  int t;
  cout<<"Enter the number of test cases: ";
  cin>>t;
  while(t--){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)cin>>a[i];
    int k;
    cout<<"Enter the element to be searched: ";
    cin>>k;
    linear_search(a,n,k);
  }
}
