#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
int seosic(void)
{
	FILE* fp = fopen("c��� ���� ���幮��.txt", "wt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	fputs("���Ĺ��� ���� \n", fp);
	fputs("\n", fp);
	fputs("%d = ��ȣ�ִ� 10���� ���� ��� (int,short,char) \n", fp);
	fputs("%ld = ��ȣ�ִ� 10���� ���� ��� (long) \n", fp);
	fputs("%lld = ��ȣ�ִ� 10���� ���� ��� (long long) \n", fp);
	fputs("%u = ��ȣ���� 10�������� ���� ���(unsigned int) \n", fp);
	fputs("%x = ��ȣ���� 16���� ���� ��� (unsigned int) \n", fp);
	fputs("%f = 10���� ����� �ε� �Ҽ��� Ǯ��, (long) scanf�Լ����� = �Ǽ��� �Է¹޴´� \n", fp);
	fputs("%lf = 10���� ����� �ε��Ҽ��� ��� (long double) \n", fp);
	fputs("%e, %E = e �Ǵ� E ����� �ε��Ҽ��� �Ǽ� ��� (float, long double) \n", fp);
	fputs("%g, %G = ���� ���� %f�� %e ���̿��� ���� (float, double) \n", fp);
	fputs("%c = �ƽ�Ű �ڵ尪 ��� \n", fp);
	fputs("%s = ���ڿ� ���� ��� (�迭,���ڿ�) \n", fp);
	fputs("%p = �������� �ּҰ� \n", fp);
	fclose(fp);
	return 0;
}
int sansul(void)
{
    FILE* fp = fopen("c��� ���� ���幮��.txt", "at");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}
	fputs("\n",fp);
	fputs("��������� \n", fp);
	fputs("\n", fp);
	fputs("���Կ�����(=) �����ʿ� �ִ°��� ���ʿ� ���Խ�Ų��. \n", fp);
	fputs("���� ����(+,-) \n", fp);
	fputs("���� ������(*,/)\n", fp);
	fputs("�������� ��ȯ ������(%) ������ �ǿ����ڰ��� �������� �ǿ����ڰ����� �������� ��ԵǴ� �������� ��ȯ�Ѵ� \n", fp);
	fputs("\n",fp);
	fputs("����  ���� ������ \n", fp);
	fputs("\n", fp);
	fputs("*= ���ѵ� ����\n", fp);
	fputs("/= ������ ����\n", fp);
	fputs("%= �������� ����?\n", fp);
	fputs("+= ���ѵ� ����\n", fp);
	fputs("-= ���� ����\n", fp);
	fputs("<<=,>>= ��Ʈ���� ��,���������� �̵���Ų�� ���� \n", fp);
	fputs("&= ��Ʈ���� and ������ ����(�ΰ��� ��Ʈ�� ��� 1�϶� 1�� ��ȯ) \n", fp);
	fputs("|= ��Ʈ���� or ������ ����(�ΰ��� ��Ʈ�� �ϳ��� 1�ϰ�� 1�� ��ȯ) \n", fp);
	fputs("^= ��Ʈ���� xor ������ ����(�ΰ��� ��Ʈ�� ���� �ٸ���� 1��ȯ) \n", fp);
	fclose(fp);
	return 0;

}
int beat(void)
{
	FILE* fp = fopen("c��� ���� ���幮��.txt", "at");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	fputs("��Ʈ ������ \n",fp);
	fputs("\n", fp);
	fputs("& ��Ʈ������ and ������ �Ѵ�(�� ��Ʈ�� ��� 1�̾�� 1��ȯ) \n", fp);
	fputs("| ��Ʈ������ or ������ �Ѵ�(�� ��Ʈ�� �ϳ��� 1�̸� 1��ȯ) \n", fp);
	fputs("^ ��Ʈ������ xor ������ �Ѵ�(�� ��Ʈ�� �ٸ��� 1��ȯ) \n", fp);
	fputs("~ �ǿ������� ��� ��Ʈ�� ������Ų�� \n", fp);
	fputs("<< �ǿ������� ��Ʈ�� �������� �̵���Ų��(�̶��� ������� �����Ϸ����� �ٸ�) \n", fp);
	fputs(">> �ǿ������� ��Ʈ�� ���������� �̵���Ų��(�̶��� ������� �����Ϸ����� �ٸ�) \n", fp);
	fputs("\n", fp);
	fclose(fp);
	return 0;
	
}
int datetype(void)
{
	FILE* fp = fopen("c��� ���� ���幮��.txt", "at");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}
	fputs("������ �ڷ��� \n", fp);
	fputs("\n", fp);
	fputs("int = 4����Ʈ ����\n", fp);
	fputs("short = 2����Ʈ ���� \n", fp);
	fputs("char = 1����Ʈ ����(�ַ� ������ ���忡 �̿�) \n", fp);
	fputs("long = 4����Ʈ ���� \n", fp);
	fputs("long long = 8����Ʈ ���� \n", fp);
	fputs("float = 4����Ʈ �Ǽ� \n", fp);
	fputs("double = 8����Ʈ �Ǽ� \n", fp);
	fputs("long double = 8����Ʈ �̻� �Ǽ� (double �̻��� ǥ������) \n", fp);
	fputs("\n", fp);
	fputs("������ ǥ���� ������� �ʴ� �ڷ��� \n", fp);
	fputs("unsigned \" ������ ǥ���� ��������ʴ� Ű����\"\n", fp);
	fclose(fp);

	return 0;
}

int main(void)
{
	seosic();
	sansul();
	beat();
	datetype();
	
	return 0;
}





