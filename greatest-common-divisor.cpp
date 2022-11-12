#include <iostream>
using namespace std;

int main()
{
    int a,b,R;
    cout<<"first number: ";
    cin>>a;
    cout<<"second number: ";
    cin>>b;
    while ((a%b)>0){
    R=a%b;
    a=b;
    b=R;
    }
    cout<< "result: "<< b;
    return 0;
}