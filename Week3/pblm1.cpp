#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int>&a, int n){
    int comp =0,shifts =0;
    for (int i = 0; i < n; i++)
    {
        for(int j=i-1;j>=0;j--){
            comp++;
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                shifts++;
            }
            else
                break;
        }
    }
    for (int i = 0; i < n; i++)
            cout<<a[i]<<" ";
    cout<<endl;
    cout<<"comaprisions "<<comp<<endl;
    cout<<"shifts "<<shifts<<endl;
}
int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp1.txt", "r", stdin);
    freopen("out1.txt", "w", stdout);
    //
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
          cin>>a[i];
        insertion_sort(a,n);
    }
}