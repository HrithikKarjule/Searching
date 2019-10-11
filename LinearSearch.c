#include<stdio.h>
int linearSearch(int *,int,int);
int main()
{
    int a[50],key,n,i,c=0;
    printf("Enter No. of elements in an array");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search:");
    scanf("%d",&key);
    linearSearch(a,key,n);

}
int linearSearch(int *b,int t,int d)
{
    int c=0,i;
    for(i=0;i<d;i++)
    {
        if(b[i]==t)
        {
            printf("Element found at %d location",i+1);
            c++;
        }
    }
    if(c==0)
    {
        printf("Element not found");
    }

}
