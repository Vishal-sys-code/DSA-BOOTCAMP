#include <bits/stdc++.h>
using namespace std;

int average(int n){
	int sum = 0;
	for(int i=1;i<n-1;i++){
		sum+=i;
	}
	return (sum/n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; 
	cout<<"Enter the numbers:" <<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:" <<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	cout << "Average: " << (sum/n) << endl;
	return 0;
}
