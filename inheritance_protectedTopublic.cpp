#include<bits/stdc++.h>
using namespace std;
class Human
{
    protected :
    int height=12;
    public:
    int age;

    
    
};
class Male : public Human{
    public:
    void sleep()
    {
        cout<<"hey im sleeping"<<endl;
    }
    
    int getHeight()
    {
        return height;
    }
    // void setAge(int a)
    // {
    //     age=a;
    // }
    // int getAge()
    // {
    //     return age;
    // }
};
int main()
{
    // Male object1;
    // object1.setAge(21);
    // cout<<object1.getAge()<<" is my age"<<endl;
    Male m1;
    m1.getHeight();
    cout<<m1.getHeight()<<" is my height"<<endl;
    

}