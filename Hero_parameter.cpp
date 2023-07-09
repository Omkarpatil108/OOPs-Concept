#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    int health;
    char name;

    //Parameterisez constrctor
    Hero()
    {
        cout<<"constructor called"<<endl;
    }

    Hero(int health)
    {
        this->health=health; //this is the poiner to the current object;
        
    }

    Hero(int health,char name)
    {
        this->health=health; //this is the poiner to the current object;
        this->name=name;
        
    }
    
    int getHealth()
    {
        return health;
    }
    char getName()
    {
        return name;
    }


};
int main()
{
    //static allocation
    // Hero ramesh(90);
    // cout<<"health is "<<ramesh.getHealth();

    Hero ramesh(90,'a');
    cout<<"health is "<<ramesh.getHealth()<<endl;
    cout<<"Name is "<<ramesh.getName();



    //dynamic allocaton

    // Hero *h = new Hero(8);
    // cout<<h->getHealth();
    
    
    
}