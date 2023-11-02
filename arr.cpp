#include <bits/stdc++.h>
using namespace std;

void InputArr(long long arr[], int size);
void OutputArr(long long arr[], int size);

int main(){
	int n;
	cin >> n;
	long long a[n];
	InputArr(a, n);
	cin >> n;
	long long b[n];
	InputArr(b, n);

	long long c[n];
	for (int i = 0; i < n; i++){
		if (i <= n/2){
			c[i] = a[i];
		}else{
			c[i] = b[i];
		}
	}
	OutputArr(c, n);

}

void InputArr(long long arr[], int size){
	for (int i = 0; i < size ; i++){
		cin >> arr[i];
	}
}

void OutputArr(long long arr[], int size){
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
}