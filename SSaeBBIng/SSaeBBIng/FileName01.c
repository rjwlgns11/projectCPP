//
//// ���� ���ٰ� ��带 �־��
//// ����� �߰�.
//// ���ϴ� ��ġ 
//// ���� �Ű�������?
//// SLL_InsertBefore(&List,current,newnode);//����Ʈ, �����Լ����� ������ ������ �� (����)��ġ, �����Լ��� ������ �߰��� ���
//void SLL_InsertBefore(node** head, node* current, node* newnode)//����Ʈ , �׸��� �߰��ؾ��� ��ġ, �߰��� �����
//{
//    node*temp = (*head);
//    if(head==NULL)
//    {
//       newnode->nextnode = NULL;
//       (*head)=newnode;
//    }
//    else
//    {
//        while(temp->nextnode != current)//���� �������� ������ ��ġ��  �����ϸ� ����!
//        { 
//            temp=temp->nextnode;//�ӽ� ����Ʈ ���������� �Ѿ����
//            
//        }
//        newnode->nextnode = temp->nextnode;
//        temp=newnode;//�ӽð����� �ؾ��ϳ�? ���� �ӽð����� �ؾ���
//    } 
//}