#include <stdio.h> //정보통신공학부 2020037103 이화진
int main() {
               int i, *p;
               i = 10;
               printf("value of i = %d\n", i); //10 i의 밸류는 10
               printf("address of i = %p\n", &i); //0x16bb73298 i의 값을 가지고 있는 주소는 3298
               printf("value of p = %p\n", p); //0x10428fe20 p의 밸류는 fe20(p가 초기화 되지 않은상태라 쓰레기값이 들어가있음)
               printf("address of p = %p\n", &p); //0x16bb73290 p의 값을 가지고 있는 주소는 3290
               p = &i; // i의 주소를 p에 세팅
               printf("\n\n----- after p = &i ------------\n\n"); 
               printf("value of p = %p\n", p); //0x16bb73298 i의 주소가 세팅되었으므로 p는 3298
               printf("address of p = %p\n", &p); //0x16bb73290 p의 값을 가지고 있는 주소는 여전히 3290 (값이 3298로 바뀐것 뿐)
               printf("dereferencing *p = %d\n", *p); //10 i의 주소가 세팅되어있는 p의 포인터값(밸류값)은 i의 밸류인 10
return 0; }