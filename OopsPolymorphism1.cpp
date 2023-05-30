#include<iostream>
using namespace std;


class A{

    public:
    void sayHello(){
        cout<< "Hello deepak "<<endl;

    }

    int sayHello(int n){
        cout<<"hello deepak kumar"<<endl;
        return n;
    }
    void sayHello(string name){
        cout<<"hello deepak kumar kushwaha"<<endl;
    }


};

class B{
    
    public :
    int a;
    int b;
    
    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value1-value2<<endl;
    }
};


int main(){

    B obj1, obj2;
    
    obj1.a=4;
    obj2.b=7;
    obj1+obj2;



    A obj;
    obj.sayHello();

    A obj10;
    obj10.sayHello(10);

    return 0;
}