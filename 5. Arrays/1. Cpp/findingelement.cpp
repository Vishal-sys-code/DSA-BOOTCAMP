#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	int arr[n];
	int element;
	cout<<"Enter the element to be found: "<<endl;
	cin>>element;
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<"Processing......"<<endl;
	for(int i=0;i<n;i++){
		if(arr[i] == element){
			cout<<"Found"<<endl;
		}
		else{
			cout<<"Not Found"<<endl;
		}
	}
	return 0;
}
