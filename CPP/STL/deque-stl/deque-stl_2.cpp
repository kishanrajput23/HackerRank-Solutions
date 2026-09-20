#include <iostream>
#include <deque> 
#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k) {
    deque<int> dq;

    for (int i = 0; i < n; i++) {

        // Remove elements outside current window
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove smaller elements
        while (!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();

        dq.push_back(i);

        // Window is complete
        if (i >= k - 1)
            cout << arr[dq.front()] << " ";
    }

    cout << endl;
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
