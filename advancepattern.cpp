#include <iostream>
using namespace std;
bool chack(int n, int k)

{
    int sum = n + k;
    if (sum % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int i, j, n, row, col;
    cout << "Enter the n: = ";
    cin >> n;

    for (i = 1; i <= 3; i++)
    {
          
          for(j=1;j<=n;j++)
          {
            if((i+j)%4==0||(i==2)&&(j%4==0))
            {
                cout<<"*"<<" ";
            }
            else 
            {
                cout<<"  ";
            }
          }
     
        cout << endl;
    }
}