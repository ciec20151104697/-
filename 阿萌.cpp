#include<stdlib.h>
int main()
{
	FILE *fp;
	char *s;
	int flag;
	int len=0;
	if((fp=fopen("D:\\text","r"))==0)
	{
		printf("文件不能正常打开！");
		return(-1); 
	}
	flag=fseek(fp,100,SEEK_END);
	len=ftell(fp);
	s=(char *)malloc(len);
	printf("length=%d   flag=%d\n",len,flag);
	fclose(fp);
	return 0;
} 
