#include<stdio.h>

typedef struct {
	int i;
	char ch;
}Em;

int main(){
	int a[6]={1,2,4,8,16,1<<15};
	int *i;
	char *ch;
	Em *emPtr;
	i=&a[5];
	ch=(char *)i;
	printf("256 converted to ch ptr:%d\n",*ch);
	i=&a[4];
	ch=(char *)i;
	printf("16 converted to ch ptr:%d\n",*ch);
	printf("Then let ch ptr increment.Now ch ptr:%d\n",*(++ch));
	Em em;
	em.i=256;
	em.ch=64;
	emPtr=&em;
	ch=(char *)emPtr;
	printf("The size of struct(int,char) is %d\n",sizeof(em));
	printf("The first byte of struct(int:256,char:64) is %d\n",*ch);
	printf("The second byte is %d\n",*(++ch));
	printf("The third byte is %d\n",*(++ch));
	printf("The forth byte is %d\n",*(++ch));
	printf("The last byte is %d\n",*(++ch));
	return 0;
}
