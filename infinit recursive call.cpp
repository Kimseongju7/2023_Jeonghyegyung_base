#include<stdio.h>
int i = 0;
void sub();
int main()
{
	sub();
	return 0;
}
void sub()
{
	printf("i = %d \n", ++i);
	sub(); // 유도 부분(inductive part)
}

//멈추기는 멈춤 강제종료됨. i=3987에 멈춤
//재귀호출은 시스템 스택을 사용하는데 호출될 때마다 복귀번지를 스택에 저장함.
//스택은 ram이라는 기억공간에 저장되는데 ram은 유한한 기억 공간임. 시스템 스택이 꽉 차면(system stack full)
//이 때 재귀함수를 또 호출하면 system stack overflow가 일어나서 강제 종료됨.
//호출하려면 복귀 번지를 저장해야 하는데 복지 번치를 넣을 공간이 없으니 os가 강제종료함
//즉 무한히 반복될 것 같은 코드라도 언젠가는 종료됨