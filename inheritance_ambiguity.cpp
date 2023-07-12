#include<bits/stdc++.h>
using namespace std;
class father
{
    public :
    int Fatherheight=6;
    void Height()
    {
        cout<<"Father height is "<<Fatherheight<<endl;
    }
};
class mother
{
    public :
    int Motherheight=5;
    void Height()
    {
        cout<<"Mother height is "<<Motherheight<<endl;
    }
};
class boy:public mother,public father
{
    //this is blank

};
int main()
{
    boy y; 
    //here is the ambiguity we use scope resolution for it
    y.father::Height();
    y.mother::Height();
}