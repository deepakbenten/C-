#include<iostream>
using namespace std;


class Hero{
private :
  int health;
  public :
  char level;  

    Hero(){
        cout<<"default canstructor"<<endl;
    }
  void print(){
    cout<< health<<endl;

  }
  
  int getHealth(){
    return health;
  }
  void setHealth(int h){
    health=h;
  }
  char getLevel(){
    return level;
  }
  void setLevel(char ch){
    level=ch;
  }

    Hero(int health){
        cout<<"this -> : "<<this <<endl;
        this-> health=health;
    }

};

int main(){

    //static memory
    Hero deepak(20);


    cout<<"constractor : "<< &deepak<<endl;
    deepak.getHealth();
    deepak.setHealth(70);
    deepak.level='D';


    //dynamic memory
    Hero *b=new Hero;
    b->setHealth(80);
    b->setLevel('A');

    cout<<"health of : "<<deepak.getHealth()<<endl;
    cout<<"level of : " << deepak.level<<endl;

    cout<<"--------------------------------------"<<endl;
    cout<<"health of : " << (*b).getHealth()<<endl;
    cout<<"level of : " << (*b).level<<endl;

     cout<<"--------------------------------------"<<endl;
    cout<<"health of : " << b->getHealth()<<endl;
    cout<<"level of : " << b->level<<endl;



    return 0;
}