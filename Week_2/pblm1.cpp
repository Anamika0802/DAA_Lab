#include<bits/stdc++.h>
using namespace std;
//find and count the occurance of key in a array
//Time Complexity = O(log(n)), Space Complexity = O(1)
int binarySearch(vector<int>&a,int key,int side){
	int l=0,h=a.size()-1;
	while (l<=h)
	{
		int mid = (l+h)/2;
		if(a[mid]== key){
			if(side==1)l = mid+1;
			else if(side==-1) h = mid-1;
			else return mid;
		}
		else if(a[mid]<key)l= mid+1;
		else h = mid-1;
	}
	if(side==-1)return h;
	else if(side==1) return l;
 return -1;
}
int main(){
	//
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("inp1.txt", "r", stdin);
    freopen("out1.txt", "w", stdout);
    //
	int t,n;
	cin>>t;
	while (t--)
	{
		int n,key;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		cin>>key;
		int l = binarySearch(a,key,-1);
		int r = binarySearch(a,key,1);
		cout<<key<<"- "<<r-l+1<<endl;
	}

}
