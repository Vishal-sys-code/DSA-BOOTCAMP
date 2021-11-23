#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cout<<"Enter the number of elements:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<"Reversed Array:"<<endl;
	for(int i=n-1;i>=0;i--) cout<<arr[i]<<" ";
	return 0;
}
