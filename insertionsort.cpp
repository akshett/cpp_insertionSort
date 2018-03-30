#include<iostream>
using namespace std;

template<typename T>
void insertionSort(T *arr, int n)
{
	int size = n;
	for (int j = 1; j < size; ++j){
		for (int k =j; k>=0;--k){
			if (arr[k] < arr[k -1]){
				arr[k] += arr[k-1];
				arr[k-1] = arr[k] - arr[k-1];
				arr[k] = arr[k] - arr[k-1];
			}
			else
				break;
		}
	}
}

int main(){
	int size;
	cout << "Enter array size: " << '\n';
	cin >> size;
	int arr[size];
	for (int i = 0; i<size;++i){
		cin >> arr[i];
	}

	insertionSort(arr, size);

	cout << "Sorted array: " << '\n';
	for (int i = 0;i<size;++i){
		cout <<arr[i] << "    ";
	}

	cout << '\n';
	return 0;
}
