#include<bits/stdc++.h>
using namespace std;
class Car{
    private:
    int speed;
    public:
    // char name[100];
    char name;

    void setSpeed(int value)
    {
        speed=value;
    }
    int getSpeed()
    {
        return speed;
    }
    void setName(char ch)
    {
        name=ch;
    }
    char getName()
    {
        return name;
    }

};
int main()
{   //static allocation
    Car c;

    
    c.setSpeed(200);
    c.setName('A');
    cout<<"size of speed is "<<c.getSpeed()<<'\n';
    cout<<"name of car is "<<c.getName();





    //dyanmic allocation
    // Car *c=new Car;   Car navach block create honar  int ch ani tya ch address pn asnar  and                                                     c tyvr point karnar.
    // c->setName('A');
    // c->setSpeed(200);


    // cout<<"speed of car is "<<c->getSpeed();
    // cout<<"name of car is "<<c->getName();
}