#include<iostream>
#include<climits>
using namespace std;
int main() {
long long 	int n;
	cin>>n;
	long long int a[n];
	long long int largest=INT_MIN;
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		largest=max(largest,a[i]);
	}
	cout<<largest<<endl;
	return 0;
}
