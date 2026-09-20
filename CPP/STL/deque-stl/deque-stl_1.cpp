#include <iostream>
#include <deque> 
#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    for (int i=0; i<n-k+1; i++) {
        int maxi = INT_MIN;
        for (int j=0; j<k; j++) {
            maxi = max(maxi, arr[i+j]);
        }
        cout<<maxi<<" ";
    }
    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
