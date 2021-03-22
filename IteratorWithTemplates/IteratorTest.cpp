/*
 * IteratorTest
 *
 * Created by Michael Stiber; modified on 2/14/14
 */

#include <iostream>

using namespace std;

#include "SquareContainer.h"

int main()
{
  // You create a container (in other code) like so:
  SquareContainer<int> mc;

  // and use it in various ways:
  SquareContainer<int>::iterator ci = mc.begin();
  unsigned i = 1;
  while (ci != mc.end()) {
    cout << "Setting element " << i << endl;
    *(ci++) = i++;
  }

  for (SquareContainer<int>::iterator ci = mc.begin();
       ci != mc.end(); ++ci)
    cout << *ci << endl;

}
