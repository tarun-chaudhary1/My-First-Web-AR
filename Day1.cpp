#include<stdio.h>
int main()
{
    int arr[10],n,i,choice,data;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter Choice:");
    scanf("%d",&choice);

    if(choice==1)
    {
        for(i=0; i<n; i++)
        {
            arr[i]=arr[i+1];
        }
        for(i=0; i<n-1; i++)
        {
            printf("%d ",arr[i]);
        }
    }

    if(choice==2)
    {
        for(i=0; i<n-1; i++)
        {
            printf("%d ",arr[i]);
        }
    }

    if(choice==3)
    {
        int pos;
        printf("Enter Position:");
        scanf("%d",&pos);
        
        if(pos>10)
        {
            printf("Invalid");
        }
        else
        {
            for(i=pos-1; i<n; i++)
            {
                arr[i]=arr[i+1];
            }
            for(i=0; i<n-1; i++)
            {
                printf("%d ",arr[i]);
            }
        }
    }
}