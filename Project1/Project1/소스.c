#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* read = fopen("data.bin", "rb");//바이너리 파일 읽기 전용 모드 
	FILE* write = fopen("data.bin", "wb");//바이너리 파일 쓰기 전용
	char buf[200];
	int readcnt;

	if (read == NULL || write == NULL)
	{
		puts("파일 오픈 실패");//인자로 전달되는 형은 int
		return -1;
	}

	while (1)
	{
		readcnt = fread((void*)buf, 1, sizeof(buf), read);//readcnt는 fread(데이터 1의 크기를 sizeof(buf)의 크기 만큼 buf에서 읽어서 read에 저장해라) 성공시 전달인자 sizeo(buf)값 즉 4가 반환된다
		
		if (readcnt < sizeof(buf))//4<1인데 실행이 안되면 이상이 생긴것 feof 함수를 이용 원인을 알아보기
		{
			
			if (feof(read) != 0)//읽기 전용 모드 값이 0에 도달했을면 0이 아닌값 반환 (18행의 fread값을 검사) 
			{
				fwrite((void*)buf, 1, readcnt, write);//write에 1의 크기의 데이터를 readcnt의 크기만큼 buf로부터 읽어서 저장
					puts("파일 복사 성공");
					break;
			}
			else
			{
				puts("파일 복사 실패");
					break;
			}

		}

		fwrite((void*)buf, 1, sizeof(buf), write);//write에 1의 데이터를 sizeof(buf)의 크기만큼 buf에 저장된 값을 쓴다(복사).

		
	}

	
	return 0;
}