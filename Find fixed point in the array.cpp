/*
Aproach:

Linear search TC = O(N)
Binary search TC = O(log N)



*/

#include <bits/stdc++.h>
using namespace std;

//DOESN'T handles duplicates as i am just counting
int getFixedCount(int a[],int n)
{
	int count=0;
	
	int l=0;
	int r=n-1;
	int mid;
	//using binary search
	while(l<r)
	{
		mid=l+(r-l)/2;
		
		cout<<"\n l=> "<<l;
		cout<<"\n mid=> "<<mid;
		cout<<"\n r=> "<<r;
		
		if(a[mid]==mid)
		{
			count++;
		}
		else if(a[mid]>mid)  //go left
		{
			r=mid-1;
		}
		else if(a[mid]<mid) //go right
		{
			l=mid+1;
		}
	}
	
return count;
}

int main()
{
	//static inputs
	
	//ASSUMUNG ARRAY IS SORTED
	int arr[] = { 1,1,1,1,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\n\nCount of no. of fixed points is => "<< getFixedCount(arr, n);
	
	return 0;
}
