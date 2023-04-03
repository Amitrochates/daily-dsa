#include <stdio.h>
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubble (int a[], int n)
{   
    for (int i=0; i<n-1; i++)
    {   int flag=0;
        for (int j=0; j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
            swap(&a[j],&a[j+1]);
            flag=1;
            }
        }
        if(flag==0)
        {
        printf("adaptive\n");
        break;
            
        }
    }
}
int main()
{   int a[5]={2,3,4,6,5};
    bubble(a,5);
    for (int i=0;i<5;i++)
    printf("%d",a[i]);

    return 0;
}

