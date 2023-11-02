#include <bits/stdc++.h>
using namespace std;

void InputArr(long long arr[], int size);
void OutputArr(long long arr[], int size);

int main(){
	int n1, n2;
	cin >> n1;
	long long a[n1];
	InputArr(a, n1);
	cin >> n2;
	long long b[n2];
	InputArr(b, n2);


	int n3 = (n1 > n2) ? n1: n2;
	long long c[n3];
	for (int i = 0; i < n3; i++){
		if (i < n3/2+1){
			c[i] = a[i];
		}else{
			c[i] = b[i];
		}
	}
	OutputArr(c, n3);

	return 0;
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