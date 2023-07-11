#include<bits/stdc++.h>
using namespace std;
 
//            class A
//                /\
//               /  \
//              /    \
//             /      \
//            /        \
//        class b     class c














class india

{
    public:
    string population="150cr";
    void Quantity()
    {
        cout<<"India's population is "<<population<<endl;
    }
};
class Maharashtra:public india{
    public :
    string name="Mumbai";
    void CommercialCapital()
    {
        cout<<"This is Mumbai"<<endl;
    }

};
class Delhi:public india{
    public :
    string name="Mumbai";
    void Capital()
    {
        cout<<"This is Delhi"<<endl;
    }

};
int main()
{
    Maharashtra m;
    m.Quantity();
    m.CommercialCapital();

    Delhi d;
    d.Quantity();
    d.Capital();
}