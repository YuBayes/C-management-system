void save()
{
	FILE *fp1;
	FILE *fp2;
	int sel;int i;
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t       ����ϵͳ\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t    1��  ȷ������\n");
	printf("\t\t    2��  ����׷������\n");
	printf("\t\t    3��  �˳�\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t  ���������ѡ��:");
re:
	scanf("%d",&sel);
	getchar();

	if(sel<1 || sel>3)
	{
		printf("����������:\n");
		goto re;
	}
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		fp1=fopen("����1.bat","w");
		fp2=fopen("����2.bat","w");

		fwrite(xm,sizeof(struct data1),MAX,fp1);
		fwrite(kinds,sizeof(struct data2),MAX,fp2);
		printf("���ݱ�����");
		for(i=0;i<6;i++)
		{
			printf(".");
			_sleep(500);
		}
		printf("\n���ݱ���ɹ���\n");
	}
	else if(sel==2)
	{
		fp1=fopen("����1.dat","a");
		fp2=fopen("����2.dat","a");

		fwrite(xm,sizeof(struct data1),MAX,fp1);
		fwrite(kinds,sizeof(struct data2),MAX,fp2);
		printf("���ݱ�����");
		for(i=0;i<6;i++)
		{
			printf(".");
			_sleep(500);
		}
		printf("\n���ݱ���ɹ���\n");
	}

	else
		printf("\n��������\n");

	fclose(fp1);
	fclose(fp2);
	system("pause");
}