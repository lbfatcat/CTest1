#include<stdio.h>

void displayThings(int iTem,int *arr, char *str)
{
	if(iTem!=1 || iTem!=2) return;
	if(iTem==1)
	{
		printf("Displaying the int array:\n");
		for(int i=0; i<5; i++)
			printf("item[%d] is: %d\n",i,arr[i]);
	}
	else
	{
		printf("Displaying the string:\n");
		printf("The string is: %s",str);
	}
	return;
}

int main(int argc, char *args[])
{
	int para= args[1][0]=='1'?1:2;
	if(argc>2){
		printf("only one argument is permitted!\n");
		return -1;
	}else if(para!=1 || para!=2){
		printf("only 1 or 2 is allowed as a argument!\n");
		return -1;
	}
	int a[5]={1,2,3,4,5};
	char *str= "hello.\0";
    displayThings(para,a,str);
	return 0;
}
