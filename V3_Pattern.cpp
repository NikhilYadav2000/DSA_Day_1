#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int m = 0; m < n - i - 1; m++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*" << " ";
        }
        for (int m = 0; m < i; m++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
}
void print9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int m = 0; m < n - i - 1; m++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*" << " ";
        }
        for (int m = 0; m < i; m++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            continue;
        for (int k = 0; k < n - i; k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j < i + 1; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void print12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= space; k++)
        {
            cout << " " << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
        space -= 2;
    }
}
void print13(int n)
{
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << cnt++ << " ";
        }
        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " " << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << ch << " ";
            if (k <= breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
}
void print18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'E';
        ch -= i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void print19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < 2 * n - 1 - 2 * i - 1; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void print20(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < 2 * n - 1 - 2 * i - 1; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void print21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
void print22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<((n-1)-min(min(top,down),min(left,right)))<<" ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cout << "Enter Number of Test Cases : ";
    cin >> t; // test cases
    for (int i = 0; i < t; i++)
    {
        int n;
        cout << "Enter Number of Rows : ";
        cin >> n;
        // print1(n);
        // print2(n);
        // print3(n);
        // print4(n);
        // print5(n);
        // print6(n);
        // print7(n);
        // print8(n);
        // print9(n);
        // print10(n);
        // print11(n);
        // print12(n);
        // print13(n);
        // print14(n);
        // print15(n);
        // print16(n);
        // print17(n);
        // print18(n);
        // print19(n);
        // print20(n);
        // print21(n);
        print22(n);
    }

    return 0;
}
/*
Enter Number of Test Cases : 1
Enter Number of Rows : 5

Print1
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

Print2
*
* *
* * *
* * * *
* * * * *

Print3
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Print4
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

Print5
* * * * *
* * * *
* * *
* *
*

Print6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Print7
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *

Print8
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

Print9
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

Print10
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

Print11
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

Print12
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

Print13
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Print14
A
A B
A B C
A B C D
A B C D E

Print15
A B C D E
A B C D
A B C
A B
A

Print16
A
B B
C C C
D D D D
E E E E E

Print17
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

Print18
E
D E
C D E
B C D E
A B C D E


Print19
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

Print20
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

Print21
*****
*   *
*   *
*   *
*****

Print22
4 4 4 4 4 4 4 4 4
4 3 3 3 3 3 3 3 4
4 3 2 2 2 2 2 3 4
4 3 2 1 1 1 2 3 4
4 3 2 1 0 1 2 3 4
4 3 2 1 1 1 2 3 4
4 3 2 2 2 2 2 3 4
4 3 3 3 3 3 3 3 4
4 4 4 4 4 4 4 4 4

*/