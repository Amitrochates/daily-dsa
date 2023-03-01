#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int len;
    
};
void display(struct array a)
{
    for (int i=0;i<a.len;i++)
    cout<<a.A[i]<<" ";
    cout<<endl;
}

void append(struct array *a, int x)
{
    if (a->size>a->len)
    {
        a->A[a->len++]=x;
        
    }
}

void insert(struct array *a, int index, int x)
{
    if (index<=a->size)
    {
        for (int i=a->len;i>index;i--)
        {
            a->A[i]=a->A[i-1];
        }
        a->A[index]=x;
        a->len++;
    }
}
void del(struct array *a, int index)
{
 if (index>0 && index<=a->len)
 {
     for (int i=index; i<a->len-1;i++)
     a->A[i]=a->A[i+1];
     a->len--;
 }
}

int linearsearch(struct array a, int key)
{
    for (int i=0;i<a.len;i++)
    {
        if (a.A[i]==key)
        return i;
    }
    return -1;
}
int linearsearch_trans(struct array *a, int key)
{
    for (int i=0;i<a->len;i++)
    {
        if (a->A[i]==key)
     { swap (a->A[i],a->A[i-1]);
        return i-1;}
    }
    return -1;
}
int linearsearch_mtf(struct array *a, int key)
{
    for (int i=0;i<a->len;i++)
    {
        if (a->A[i]==key)
     { swap (a->A[i],a->A[0]);
        return 0;}
    }
    return -1;
}
int main()
{
    struct array a = {{1,2,3,4,5,6,7},10,6};
   
    
   //  display(a);
   //insert(&a, 3,5010);
  //   display(a);
  // del(&a, 3);
  
     cout<<linearsearch(a,5)<<endl;
     display(a);
     cout<<linearsearch_trans(&a,5)<<endl;
       display(a);
        cout<<linearsearch_mtf(&a,5)<<endl;
       display(a);
    return 0;
}
