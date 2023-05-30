#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1]="name";
    m[13]="Deepak";
    m[5]="kumar";

    m.insert( {3, "kushwaha"} );

    cout<< "Before erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding of -13 ->"<<m.count(-13)<<endl;

    //m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m)
    { 
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it=m.find(3);
    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
}