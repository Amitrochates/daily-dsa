#include <stdio.h>
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selection_sort(int a[], int n)
{
    for (int i=0; i<n;i++)
    { int k;
        for (int j=k=i;j<n;j++)
        {
            if (a[j]<a[k])
            k=j;
        }
        swap (&a[i],&a[k]);
        
    }
}
void insert_sort(int a[], int n)
{
    for (int i=1; i<n;i++)  
    {   
       int j=i-1;
       int x=a[i];
        while(j>-1 && a[j]>x)
        {   
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
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
{   int a[6]={9,15,4,6,5,1};
   // bubble(a,5);
   //insert_sort(a,5);
   selection_sort(a,6);
    for (int i=0;i<6;i++)
    printf("%d ",a[i]);

    return 0;
}

