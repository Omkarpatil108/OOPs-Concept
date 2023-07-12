#include<bits/stdc++.h>
using namespace std;
class Human
{
    public :
    int height;
    int age;

    
    
};
class Male : protected Human{
    public:
    void sleep()
    {
        cout<<"hey im sleeping"<<endl;
    }
    void setAge(int a)
    {
        age=a;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    Male object1;
    object1.setAge(21);
    cout<<object1.getAge()<<" is my age"<<endl;
    

}