#include<iostream>
#include<stack>
using namespace std;
bool isvalid( string s)
{
    stack<char>st;
    for(char ch:s) // s=([{}])
    {
      if(ch=='('|| ch=='{' || ch=='[')
            {
                st.push(ch);
            }
        else
        {   if(st.empty())
            {
                return false;
            }
            char top=st.top();
            if((ch==')'&& top==')')|| (ch=='}'&& top=='{' )||(ch==']'&& top=='[' ))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
        }

    }return st.empty();
}
int main()
{
    string s ;
    cout<<"Enter any string";
    cin>>s; //or use getline
    if(isvalid(s))
    {

        cout<<"Balanced parenthesis.\n";}
        else{
            cout<<"not balanced";

        }
    }
