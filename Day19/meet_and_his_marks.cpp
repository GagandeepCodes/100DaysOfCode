#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int num;
	cin >> num;
	for(int k=0;k<num;k++){
		long long int m;
		long long int x;
		cin>>m>>x;
		long long int arr[m];
		for(int i=0;i<m;i++){
			cin>>arr[i];
		}
		for(int i=0;i<m-1;i++){
			long long int add = min(arr[i],(x-arr[m-1]));
			if((arr[m-1]+add)<=x && add!=0){
				arr[m-1] = arr[m-1]+add;
				arr[i] = arr[i] - add;
			}
			else
			{
				cout<<arr[m-1]<<endl;
				break;
			}
			if(i == m-2){
				cout<<arr[m-1]<<endl;
			}
		}
		// cout<<"next"<<endl;
	}
	return 0;	
}