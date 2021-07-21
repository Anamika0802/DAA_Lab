#include<iostream>
#include<vector>
using namespace std;
void binary_search(vector<int>& a,int n,int k){
  int low =0,high = n-1,c=1;
  while(low<=high){
    int mid = (low+high)/2;
    if(a[mid]==k){
      cout<<"Present "<<c<<endl;
      return;
    }
    else if(a[mid]>k)
      high = mid-1;
    else
      low = mid+1;
    c++;
  }
  cout<<"Not Present"<<endl;
  return;
}
int main(){
   //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    //
  int t;
  cout<<"Enter the number of test cases: ";
  cin>>t;
  while(t--){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>a;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
      int el;
      cin>>el;
      a.push_back(el);
      };
    int k;
    cout<<"Enter the element to be searched: ";
    cin>>k;
    binary_search(a,n,k);
  }
}
