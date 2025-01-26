#include <stdio.h>
#include <unistd.h>
int main()
{
printf("Hello world");
int i;
for ( i = 1; i < 21; i++){
printf("%d\n", i);
sleep(1);
}
printf("Bye");
	return 0;

 }

