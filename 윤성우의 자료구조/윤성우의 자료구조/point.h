#ifndef __POINT_H__
#define __POINT_H__

typedef struct point {
	int xpos;
	int ypos;
}point;

void setpointpos(point* ppos, int xpos, int ypos);// ���� ����

void showpointpos(point* ppos);//���� ���

int pointcomp(point* pos1, point *pos2);

#endif