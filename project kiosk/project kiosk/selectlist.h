#pragma once
#include "stdio.h"

void selectlist(int mainmenulist[], int mainmenusizeuplist[], int maindish[], int sidemenulist[],int count)
{
	for (int i = 0; i < count; i++)
	{
		if (mainmenulist[i] > 0)
		{
			printf("Â¥Àå¸é %d±×¸©\n", mainmenulist[0]);
			printf("Â«»Í %d±×¸©\n", mainmenulist[1]);
			printf("ººÀ½¹ä %d±×¸©\n", mainmenulist[2]);
			break;
		}
		else
			continue;
	}
	for (int i = 0; i < count; i++) {
		if (mainmenusizeuplist[i] > 0) {
			printf("Â¥Àå¸é °ö¹è±â %d±×¸©\n", mainmenusizeuplist[0]);
			printf("Â«»Í °ö¹è±â %d±×¸©\n", mainmenusizeuplist[1]);
			printf("ººÀ½¹ä °ö¹è±â %d±×¸©\n", mainmenusizeuplist[2]);
			break;
		}
		else
			continue;
	}

	printf("\n");

	for (int i = 0; i < count; i++) {
		if (maindish[i] > 0) {
			printf("ÅÁ¼öÀ° ¼Ò %d°³\n", maindish[0]);
			printf("ÅÁ¼öÀ° Áß %d°³\n", maindish[1]);
			printf("ÅÁ¼öÀ° ´ë %d°³\n", maindish[2]);
			printf("±ñÇ³±â ¼Ò %d°³\n", maindish[3]);
			printf("±ñÇ³±â Áß %d°³\n", maindish[4]);
			printf("±ñÇ³±â ´ë %d°³\n", maindish[5]);
			break;
		}
	}
	printf("\n");
	for (int i = 0; i < count; i++) {
		if (sidemenulist[i] > 0) {
			printf("°ø±â¹ä %d±×¸©\n", sidemenulist[0]);
			printf("Äİ¶ó %dÄµ\n", sidemenulist[1]);
			printf("»çÀÌ´Ù %dÄµ\n", sidemenulist[2]);
			printf("¼ÒÁÖ %dº´\n", sidemenulist[3]);
			break;
		}
		else
			continue;
	}
	printf("\n");

}