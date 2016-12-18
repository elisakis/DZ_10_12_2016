#include <iostream>

using namespace std;

void quicksort (int first, int last, double arr[])
{
    int i = first;
    int j = last;
    double x = arr[(first+last)/2];  //in center
    while (i < j)
    {
        while (arr[i] > x) i++;
        while (arr[j] < x) j--;

        if (i<=j)
        {
              double t = arr[j];
              arr[j] = arr[i];
              arr[i] = t;
              i++;
              j--;
        }
    }

    if (i < last) quicksort(i, last, arr);

    if (first < j) quicksort(first, j, arr);
}

int main ()
{
    int n, m;
    cin >> n >> m;

    double arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(0, n-1, arr);

    cout << arr[n - m] << " ";
}
