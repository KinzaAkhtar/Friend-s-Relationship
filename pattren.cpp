#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int hash= (N*2)-2;
    for (int i = 1; i <= N; i++)
    {
            for (int k = 0; k < i; k++)
            {
                cout << "*";
            }
            for (int l = 1; l <= hash  ; l++)
                {
                    cout << "#";
                }
                    hash-=2;
            for (int k = 0; k < i; k++)
            {
                cout << "*";
            }
            cout<<endl;
    } 
    }