void load()
{
	FILE *fp1;
	FILE *fp2;
	int sel;int i;
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t       ��ȡϵͳ\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t    1��  ȷ����ȡ\n");
	printf("\t\t    2��  �˳�\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t  ���������ѡ��:");
re:
	scanf("%d",&sel);
	getchar();

	if(sel<1 || sel>2)
	{
		printf("����������:\n");
		goto re;
	}
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		fp1=fopen("����1.dat","r");
		fp2=fopen("����2.dat","r");

		if(fp1 == NULL || fp2 ==NULL)
		{
			printf("�ļ���ȡʧ�ܣ������ļ��Ƿ�ȱʧ");
			goto end;
		}

		fread(xm,sizeof(struct data1),MAX,fp1);
		fread(kinds,sizeof(struct data2),MAX,fp2);
		printf("���ݶ�ȡ��");
		for(i=0;i<6;i++)
		{
			printf(".");
			_sleep(500);
		}
		printf("\n���ݶ�ȡ�ɹ���\n");
	}
	else
end:
		printf("\n��������\n");

	system("pause");
}