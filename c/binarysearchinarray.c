#include<stdio.h>

int main()
{
int i, arr[10]={2,4,5,6,7,8,9,11,1,12};
for(i=0;i<10;i++)
 { printf("%d\t",arr[i]);
   }
 int key;
 printf("\nenter the key element:");
 scanf("%d",&key);
 int indexofkey= binarysearch(arr , key);
(indexofkey == -1) ? printf("Element is not found in array"); : printf("Element is found at %d",indexofkey);

  return 0;
}
int binarysearch(int arr[] , int key)
{
    int l=0,h=9;

    while(l<=h)
    {
      int mid=(l+h)/2;
    if(key==arr[mid])
         return mid;
     else if(key<arr[mid])
             h=mid-1;
     else (key>arr[mid])
            l=mid+1;
    }
    return -1;
}

