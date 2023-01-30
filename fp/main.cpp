// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>

using namespace std;
int binarysearch (int arr[],int L ,int H,int K ){
if (H>=L){
    int mid =L+(H-L)/2 ;
    if (arr[mid]== K) return mid;
    if (arr[mid]>K) return binarysearch (arr,L ,mid-1,K );
    return binarysearch (arr,mid+1,H, K );
}return -1;
}


int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarysearch(arr, 0, n - 1, x);
	 (result == -1)
		?cout << "Element is not present in array":cout << "Element is present at index " << result;
	return 0;
}
