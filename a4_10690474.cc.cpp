#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y, x%y);
    }

}
int main()
{
    int x,y;
    cout <<"provide first number:";
    cin>>x;
    cout<<"provide second number:";
    cin>>y;
    cout<<"the greatest common divisor is " <<gcd(x,y) << endl;
    return 0;
}
