#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_NAME   20

struct point{
	int x;
	int y;
};

int main(int argc, const char * argv[]) {
	
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("input p1 coordinating (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinating (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xdiff = p2.x - p1.x;
	ydiff = p2.y - p1.y;
	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
		
	printf("distance : %1f\n", dist);
	return 0;
}
