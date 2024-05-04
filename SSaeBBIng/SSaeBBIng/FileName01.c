//
//// 이전 에다가 노드를 넣어라
//// 노드의 추가.
//// 원하는 위치 
//// 받을 매개변수는?
//// SLL_InsertBefore(&List,current,newnode);//리스트, 메인함수에서 정의한 저장해 줄 (이전)위치, 메인함수에 정의한 추가할 노드
//void SLL_InsertBefore(node** head, node* current, node* newnode)//리스트 , 그리고 추가해야할 위치, 추가할 새노드
//{
//    node*temp = (*head);
//    if(head==NULL)
//    {
//       newnode->nextnode = NULL;
//       (*head)=newnode;
//    }
//    else
//    {
//        while(temp->nextnode != current)//만약 다음값이 대입할 위치와  동일하면 멈춰!
//        { 
//            temp=temp->nextnode;//임시 리스트 다음값으로 넘어가보자
//            
//        }
//        newnode->nextnode = temp->nextnode;
//        temp=newnode;//임시값으로 해야하나? ㅇㅇ 임시값으로 해야함
//    } 
//}