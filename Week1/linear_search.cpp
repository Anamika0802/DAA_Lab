#include<iostream>
#include<vector>
using namespace std;
void linear_search(vector<int> a,int n,int k){
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
   //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    //
  int t;
  //cout<<"Enter the number of test cases: ";
  cin>>t;
  while(t--){
    int n;
    //cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>a;
    //cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
      int el;
      cin>>el;
      a.push_back(el);
      };
    int k;
    //cout<<"Enter the element to be searched: ";
    cin>>k;
    linear_search(a,n,k);
  }
}
