#include <stdio.h> 
int main() 
{ 
int n,i,pos,ins,temp,index; 
printf("Enter the number of elements in an array: \n"); 
scanf("%d",&n); 
int a[n]; 
int b[n+1]; 
printf("Enter %d numbers: \n",n); 
for(i=0;i<n;i++) 
{ 
scanf("%d",&a[i]); 
} 
printf("Enter the position where you want to insert the element: "); 
scanf("%d",&pos); 
printf("Enter the number you want to insert in the position: "); 
scanf("%d",&ins);
index=pos-1; 
for(i=0;i<n+1;i++) 
{ 
temp=a[i-1]; 
if (i<index) 
{ 
b[i]=a[i]; 
} 
else if(i==index) 
{ 
b[i]=ins; 
} 
else 
{ 
b[i]=temp;
} 
} 
for(i=0;i<n+1;i++)
{ 
printf("%d ",b[i]); 
}
printf("\n"); 
}
