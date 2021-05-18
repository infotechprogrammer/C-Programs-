#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 10; i++)
  {
    if (i == 4)
    {
      break;
    }
    cout << i << "\n";
  }

  cout << "\n";

  for (int i = 0; i < 10; i++)
  {
    if (i == 4)
    {
      continue;
    }
    cout << i << "\n";
  }

  return 0;
}

// You have already seen the break statement used in an earlier program of 9switchstatement.
// It was used to "jump out" of a switch statement.
// The break statement can also be used to jump out of a loop.
