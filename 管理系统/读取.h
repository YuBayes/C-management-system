void load()
{
	FILE *fp1;
	FILE *fp2;
	int sel;int i;
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t       读取系统\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t    1、  确定读取\n");
	printf("\t\t    2、  退出\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t  请输入你的选择:");
re:
	scanf("%d",&sel);
	getchar();

	if(sel<1 || sel>2)
	{
		printf("请重新输入:\n");
		goto re;
	}
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		fp1=fopen("数据1.dat","r");
		fp2=fopen("数据2.dat","r");

		if(fp1 == NULL || fp2 ==NULL)
		{
			printf("文件读取失败！请检查文件是否缺失");
			goto end;
		}

		fread(xm,sizeof(struct data1),MAX,fp1);
		fread(kinds,sizeof(struct data2),MAX,fp2);
		printf("数据读取中");
		for(i=0;i<6;i++)
		{
			printf(".");
			_sleep(500);
		}
		printf("\n数据读取成功！\n");
	}
	else
end:
		printf("\n即将返回\n");

	system("pause");
}