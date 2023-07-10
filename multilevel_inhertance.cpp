#include<bits/stdc++.h>
using namespace std;

//     [ ]   class A
//      |
//     [ ]   class B
//      |
//     [ ]   class C


class Animal{
    public :
    int age=12;
    int weight;
    void Age()
    {
        cout<<"Age is "<<age<<endl;
    }

};
class dog:public Animal
{
    public:
    int height;
    void setHeight(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
};
 class cat:public dog{
    public :
    void sound()
    {
        cout<<"Cat is here"<<endl;
    }
 };

 int main()
 {
    cat c;
    c.sound();
    c.setHeight(5);
    cout<<c.getHeight()<<endl;
    c.Age();
 }