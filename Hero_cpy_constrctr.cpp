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
    //Multiple parameter
    Hero(int health,char name)
    {
        this->health=health; //this is the poiner to the current object;
        this->name=name;
        
    }

    //copy constructor
    Hero(Hero& m)  //& address pass kel karan jr address pass kel nahi tr s chi copy create hoanr ani te object honar mg te constructor honar ani Hero constructor la call krnar .
    {
        this->health=m.health;
        this->name=m.name;
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
    Hero R(70,'a');
    cout<<"The health of R is "<<R.getHealth()<<endl;
    cout<<"The Name of R is "<<R.getName()<<endl;

    //copy constructor in static allocation 
    Hero S(R);
    cout<<"The health of R is "<<R.getHealth()<<endl;
    cout<<"The Name of R is "<<R.getName()<<endl;


    //dynamic allocation
    // Hero *P = new  Hero(70,'A');
    // cout<<"The health of R is "<<P->getHealth()<<endl;
    // cout<<"The Name of R is "<<P->getName()<<endl;

    //copy constructor in dynamic allocation 
    //Hero *Q = new Hero(*P);

}