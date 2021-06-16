#include<iostream>
using namespace std;
int main()
{
	
    int m,n,i,j,a[1000][1000];
	cin>>m>>n;
    
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

    for(int j=0;j<n;j++)
    {
        if((j%2)==0)
        {   for(int i=0;i<m;i++)
                cout<<a[i][j]<<", ";
        }
        else
        {
            for(int i=m-1;i>=0;i--)
                cout<<a[i][j]<<", ";
        }
    }
    cout<<"END";
	return 0;

}
