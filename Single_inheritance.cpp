#include<bits/stdc++.h>
using namespace std;
//     [ ]   class A
//      |
//     [ ]   class B



class Animal{
    public:
    int age=12;
    int weight;
};

class dog:public Animal
{
    public :
    void speak()
    {
        cout<<"speaking"<<endl;
    }

};
int main()
{
    dog d;
    d.speak();
    cout<<d.age<<endl;
}