#include <iostream>
#include "Polygon.h"
using namespace std;

int main()
{
  Polygon P;
  P.add(*(new Vertex(1,2)));
  P.add(*(new Vertex(3,4)));
  P.add(*(new Vertex(5,6)));
  P.add(*(new Vertex(7,8)));
  P.add(*(new Vertex(9,10)));
  P.Delete(2,3);
  P.display();


/*  Polygon Q;
  Q.add(*(new Vertex(1,2)));
  Q.add(*(new Vertex(3,4)));
  Q.add(*(new Vertex(5,6)));
  Q.add(*(new Vertex(7,8)));
  Q.add(*(new Vertex(9,10)));
  Q.add(*(new Vertex(11,12)));
  Q.display();*/
  system("pause");
}