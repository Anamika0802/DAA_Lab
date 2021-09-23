#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &array, int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
    auto *la = new int[subArrayOne],
         *ra = new int[subArrayTwo];

    for (auto i = 0; i < subArrayOne; i++)
        la[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        ra[j] = array[mid + 1 + j];
  
    auto p = 0,q = 0;
    int k = left; 
    while (p < subArrayOne && q < subArrayTwo) {
        if (la[p] <= ra[q]) {
            array[k] = la[p];
            p++;
        }
        else {
            array[k] = ra[q];
            q++;
        }
        k++;
    }

    while (p < subArrayOne) {
        array[k] = la[p];
        p++;
        k++;
    }
    while (q < subArrayTwo) {
        array[k] = ra[q];
        q++;
        k++;
    }
}
void merge_sort(vector<int>&a, int start, int end){
    if(start<end){
        int mid = (start+end)/2;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp3.txt", "r", stdin);
    freopen("out3.txt", "w", stdout);
    //

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        merge_sort(arr,0,n-1);
        int bro = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i] == arr[i+1]){
                bro = 1;
                break;
            }
        }
        if(bro) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}