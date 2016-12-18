#include <iostream>

using namespace std;

bool isT(int n)
{
    int i, j,S, N, c = 0;

    S=n/2;
    N=S+1;
    bool arr[N];

    for(i=1; i<=S; i++)
        arr[i] = true;

    for(i=2; ((i*i)<=S); i++)
    {
        if(arr[i])
            for(j=(i*i); j<=S; j+=i)
                if(arr[j])
                    arr[j] = false;
    }

    for(i=1; i<=S; i++)
        if(arr[i] && n%i==0) c++;

    if(c <= 3 && c>1) return true;

    return false;
}

int main()
{
    int n, num, res = 1;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if(num != 0 && num != 1)
            if(isT(num))
                res *= num;
    }

    cout << res;
}
