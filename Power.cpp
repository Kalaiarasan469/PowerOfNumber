// Example program
#include <iostream>
#include <string>
using namespace std;
class Power
{
    int bs,in,t;
    public:
    void get()
    {
        cout<<"INPUT"<<endl;
        cin>>bs>>in;
        }
        int calc()
        {
                    cout<<"OUTPUT"<<endl;
t=bs;
           for(int i=0;i<in-1;i++)
           {
               bs*=t;
               }
           return bs;}
    };
int main()
{
    Power p;
    p.get();
    cout<<p.calc();
    return 0;
}
