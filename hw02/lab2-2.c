#include <stdio.h>
int main() {
int i;
int *ptr;
int **dptr;
i = 1234;
char yourName[] = "이화진";
char studentID[] = "2020037103";

printf("[----- [%s]  [%s] -----]\n\n", yourName, studentID);// 단순출력
printf("[checking values before ptr = &i] \n"); //단순출력
printf("value of i == %d\n", i); // i의 밸류는 1234
printf("address of i == %p\n", &i); // i의 주소는 3260
printf("value of ptr == %p\n", ptr); // ptr의 값은 쓰레기값(값 세팅 전이라)
printf("address of ptr == %p\n", &ptr);// ptr의 주소는 3258로 지정됨

ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n"); 
printf("value of i == %d\n", i); // i의 밸류는 그대로
printf("address of i == %p\n", &i); // 역시 id의 주소도 그대로
printf("value of ptr == %p\n", ptr); // ptr에 값을 i의 주소로 넣었으니 3260
printf("address of ptr == %p\n", &ptr); // ptr주소 역시 여전함
printf("value of *ptr == %d\n", *ptr); // ptr밸류의 값을 참조 > 주소 3260의값 > 1234

dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n"); 
printf("value of i == %d\n", i); //위와 동일
printf("address of i == %p\n", &i); //위와 동일
printf("value of ptr == %p\n", ptr); //위와 동일
printf("address of ptr == %p\n", &ptr); //위와 동일
printf("value of *ptr == %d\n", *ptr); //위와 동일
printf("value of dptr == %p\n", dptr); // dptr의 값은 ptr의 주소 3258
printf("address of dptr == %p\n", &dptr); //dptr의 주소 3250
printf("value of *dptr == %p\n", *dptr); // ptr의 값을 출력(i의 주소) 3260
printf("value of **dptr == %d\n", **dptr); // i의 값을 출력 1234

*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 777] \n");
//i의 값이나 *ptr의 값이나 **dptr의 값은 같은 메모리 공간을 사용중이다.
printf("value of i == %d\n", i); // 7777
printf("value of *ptr == %d\n", *ptr); // 7777
printf("value of **dptr == %d\n", **dptr); // 7777

**dptr = 8888; /* changing the value of **dptr */
//i의 값이나 *ptr의 값이나 **dptr의 값은 같은 메모리 공간을 사용중이다.
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i); // 8888
printf("value of *ptr == %d\n", *ptr); // 8888
printf("value of **dptr == %d\n", **dptr);// 8888
return 0;
}