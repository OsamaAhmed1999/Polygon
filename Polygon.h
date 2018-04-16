#include <iostream>
#include <string.h>
#include "Vertex.h"
using namespace std;
int i;

class Polygon
{
  public:
  Polygon()
    {
      this->size = 5;
      this->index = 0;
      poly = new Vertex[size];
    }
    Polygon(int index)
    {

    }
    int getindex()
    {
      return this->index;
    }
    Vertex getpoly()
    {
      return this->poly[index];
    }
    void add(Vertex& object)
    {
      if(index < size)
      {
        poly[index] = object;
        index++;
      }
      else
      {
        IncreaseSize(object);
      }
    }
    void display()
    {
      for(i = 0; i < index; i++)
      {
        cout << this->poly[i];
      }
      cout << "Index: " << this->index << endl;
      cout << "Size: " << this->size << endl << endl;
    }
    void Delete(int x , int y)
    {
      int temp;
      temp = Search(x , y);
      if(temp >= 0)
      {  
        for(i = temp; i < index-1; i++)
        {
          poly[i] = poly[i+1];
        }
        index--;
      }
      else
      {
        cout << "NOT FOUND" << endl;
      }
    }
    int Search(int x , int y)
    {
      Vertex object;
      int temp=-1;
      for(i = 0; i < index; i++)
      {
        object = poly[i];
        if(x == object.getx() && y == object.gety())
        {
          temp = i;
          break;
        }
      }
      return temp;
    }
    protected:
    void IncreaseSize(Vertex& object)
    {
      size = size * 2;
      Vertex *new_poly = new Vertex[size];
      for(i = 0; i < index; i++)
      {
        new_poly[i] = poly[i];
      }
      delete [] poly;
      poly = new_poly;
      poly[index] = object;
      index++;
    }
    private:
    Vertex *poly;
    int size;
    int index;
};