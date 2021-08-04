#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&a,int key,int i){
	int l=0,h=a.size()-1;
	while (l<=h)
	{
		int mid = (l+h)/2;
		if(a[mid]== key && mid!=i)
		    return 1;
	else if(a[mid]<key)l= mid+1;
	else h = mid-1;
    }
    return 0;
}
int findPairs(vector<int>&a,int n,int k){
    sort(a.begin(),a.end());
    int count=0;
    for (int i = 0; i < n; i++)
    {
        count+=binarySearch(a,a[i]+k,i);;
    }
    return count;
}
int main(){
    //
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp3.txt", "r", stdin);
    freopen("out3.txt", "w", stdout);
    //
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>k;
        cout<<findPairs(a,n,k)<<endl;
    }
    
}
