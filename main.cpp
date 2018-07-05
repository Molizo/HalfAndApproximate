#include <iostream>

using namespace std;

int main()
{int n,x;
    cout << "Introduceti numarul:";
    cin>>n;
    if(n%2==0)
    {
        x=n/2;
        cout<<"Rezultatul este:"<<x<<endl;
    }
    else
    {
        x=n/2+1;
        cout<<"Rezultatul este:"<<x<<endl;
    }
    return 0;
}
