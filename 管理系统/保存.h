void save()
{
	FILE *fp1;
	FILE *fp2;
	int sel;int i;
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t       保存系统\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t    1、  确定保存\n");
	printf("\t\t    2、  保存追加数据\n");
	printf("\t\t    3、  退出\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t  请输入你的选择:");
re:
	scanf("%d",&sel);
	getchar();

	if(sel<1 || sel>3)
	{
		printf("请重新输入:\n");
		goto re;
	}
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		fp1=fopen("数据1.bat","w");
		fp2=fopen("数据2.bat","w");

		fwrite(xm,sizeof(struct data1),MAX,fp1);
		fwrite(kinds,sizeof(struct data2),MAX,fp2);
		printf("数据保存中");
		for(i=0;i<6;i++)
		{
			printf(".");
			_sleep(500);
		}
		printf("\n数据保存成功！\n");
	}
	else if(sel==2)
	{
		fp1=fopen("数据1.dat","a");
		fp2=fopen("数据2.dat","a");

		fwrite(xm,sizeof(struct data1),MAX,fp1);
		fwrite(kinds,sizeof(struct data2),MAX,fp2);
		printf("数据保存中");
		for(i=0;i<6;i++)
		{
			printf(".");
			_sleep(500);
		}
		printf("\n数据保存成功！\n");
	}

	else
		printf("\n即将返回\n");

	fclose(fp1);
	fclose(fp2);
	system("pause");
}