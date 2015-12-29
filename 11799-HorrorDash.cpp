//UVa
//11799 - Horror Dash

#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  int TC, N, input, c = 1;

  scanf("%d", &TC);
  
  while(TC--)
  {
     int m = 0;
     cin >> N;

     while(N--)
     {
       cin >> input;
       m = max(m, input);
     }

     printf("Case %d: %d\n", c++, m);
  }

  return 0;
}
