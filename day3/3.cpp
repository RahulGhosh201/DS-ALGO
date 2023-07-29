#include<bits/stdc++.h>
using namespace std;

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// line=i hole i khana elements hbe
// n mane toto gulo line hbe
// every line r first and last element always 1 hbe
// 2d matrix nie kaj korte hbe
// ekta element hbe ager liner & ager element r sum hbe
void pascal(int n){
     int arr[n][n];
 
    // Iterate through every line and
    // print integer(s) in it
    for (int line = 0; line < n; line++)
    {
        // Every line has number of integers
        // equal to line number
        for (int i = 0; i <= line; i++)
        {
        // First and last values in every row are 1
        if (line == i || i == 0)
            arr[line][i] = 1;
        // Other values are sum of values just
        // above and left of above
        else
            arr[line][i] = arr[line - 1][i - 1] +
                            arr[line - 1][i];
        cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n=5;
    pascal(n);
    return 0;
}