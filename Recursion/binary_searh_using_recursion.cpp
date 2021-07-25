#include<iostream>
using namespace std;
int binary_search(int arr[],int s,int e,int key){
	if(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key)
			return mid;
		if(arr[mid]>key){
			return binary_search(arr,s,mid-1,key);
		}
		
			return binary_search(arr,mid+1,e,key);
	}
	return -1;
}
int main(){
	int arr[]={1,5,8,9,11,13,18};
	int n=sizeof(arr)/sizeof(int);
	int key=5;
	int result=binary_search(arr,0,n-1,key);
	   (result == -1) ? cout << "Element is not present in array" :cout << "Element is present at index " << result;
    return 0;

}
