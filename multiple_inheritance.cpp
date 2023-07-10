#include<bits/stdc++.h>
using namespace std;
//     class A    [ ]          [ ]  class B
//                 \          /
//                  \        /
//                   \      /
//                    \    /
//                     \  /
//                      \/
//                      [ ]  class C




class father
{
    public :
    int height=6;
    int fatherage=50;
    void Height()
    {
        cout<<"Father height is "<<height<<endl;
    }
};
class mother
{
    public :
    int weight=50;
    int motherage=40;
    void Weight()
    {
        cout<<"Mother weight is "<<weight<<endl;
    }
};
class boy:public mother,public father
{
    public :
    int getAge()
    {
        return fatherage;
    }
    int GetAge()
    {
        return motherage;
    }

};
int main()
{
    boy y;
    y.Height();
    y.Weight();
    cout<<"Age of father is "<<y.getAge()<<endl;
    cout<<"Age of Mother is "<<y.GetAge()<<endl;
}