#include "FileName.h"

int main()
{
	int i=0;
	int count=0;
	node* list=NULL;//����Ʈ�� ������ �켱 �ΰ� ����Ŵ
	node* current=NULL;//�ӽó��
	node* Newnode = NULL;//���� ��尪 ����

	for (int i = 0; i < 5; i++)//��� 5�� �߰�
	{
		Newnode = SLL_CreateNode(i);//���� ���� ���� �� ����̴� ���� 0.1.2.3....
		SLL_AppendNode(&list, Newnode);//����Ʈ�� ���� ���� 0.1.2.3...
	}

	Newnode = SLL_CreateNode(-1);//������ ����  -1�̴�.
	SLL_InsertNewNode(&list, Newnode);//����Ʈ�� �ּҰ��� �� ��带 ���ڷ� ������ ����Ʈ�� �����Ѵ�...

	Newnode = SLL_CreateNode(-2);//2
	SLL_InsertNewNode(&list, Newnode);//���͵���

	//����Ʈ ���
	count = SLL_GetNodeCount(list);//����Ʈ�� ���̸� ����Ѵ�.
	for (i = 0; i < count; i++)//���̰���ŭ �ݺ�
	{
		current = SLL_GetNodeAt(list, i);//�ӽ� ��尪�� ���
		printf("List[%d]:%d\n", i, current->data);//���� �����̼ǰ��� ���� ��尪�� ���
	}

	//����Ʈ�� 3��° ���ڿ� ���ο� ��� ����

	printf("Intersting 3000 After[2]..\n\n");

	current = SLL_GetNodeAt(list, 2);//����Ʈ ��� 2(3)���� ���� �����ҰŴ�
	Newnode = SLL_CreateNode(3000);//�� ���� 3õ
	
	SLL_InsertAfter(current, Newnode);//����Ʈ 2���� �� 3õ�� "�߰�" ���� 

	//����Ʈ ���
	count = SLL_GetNodeCount(list);//����Ʈ�� ���̰��� ���ڷ� ���޹޴´�
	for (i = 0; i < count; i++)
	{
		current = SLL_GetNodeAt(list, i);//����Ʈ�� ���� ����Ʈ 0.1.2.3.....
		printf("List[%d]:%d\n", i, current->data);//���� ����Ʈ�� ���� �ӽ� ����Ʈ���� ���...
	}




	printf("3�� ��� ��(2�� ���)�� ���� ����.\n");//���⼭
	Newnode = SLL_CreateNode(1500);
	current = SLL_GetNodeAt(list, 3);//������ ��ġ�� 3������(���) ����

	SLL_InsertBefore(&list, current, Newnode);//�������



	count = SLL_GetNodeCount(list);//����Ʈ�� ���̸� ����Ѵ�. //���⼭ 
	for (i = 0; i < count; i++)//���̰���ŭ �ݺ�
	{
		current = SLL_GetNodeAt(list, i);//�ӽ� ��尪�� ���
		printf("List[%d]:%d\n", i, current->data);//���� �����̼ǰ��� ���� ��尪�� ���
	}//���⵵

	
	printf("Destroying List...\n");//����Ʈ �ı�
	count = SLL_GetNodeCount(list);
	printf("����Ʈ ���� �ı� �Լ� �ߵ��� ��� ���� : %d\n", count);
	SLL_DestroyAllnode(&list);

	//for (i = 0; i < count; i++)
	//{
	//	current = SLL_GetNodeAt(list, 0);//����Ʈ�� ���� ����Ʈ 0.1.2.3.....
	//	if (current != NULL)//�ӽ� ����Ʈ���� ���� ������ ���� ������ ���� �����ϰ� ��带 �ı��Ѵ�.
	//	{
	//		SLL_RemoveNode(&list, current);//������ ���� "����"
	//		SLL_DestroyNode(current);//����� "�ı�"
	//	}
	//}//���� ��ģ��� ���⼭ �̹� ����Ʈ�� ������ �ı����ݾ�
	//�׷��� �ڲ� �ΰ� �������� ���� �ù�
	/*SLL_DestroyAllnode(&list);*/ //�������
	//�Լ����� ����Ʈ ���������� �����ʴ´�.

	if (list == NULL)
	{
		printf("����Ʈ�� ��� �ı��� ������\n");//��� �� �ߵ� ����
	}
	

	

	return 0;
}

node* SLL_CreateNode(ElementType Newdata)//������ �����͸� �Ű������� �ޱ�
{
	node* newnode = (node*)malloc(sizeof(node));//�� ��� ����
	newnode->data = Newdata;//�Ű������� ���� �����͸� ����...�ε� �� ��������?
	newnode->nextnode = NULL;//�� ��尪�� �ΰ��� ����Ŵ...���� ��带 ���� �غ� �ϴ°���
	return newnode;//����� �ּҰ��� ����(�ΰ�.������)

}
void SLL_DestroyNode(node* node)//�ı��� ��带 �Ű������� ����
{
	free(node);//�Ű������� ������ �ı�

}
void SLL_AppendNode(node** Head, node* Newnode)
{
	//��� ��尡 �ΰ��̸� ���ο� ��尡 ��尡 �ȴ�.
	if ((*Head) == NULL)//����Ʈ�� �ּҰ� �ΰ��� ����Ű��������
	{
		*Head = Newnode;//
	}
	else //������ ã�� ��带 �����Ѵ�.
	{
		node* Tail = (*Head);//������ ����Ʈ�� �� ��� ������(nextnode)�� ����Ű�� �ȴ�.
		while (Tail->nextnode != NULL)//����.nextnode�� �ΰ��� ����Ű�� ����
		{
			Tail = Tail->nextnode;//������ (�̰� ���ذ� �� �ȵǳ�.)

		}
		Tail->nextnode = Newnode;//������ nextnode�� ���� �� ����� ���� ����Ű���ִ�.(����ü ������ ������ �����߱⿡ �ڿ������� ���� ����)
	}
}
void SLL_InsertAfter(node* current, node* newnode)//��� "����(�߰�)����", �ӽ� ����  �����Ͱ��� �Ű������� ����
{
	newnode->nextnode = current->nextnode;//������ ���� ���ڷ� ���޵� ��带 ����Ų��
	current->nextnode = newnode;//���ڷ� ���޵� ���� ���� ��带 ����Ų��
}
void SLL_InsertNewNode(node** Head, node* Newnode)//��� ���� insertnewHead�� 
{
	if (Head == NULL)//����Ʈ �����Ͱ� �ΰ��̸�
	{
		(*Head) = Newnode;//����Ʈ�� ���� �� �����
	}
	else//�ƴϸ�
	{
		Newnode->nextnode = (*Head);//�� ����� �����ʹ� ��带 ����Ų��
		(*Head) = Newnode;//����Ʈ�� �����ʹ� ���� ��带 ����Ų��
	}
}
void SLL_RemoveNode(node** Head, node* remove)//��� ���� ����Ʈ�� ������ ��带 ����
{
	if (*Head == remove)//����Ʈ�� ���� ������ ��尡 ������ 
	{
		*Head = remove->nextnode;//����Ʈ�� ��� ���� �ؽ�Ʈ ��带 
	}
	else
	{
		node* current = *Head;//������ ����� ������ �ӽ÷� ������ش� �� ���⼭�� �Ǵµ� �ؿ����� �ȵ���?
		while (current != NULL && current->nextnode != remove)//�ӽ� ��尡 �ΰ��̰ų� �ӽó���� ������ ���� ������ ����� ���� ��ġ���� ������
		{
			current = current->nextnode;//�ӽ� ����Ʈ�� �� ������ ��ġ�Ҷ����� ���� ��带 ã�ư�
		}
		if (current != NULL)//�ӽ� ����Ʈ�� �ΰ��� �ƴϸ�?
		{
			current->nextnode = remove->nextnode;//�ӽ� ����Ʈ�� �����ʹ� ������ ��� �� ����Ŵ
		}
	}
}
node* SLL_GetNodeAt(node* head, int location)//��� Ž��, ������̱� ������ �������� ���� ���� �����̼ǰ��� �ݺ����� I��
{
	node* current = head;//�ӽó�� ���� ����Ʈ�� ��尪�� ����Ŵ
	while (current != NULL && (--location) >= 0)//�ӽó�尡 ���� �����ų� �����̼� ���� 0���� ũ�ų� ������ ����
	{
		current = current->nextnode;//�ӽ��ּҰ� ���� ��带 ã�� �����ϰ� �����ϸ�� �ؽ�Ʈ ��尡 ���Դ�? "���� ���" ��
	}
	return current;//�ӽó���� �ּҰ��� ��´�(��ǻ� ������ ����ּҰ�)
}
int SLL_GetNodeCount(node* Head)
{
	int count = 0;//�ӽ� ���� �߰�
	node* current = Head;//�ӽ� ��� ����
	while (current != NULL)//�ӽ� ��尡 �ΰ��� ������
	{
		current = current->nextnode;//�ӽó��� ���� ��带 ����Ų��
		count++;//���� ����
	}
	return count;
}
void SLL_InsertBefore(node** head, node* current, node* newnode)//����Ʈ , �׸��� �߰��ؾ��� ��ġ, �߰��� �����
{


    if((*head==current))//���� �����Ϸ��� ��ġ�� �����(������ �ƴ϶� ��¿���� ����)
    {
       newnode->nextnode = (*head);//������ ��ġ ��带 ����Ű��
       (*head)=newnode;//���� �� ����̴�.
	   //��尡 �� ��尡 �ǰ� �������� ��ġ ���(0�� ���� ���� �ڿ����� �̾�����) 
    }
    else
    {
		node* temp = *head; //����Ʈ�� �ӽð� ���� ���������ڷ� ���� temp�� ��ǻ� ����Ʈ�� �����Ѱ��� ����
		//���� ��ġ���� 3�� ����Ű������ 2�� ���ߵ� 
		while (temp->nextnode!=current)//��ġ�� �����Ҷ�����(1ĭ��)2
		{
			temp = temp->nextnode;//���� ���� �̵�, ��°�� ��? �̵��ϴ� ���� �ӽð��̰� ������ �ȴ�. 
			//���� �̰� �ȴ� �ѵ� ����Ʈ�� ���ԵɰŶ� �� ���ڸ��� ©���� ������ �߻����ٵ�?
		}
		newnode->nextnode = current;//����忡 ��ġ�� ���� 
		temp->nextnode= newnode;//����Ʈ ���Ա��� ���� �Ѵ� ġ�� �ٵ� ������?
		//�̰� ���� current�� ���� 1ĭ �� �����ϰ� �� �Ŀ� ���Եǰ� �ֱ� ������
		//�ε�����(?)�� ���ԵǴ°� �´°���!!!!!!!!!!!!!!!!!!!!!!!

		
		//�� ��尡 ��ġ ��带 ����Ű��
		//��带 �������� ���� ��ġ�� ã�ư����� ã�� �������� ������尡 ©���� ������ �ڲ� �߻�.
		//��ġ���� �����ϰ� �����ش�? �غ�
		// �� ��带 ��� ������忡 ���缭 ������. 
		// ������ �Ӹ��� �ִµ� ��带 �ǵ帱���� ����
		// ��带 �ǵ帮���ʰ�
		// �� ��带 ��ġ��� �������� �ֱ�
		//�ӽ� ���� ����� �ذ��غ���.
		//�ٵ� �ӽð��� ���� ��� ���� �������� �ʴ´�.

		////newnode->nextnode = current;//�������� �����ϴ� �̰� �������̴�.
		//������ �� ��带 ���� ���ųִ°�
		//��ġ�� �������� �̵��� ���¿��� ���� ������ �ִ´�
		//(*head)->nextnode=newnode;
		//newnode=(*head);
	
		//(*head)->nextnode = newnode;
		
		//newnode->nextnode = current;
		
		//(*head)->nextnode=newnode;//�� ��尡 ������ �߷����� ������ ���°� �߻�
		
		
       
    } 
	//�������!
}
void SLL_DestroyAllnode(node** head)//�Ű������� ����Ʈ �� �ϳ��� ����. ���⼭ ���� �ı� ���ؾ���
{
	
	node* temp = *head;
	node* remove = *head;
	printf("�޾ƿ� �� %d:\n", remove->data);
	while (temp != NULL)
	{
		printf("��尪 %d\n", (*head)->data);
		SLL_RemoveNode(&temp, remove);//����Ʈ�� ���� ������ �ȴ�... ������ ���� �Լ��� ���� �����Ͷ�
		SLL_DestroyNode(remove);//temp�� ������ ������ ������ �������.
	
		remove = temp;
		*head = temp;//������ �������ָ鼭 �ϳ��� ����������.


		if (*head == NULL)//�� temp�� �ǰ� head�� �ȵɱ�?
		{
			
			break;
		}
		
		
	}
	return;

}