#include <iostream>

using namespace std;

struct array{
  int *A;
  int size;
  int length;
  
    
};

int main()
{   struct array a;
    cout<<"size ";
    cin>>a.size;
    a.A = new int[a.size];
    cout<<"length ";
    cin>>a.length;
    for (int i=0;i<a.length;i++)
    cin>>a.A[i];
    
    for(int i=0; i<a.length;i++)
    cout<<a.A[i];
        
    return 0;
}