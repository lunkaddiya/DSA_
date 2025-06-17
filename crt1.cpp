#include<iostream>
using namespace std;
int main ()
{   int maxx=0;
    int minn=99;
    int a []={1,2,3,4,5};
    for(int i =0; i<5;i++)
    {
    if(a[i]>maxx)
    {
        maxx=a[i];
    }
    if(a[i]<minn)
    {
        minn=a[i];
    }
    }
    cout<<"Minimum value is :"<<minn<<endl;
    cout<<"Maximum value is:"<<maxx;

}
