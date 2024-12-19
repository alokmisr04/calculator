#include<iostream>
using namespace std;
int main()
{
    float a ,b,result;
    char operation;
    cout<<"Enter a number :";
    cin>>a;
    cout<<"Enter a another number :";
    cin>>b;
    cout<<"Please choose any one among +,-,*,%  : "<<endl;
    cin>>operation;
    switch (operation){
        case '+':
            result = a+b;
            cout<<"Result of "<<a<<" + "<<b<<" = "<<result;
            break;
        case '-':
            result =a-b;
            cout<<"Result of "<<a<<" - "<<b<<" = "<<result;
            break;
        case '*':
            result =a*b;
            cout<<"Result of "<<a<<" * "<<b<<" = "<<result;
             break;
        case '/':
             result=a/b;
             cout<<"Result of "<<a<<" / "<<b<<" = "<<result;
             break;
        default:
             cout<<"Can only perform 4 operation .........Thank You ";
    }

    return 0;


}