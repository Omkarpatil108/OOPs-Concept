#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int age;
    int salary;

    public:
    int getSalary()
    {
        return salary;
    }
    int getAge()
    {
        return age;
    }
    void setSalary(int s)
    {
        salary=s;
    }
    void setAge(int a)
    {
        age=a;
    }

};
int main()
{
    student p1;
    p1.setSalary(100000);
    p1.setAge(21);
    cout<<"The salary is "<<p1.getSalary()<<endl;
    cout<<"The age is "<<p1.getAge()<<endl;

}