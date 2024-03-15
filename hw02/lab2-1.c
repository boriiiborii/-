#include <stdio.h> 
int main()
{
      char charType;
      int integerType;
      float floatType;
      double doubleType;
printf("Size of char: %ld byte\n",sizeof(charType)); //char 타입의 변수 사이즈는1
printf("Size of int: %ld bytes\n",sizeof(integerType)); //int 타입의 변수 사이즈는4
printf("Size of float: %ld bytes\n",sizeof(floatType));  //float 타입의 변수 사이즈는4
printf("Size of double: %ld bytes\n",sizeof(doubleType)); //double 타입의 변수 사이즈는8
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); //char 타입의 사이즈는1
printf("Size of int: %ld bytes\n",sizeof(int)); //int 타입의 사이즈는4
printf("Size of float: %ld bytes\n",sizeof(float));  //float 타입의 사이즈는4
printf("Size of double: %ld bytes\n",sizeof(double)); //double 타입의 사이즈는8
printf("-----------------------------------------\n");
//주소는 현재 32비트 cpu의 주소체계를 쓰다보니 어떤 타입이던 주소값의 크기는 동일하게 8바이트인것을 확인할 수 있다.
//주소값의 길이는 타입과 상관없이 몇비트의 cpu를 쓰느냐에 따라서 달라진다. (32비트는 8바이트)
printf("Size of char*: %ld byte\n",sizeof(char*)); 
printf("Size of int*: %ld bytes\n",sizeof(int*)); 
printf("Size of float*: %ld bytes\n",sizeof(float*)); 
printf("Size of double*: %ld bytes\n",sizeof(double*));
return 0; }