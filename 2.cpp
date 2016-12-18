#include <iostream>

using namespace std;

int l = 12;

void calc(int arr[], int n)
{
    for(int i=0; i<10; i++)
    {
        if(arr[l-n] < 9)
            arr[l-n]++;
        else
        {
            arr[l-n] = 0;
            arr[l-n+1]++;
            return;
        }

        if((arr[0]+arr[1]+arr[2])%2 == 0 &&
           (arr[11]+arr[10]+arr[9])%3 == 0 &&
           (arr[2]+arr[5]+arr[8]+arr[11])%11 == 0 &&
           (arr[1]+arr[3]+arr[5]+arr[7]+arr[9]+arr[11])%21 == 0)
        {
            for(int j=0; j<l; j++)
                cout << arr[j];
            cout << endl;
        }

        if(n != 1) calc(arr, n-1);
    }
}


int main()
{
    int a[l]={0};
    calc(a, l);
}
