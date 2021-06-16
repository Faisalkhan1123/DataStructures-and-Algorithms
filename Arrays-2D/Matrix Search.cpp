#include<iostream>
using namespace std;
bool matrix_search(int a[105][105],int n, int m, int key){
	int i=0,j=m-1;
	
	while(i<n && j>=0){
		 if(a[i][j]==key){
                return true;
		}
		else if(a[i][j]>key){
			j--;
		}
		else{
			i++;
		}
	}
	return false;
	
}
int main() {
	int n,m;
	cin>>n>>m;
	int a[105][105];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
		int key;
		cin>>key;
		cout<<matrix_search(a,n,m,key)<<endl;
	
	return 0;
}
