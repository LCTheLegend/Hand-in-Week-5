#include <stdio.h>
#include <stdbool.h>

typedef struct point
{
    int x;
    int y;
} point; 


// a)
typedef struct Circle
{
    point p;
    int r;
} Circle;


bool CircleIsValid(const Circle *c)
{
    if(c -> r > 0) //Checks if radius is > 0
        return true;
    else
        return false;
}

void translate(Circle *c, const point *p) //Increments point of c by the point p
{
    c -> p.x += p -> x;
    c -> p.y += p -> y;

}


int main(void)
{
    Circle c[5]; //Array of five circle structs

    for(int i = 0 ; i < 5 ; i++)
    {
        c[i].p.x = i;
        c[i].p.y = i;
        c[i].r = i;
    } // Makes 5 circle structs with x = i, y = i and r = i

    Circle *ptr;
    point p;
    point *ptr1;

    p.x = 3;
    p.y = 3;

    ptr1 = &p;
    ptr = &c[1]; //These two are used to test translate function

    CircleIsValid(ptr); //tests the CircleIsValid function

    translate(ptr, ptr1);

    printf("x is %d, y is %d", c[1].p.x , c[1].p.y); //Prints incremented value for point of c[1]

    return 0;
}

/*
bool CircleIsValid(const Circle *c)
{
    if(c -> r > 0)
        return true;
    else
        return false;
}
*/
