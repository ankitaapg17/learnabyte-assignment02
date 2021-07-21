//WAP to do binary search in sorted and rotated array(unsorted array)
#include <stdio.h>
#include <conio.h>

int main()

{
	int a[30],n,i,j,t,temp,low,mid,high,found=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	//Sort the array in ascending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nEnter the element to search:");
	scanf("%d",&t);
	low=0;
	high=n-1;
	while(high>=low)
	{
		mid=(low+high)/2;
		if(a[mid]==t)
		{
			found=1;
			break;
		}
		else if(t<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	
	
	
	if(found==0)
	{
		printf("not found");
	}
	    
	else
	{
		printf("\nFound at %d",mid);
	
	}
	    
}
	
	
	












