#include<stdio.h>
#include<stdlib.h>

int add(void);

int main(void){
	
    printf("2+4+6+~+100�[�`:%d\n", add());
    

    system("pause");

    return 0;
}
int add(void){

    static int sum_num=0;
    
    int a;

    for(a=2;a<=100;a+=2){
        sum_num+=a;
    }
    return sum_num;
}
