#include "FileName.h"

int main()
{
	int i=0;
	int count=0;
	node* list=NULL;//리스트를 형성함 우선 널값 가리킴
	node* current=NULL;//임시노드
	node* Newnode = NULL;//다음 노드값 설정

	for (int i = 0; i < 5; i++)//노드 5개 추가
	{
		Newnode = SLL_CreateNode(i);//새로 만들 노드는 뉴 노드이다 값을 0.1.2.3....
		SLL_AppendNode(&list, Newnode);//리스트에 삽입 값은 0.1.2.3...
	}

	Newnode = SLL_CreateNode(-1);//삽입할 노드는  -1이다.
	SLL_InsertNewNode(&list, Newnode);//리스트의 주소값과 새 노드를 인자로 전달해 리스트에 삽입한다...

	Newnode = SLL_CreateNode(-2);//2
	SLL_InsertNewNode(&list, Newnode);//위와동일

	//리스트 출력
	count = SLL_GetNodeCount(list);//리스트의 길이를 계산한다.
	for (i = 0; i < count; i++)//길이값만큼 반복
	{
		current = SLL_GetNodeAt(list, i);//임시 노드값을 출력
		printf("List[%d]:%d\n", i, current->data);//현재 로케이션값과 현재 노드값의 출력
	}

	//리스트의 3번째 노드뒤에 새로운 노드 삽입

	printf("Intersting 3000 After[2]..\n\n");

	current = SLL_GetNodeAt(list, 2);//리스트 노드 2(3)번에 값을 삽일할거다
	Newnode = SLL_CreateNode(3000);//그 값은 3천
	
	SLL_InsertAfter(current, Newnode);//리스트 2번과 값 3천을 "추가" 연산 

	//리스트 출력
	count = SLL_GetNodeCount(list);//리스트의 길이값을 인자로 전달받는다
	for (i = 0; i < count; i++)
	{
		current = SLL_GetNodeAt(list, i);//리스트와 실행 포인트 0.1.2.3.....
		printf("List[%d]:%d\n", i, current->data);//실행 포인트와 현재 임시 리스트값의 출력...
	}




	printf("3번 노드 앞(2번 노드)에 값을 대입.\n");//여기서
	Newnode = SLL_CreateNode(1500);
	current = SLL_GetNodeAt(list, 3);//삽입할 위치는 3번으로(헤드) 지정

	SLL_InsertBefore(&list, current, Newnode);//여기까지



	count = SLL_GetNodeCount(list);//리스트의 길이를 계산한다. //여기서 
	for (i = 0; i < count; i++)//길이값만큼 반복
	{
		current = SLL_GetNodeAt(list, i);//임시 노드값을 출력
		printf("List[%d]:%d\n", i, current->data);//현재 로케이션값과 현재 노드값의 출력
	}//여기도

	
	printf("Destroying List...\n");//리스트 파괴
	count = SLL_GetNodeCount(list);
	printf("리스트 전부 파괴 함수 발동전 노드 갯수 : %d\n", count);
	SLL_DestroyAllnode(&list);

	//for (i = 0; i < count; i++)
	//{
	//	current = SLL_GetNodeAt(list, 0);//리스트와 실행 포인트 0.1.2.3.....
	//	if (current != NULL)//임시 리스트값이 널을 만나면 다음 데이터 값을 삭제하고 노드를 파괴한다.
	//	{
	//		SLL_RemoveNode(&list, current);//데이터 값의 "삭제"
	//		SLL_DestroyNode(current);//노드의 "파괴"
	//	}
	//}//야이 미친놈아 여기서 이미 리스트를 모조리 파괴했잖아
	//그러니 자꾸 널값 역참조가 뜨지 시발
	/*SLL_DestroyAllnode(&list);*/ //수정요망
	//함수에서 리스트 직접대입은 하지않는다.

	if (list == NULL)
	{
		printf("리스트가 모두 파괴된 상태임\n");//얘는 왜 발동 안함
	}
	

	

	return 0;
}

node* SLL_CreateNode(ElementType Newdata)//저장할 데이터를 매개변수로 받기
{
	node* newnode = (node*)malloc(sizeof(node));//새 노드 생성
	newnode->data = Newdata;//매개변수로 받은 데이터를 저장...인데 왜 역참조남?
	newnode->nextnode = NULL;//새 노드값은 널값을 가리킴...다음 노드를 받을 준비를 하는거임
	return newnode;//노드의 주소값을 리턴(널값.꼬리값)

}
void SLL_DestroyNode(node* node)//파괴할 노드를 매개변수로 받음
{
	free(node);//매개변수를 힙에서 파괴

}
void SLL_AppendNode(node** Head, node* Newnode)
{
	//헤드 노드가 널값이면 새로운 노드가 헤드가 된다.
	if ((*Head) == NULL)//리스트의 주소가 널값을 가리키고있으면
	{
		*Head = Newnode;//
	}
	else //테일을 찾아 노드를 연결한다.
	{
		node* Tail = (*Head);//테일은 리스트에 들어간 헤드 포인터(nextnode)를 가리키게 된다.
		while (Tail->nextnode != NULL)//테일.nextnode가 널값을 가리키면 정지
		{
			Tail = Tail->nextnode;//테일은 (이게 이해가 잘 안되네.)

		}
		Tail->nextnode = Newnode;//꼬리의 nextnode는 다음 새 노드의 값을 가리키고있다.(구조체 포인터 변수를 선언했기에 자연스럽게 연결 가능)
	}
}
void SLL_InsertAfter(node* current, node* newnode)//노드 "삽입(추가)연산", 임시 노드와  데이터값을 매개변수로 받음
{
	newnode->nextnode = current->nextnode;//삽입할 노드는 인자로 전달될 노드를 가리킨다
	current->nextnode = newnode;//인자로 전달될 노드는 다음 노드를 가리킨다
}
void SLL_InsertNewNode(node** Head, node* Newnode)//노드 삽입 insertnewHead임 
{
	if (Head == NULL)//리스트 포인터가 널값이면
	{
		(*Head) = Newnode;//리스트의 헤드는 새 노드임
	}
	else//아니면
	{
		Newnode->nextnode = (*Head);//새 노드의 포인터는 헤드를 가리킨다
		(*Head) = Newnode;//리스트의 포인터는 다음 노드를 가리킨다
	}
}
void SLL_RemoveNode(node** Head, node* remove)//노드 제거 리스트와 제거할 노드를 선택
{
	if (*Head == remove)//리스트의 노드와 제거할 노드가 같으면 
	{
		*Head = remove->nextnode;//리스트의 헤드 값은 넥스트 노드를 
	}
	else
	{
		node* current = *Head;//제거할 노드의 공간을 임시로 만들어준다 왜 여기서는 되는데 밑에서는 안되지?
		while (current != NULL && current->nextnode != remove)//임시 노드가 널값이거나 임시노드의 포인터 값이 삭제할 노드의 값과 일치하지 않으면
		{
			current = current->nextnode;//임시 리스트는 저 조건이 일치할때까지 다음 노드를 찾아감
		}
		if (current != NULL)//임시 리스트가 널값이 아니면?
		{
			current->nextnode = remove->nextnode;//임시 리스트의 포인터는 삭제값 노드 를 가리킴
		}
	}
}
node* SLL_GetNodeAt(node* head, int location)//노드 탐색, 노드형이기 때문에 리턴형이 노드로 가능 로케이션값은 반복문의 I값
{
	node* current = head;//임시노드 생성 리스트의 헤드값을 가리킴
	while (current != NULL && (--location) >= 0)//임시노드가 끝을 만나거나 로케이션 값이 0보다 크거나 같으면 실행
	{
		current = current->nextnode;//임시주소값 다음 노드를 찾음 간단하게 생각하면됨 넥스트 노드가 나왔다? "다음 노드" 임
	}
	return current;//임시노드의 주소값을 뱉는다(사실상 마지막 노드주소값)
}
int SLL_GetNodeCount(node* Head)
{
	int count = 0;//임시 길이 추가
	node* current = Head;//임시 노드 생성
	while (current != NULL)//임시 노드가 널값을 만나면
	{
		current = current->nextnode;//임시노드는 다음 노드를 가리킨다
		count++;//길이 증가
	}
	return count;
}
void SLL_InsertBefore(node** head, node* current, node* newnode)//리스트 , 그리고 추가해야할 위치, 추가할 새노드
{


    if((*head==current))//만일 삽입하려는 위치가 헤드라면(더블이 아니라 어쩔수가 없다)
    {
       newnode->nextnode = (*head);//새노드는 위치 노드를 가리키고
       (*head)=newnode;//헤드는 새 노드이다.
	   //헤드가 새 노드가 되고 나머지는 위치 노드(0번 이후 값이 자연스레 이어진다) 
    }
    else
    {
		node* temp = *head; //리스트의 임시값 지정 참조연산자로 인해 temp는 사실상 리스트와 동일한값을 지님
		//현재 위치값은 3을 가리키고있음 2에 들어가야됨 
		while (temp->nextnode!=current)//위치와 동일할때까지(1칸전)2
		{
			temp = temp->nextnode;//다음 노드로 이동, 왜째서 됨? 이동하는 것은 임시값이고 보존은 된다. 
			//설사 이게 된다 한들 리스트에 대입될거라 또 앞자리가 짤리는 문제가 발생할텐데?
		}
		newnode->nextnode = current;//새노드에 위치값 연결 
		temp->nextnode= newnode;//리스트 대입까진 어케 한다 치자 근데 다음은?
		//이게 맞음 current는 현재 1칸 더 전진하고 난 후에 삽입되고 있기 때문에
		//인덱스값(?)에 대입되는게 맞는거임!!!!!!!!!!!!!!!!!!!!!!!

		
		//새 노드가 위치 노드를 가리키고
		//헤드를 기준으로 이전 위치를 찾아가려면 찾는 과정에서 이전노드가 짤리는 현상이 자꾸 발생.
		//위치노드와 동일하게 맞춰준다? 해봄
		// 새 노드를 어떻게 이전노드에 맞춰서 넣을까. 
		// 수식은 머리에 있는데 헤드를 건드릴수가 없다
		// 헤드를 건드리지않고
		// 새 노드를 위치노드 이전값에 넣기
		//임시 값을 만들어 해결해볼까.
		//근데 임시값을 만들어도 헤드 값은 움직이질 않는다.

		////newnode->nextnode = current;//이전값에 들어가야하니 이건 무조건이다.
		//문제는 새 노드를 어케 쑤셔넣는가
		//위치값 이전까지 이동한 상태에서 다음 문장을 넣는다
		//(*head)->nextnode=newnode;
		//newnode=(*head);
	
		//(*head)->nextnode = newnode;
		
		//newnode->nextnode = current;
		
		//(*head)->nextnode=newnode;//뒷 노드가 모조리 잘려버린 끔찍한 사태가 발생
		
		
       
    } 
	//수정요망!
}
void SLL_DestroyAllnode(node** head)//매개변수를 리스트 단 하나만 받음. 여기서 제거 파괴 다해야함
{
	
	node* temp = *head;
	node* remove = *head;
	printf("받아온 값 %d:\n", remove->data);
	while (temp != NULL)
	{
		printf("헤드값 %d\n", (*head)->data);
		SLL_RemoveNode(&temp, remove);//리스트에 직접 대입이 안댐... 어차피 말록 함수로 만든 포인터라
		SLL_DestroyNode(remove);//temp로 지워도 실제로 힙에서 사라진다.
	
		remove = temp;
		*head = temp;//일일히 대입해주면서 하나씩 지워나간다.


		if (*head == NULL)//왜 temp는 되고 head는 안될까?
		{
			
			break;
		}
		
		
	}
	return;

}