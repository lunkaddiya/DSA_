#include<iostream>

using namespace std;

int main()
{
    //REVERSE USING TWO POINTER OR SWAPPING but use only for loop
    string str ="HELLOJAVA";

    for(int start =0,end1=str.length()-1; start<end1; start++,end1--)
    {
      char temp=str[start];
        str[start]=str[end1];
        str[end1]=temp;
    }
    cout<<"Reverse string is :" <<str;
    }
