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
	int max = arr[0];
	int min = arr[0];
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max = arr[i];
		}
		if(min>arr[i]){
			min = arr[i];
		}
	}
	cout<<"Maximum element: "<<max<<endl;
	cout<<"Minimum element: "<<min<<endl;
	return 0;
}
