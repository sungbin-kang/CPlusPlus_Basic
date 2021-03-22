#include <iostream>
#include <vector> 

using namespace std;

struct Point
{
    float x, y;
    Point(float x=0, float y=0) : x(x), y(y) {}
    
} ;

int main()
{
    Point p1;
    p1.x = 1;
    p1.y = 2;

    Point p2 = Point(3, 4);

    vector<Point> points;
    points.push_back(p1);
    points.push_back(p2);

    for(auto i = points.begin(); i != points.end(); ++i)
    {
        cout << "x = " << (*i).x << ", y = " << (*i).y << endl;
    }


}

/*

--- the constructor ---

typedef struct Foo { ... } Foo;

OR

typedef struct { ... } Foo;

*/



/*
---Error constructor---
typedef struct
{
    int x;
    foo(){};
} foo;


---Correct way ---


*/