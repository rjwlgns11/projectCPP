#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* read = fopen("data.bin", "rb");//���̳ʸ� ���� �б� ���� ��� 
	FILE* write = fopen("data.bin", "wb");//���̳ʸ� ���� ���� ����
	char buf[200];
	int readcnt;

	if (read == NULL || write == NULL)
	{
		puts("���� ���� ����");//���ڷ� ���޵Ǵ� ���� int
		return -1;
	}

	while (1)
	{
		readcnt = fread((void*)buf, 1, sizeof(buf), read);//readcnt�� fread(������ 1�� ũ�⸦ sizeof(buf)�� ũ�� ��ŭ buf���� �о read�� �����ض�) ������ �������� sizeo(buf)�� �� 4�� ��ȯ�ȴ�
		
		if (readcnt < sizeof(buf))//4<1�ε� ������ �ȵǸ� �̻��� ����� feof �Լ��� �̿� ������ �˾ƺ���
		{
			
			if (feof(read) != 0)//�б� ���� ��� ���� 0�� ���������� 0�� �ƴѰ� ��ȯ (18���� fread���� �˻�) 
			{
				fwrite((void*)buf, 1, readcnt, write);//write�� 1�� ũ���� �����͸� readcnt�� ũ�⸸ŭ buf�κ��� �о ����
					puts("���� ���� ����");
					break;
			}
			else
			{
				puts("���� ���� ����");
					break;
			}

		}

		fwrite((void*)buf, 1, sizeof(buf), write);//write�� 1�� �����͸� sizeof(buf)�� ũ�⸸ŭ buf�� ����� ���� ����(����).

		
	}

	
	return 0;
}