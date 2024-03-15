#include <stdio.h>
int max(int,int);
int maxele(int [],int);
int main()
{
int n,i;
printf("Enter the number of elements in 1d array:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int max=maxele(arr,n);
printf("The maximum element from the array is = %d\n",max);
return 0;
}
int max(int a, int b)
{
return a>b?a:b;
}
int maxele(int arr[], int n)
{
if (n==1)
{
return arr[0];
}
return max(arr[n-1], maxele(arr, n-1));
}
