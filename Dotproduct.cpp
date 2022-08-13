// Coded by Dharrun Sriman (SuperGaming20), Do not take full credit for this progam.
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

const int a_rows = 4;
const int a_cols = 3;
const int b_rows = 3;
const int b_cols = 4;

inline int dot_product(int a[][a_cols], int b[][b_cols], int a_row, int a_col, int b_row, int b_col)
{
  if(a_col != b_row)
  {
    cerr << "Invalid! Matrix dimensions not the same!" << endl;
    exit(1);
  }

  vector <int> store;

  for(int p = 0; p < a_row; p++)
  {
    for(int num = 0; num < b_col; num++)
    {
      for(int i = 0; i < b_row; i++)
      {
        store.push_back(a[p][i] * b[i][num]);
        if(b_row - i == 1)
        {
          if(a_row - p == 1 && b_col - num == 1 && b_row - i == 1)
          {
            cout << accumulate(store.begin(),store.end(),0);
            exit(1);
          }
          cout << accumulate(store.begin(),store.end(),0) << ',';
          if(b_col - num == 1)
          {
            cout << endl;
          }
          store.clear();
        }
      }
    }
  }
}

int main()
{
  int x[::a_rows][::a_cols] = {{1,2,3},
                               {4,5,6},
                               {7,8,9},
                               {10,11,12}};

  int y[::b_rows][::b_cols] = {{1,2,3,4},
                               {5,6,7,8},
                               {9,10,11,12}};

  dot_product(x,y,::a_rows,::a_cols,::b_rows,::b_cols);
}
