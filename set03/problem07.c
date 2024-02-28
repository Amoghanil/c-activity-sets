#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point() {
    Point p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

Line input_line() {
    Line l;
    printf("Enter coordinates for Point 1:\n");
    l.p1 = input_point();
    printf("Enter coordinates for Point 2:\n");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l) {
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->distance = sqrt(dx * dx + dy * dy);
}

void output(Line l) {
    printf("The distance between the points (%f,%f) and (%f,%f) is %0.4f\n",
           l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}

int main() {
    Line myLine = input_line();
    find_length(&myLine);
    output(myLine);

    return 0;
}
