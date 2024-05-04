#ifndef __POINT_H__
#define __POINT_H__

typedef struct point {
	int xpos;
	int ypos;
}point;

void setpointpos(point* ppos, int xpos, int ypos);// 값의 저장

void showpointpos(point* ppos);//값의 출력

int pointcomp(point* pos1, point *pos2);

#endif