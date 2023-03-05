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
int binsearch(struct array a, int key)
{
    int l=0; int h=a.len-1;
    
    
    while (l<=h)
    {   
        int mid=(l+h)/2;
        if (key==a.A[mid])
        return mid;
        else 
        if (key<a.A[mid])
        h= mid-1;
        else l = mid+1;
    }
    return -1;
    
}
int r_binsearch(int a[], int l, int h, int key)
{   int mid;
     if (l<=h)
    {   
        mid=(l+h)/2;
        if (key==a[mid])
        return mid;
        else 
        if (key<a[mid])
        return r_binsearch(a,0, mid-1, key);
        else 
        return r_binsearch(a,mid+1,h,key);
    }
    return -1;
}

// get, set, sum, avg, max, min , leftshift, right shift, rotate, reverse, reverse2, , check sort, 
void insert_sorted(struct array *a, int x )
{
    for(int i=a->len-1; i>0; i--)
    {   
        if (a->A[i]>x)
        a->A[i+1]=a->A[i];
        else 
        {
        a->A[i+1]=x;
        a->len++;
        break;    
        }
    }
}
int issorted(struct array a)
{
 for (int i=0; i<a.len-1; i++)
 {
     if (a.A[i]>a.A[i+1])
     return -1;
 }
  return 1;
}


int main()
{
    struct array a = {{2,5,7,10,11,17},10,6};
   
    
   //  display(a);
   //insert(&a, 3,5010);
  //   display(a);
  // del(&a, 3);
  
     //cout<<linearsearch(a,5)<<endl;
   //  display(a);
    // cout<<linearsearch_trans(&a,5)<<endl;
    //   display(a);
//cout<<linearsearch_mtf(&a,5)<<endl;
    //   display(a);
     // cout<<binsearch(a, 5)<<endl;
      // display(a);
      // cout<<r_binsearch(a.A,0,a.len-1,5)<<endl;
      // display(a);
      // insert_sorted(&a,11 );
       display(a);
       cout<<issorted(a)<<endl;
    return 0;
}
