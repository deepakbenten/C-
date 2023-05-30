#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Deepak");
    s.push("kumar");
    s.push("kushwaha");

    cout<<"Top element -> "<<s.top()<<endl;
    s.pop();
     cout<<"Top element -> "<<s.top()<<endl;
     cout<<"size of stack ->" <<s.size()<<endl;
     cout<<"Empty or not -> "<<s.empty()<<endl;
}