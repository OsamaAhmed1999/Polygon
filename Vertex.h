#include <iostream>
using namespace std;

class Vertex
{
  public:
    Vertex()
    {
      this->x = 0;
      this->y = 0;
    }
    Vertex(int x , int y)
    {
      this->x = x;
      this->y = y;
    }
    Vertex(Vertex& clone)
    {
      this->x = clone.x;
      this->y = clone.y;
    }
    int getx()
    {
      return this->x;
    }
    int gety()
    {
      return this->y;
    }
    void set(int x , int y)
    {
      this->x = x;
      this->y = y;
    }

    void show()
    {
      cout << "(" << this->x << "," << this->y << ")" << endl;
    }
    
  private:
    int x;
    int y;
};
ostream& operator << (ostream& output , Vertex& object)
{
  return output << "(" << object.getx() << "," << object.gety() << ")" << endl; 
}