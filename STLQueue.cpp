#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("name");
    q.push("Deepak");
    q.push("kumar");
    
    cout<<"Size Befor of : "<<q.size()<<endl;
    cout<<"First element of : "<<q.front()<<endl;
    q.pop();
    
    cout<<"after pop first element of : "<<q.front()<<endl;

    cout<<"Size after pop of : "<<q.size()<<endl;
}