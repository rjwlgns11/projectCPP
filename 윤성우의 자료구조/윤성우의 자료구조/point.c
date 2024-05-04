#include <stdio.h>
#include "point.h"

void setpointpos(point* ppos, int xpos, int ypos)
{
	ppos->xpos = xpos;
	ppos->ypos = ypos;
}
void showpointpos(point* ppos)
{
	printf("[%d %d] \n", ppos->xpos, ppos->ypos);
}
int pointcomp(point* pos1, point *pos2)
{
	if (pos1->xpos == pos2->xpos && pos2->ypos == pos2->xpos)
		return 0;
	else if (pos1->xpos == pos2->xpos)
		return 1;
	else if (pos1->ypos == pos2->ypos)
		return 2;
	else
		return -1;

}