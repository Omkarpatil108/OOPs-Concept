#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:

    //default constrctor
    Hero()
    {
        cout<<"constructor called"<<endl;
    }


};
int main()
{
    cout<<"hello before const. call"<<endl;
    Hero ramesh;
    cout<<"HIIIII After const. call"<<endl;
}