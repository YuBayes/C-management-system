void stat()
{
	int i;int n;int j;
	int sel;
	int sel1;
	int sel2;
	int sel3;

back:
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t     ��Ϣͳ��ϵͳ\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
		
	printf("\t\t    1����Ϣ����\n");
	printf("\t\t    2���豸һ��\n");
	printf("\t\t    3������ͳ��\n");
	printf("\t\t    4���˳�\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	tj();

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");


	printf("���������ѡ��:");

re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>4)
	{
		printf("����������:");
		goto re;
	}

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		sort();
		goto back;
	}
	else if(sel==2)
	{
		
		printf("\t\t    1����ʼ���\n");
		printf("\t\t    2���˳�\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("���������ѡ��:");

re2:
		scanf("%d",&sel2);
		getchar();
		if(sel2<1||sel>2)
		{
			printf("����������:");
			goto re2;
		}

		if(sel2==1)
		{
			for(n=0;n<MAX;n++)
			{
				if(xm[n].num==0)
					break;
			}

			for(i=1;i<20;i++)
				printf("----");
			printf("\n");

			printf("|");
			printf("%-10s","���");
			printf("|");
			printf("%-8s","����");
			printf("|");
			printf("%-12s","����");	
			printf("|");
			printf("%-5s","�۸�");
			printf("|");
			printf("%-11s","����ʱ��");	
			printf("|");
			printf("%-8s","�Ƿ񱨷�");	
			printf("|");
			printf("%-11s","����ʱ��");
			printf("|");
			printf("%s","��ע");

			printf("\n");

			for(i=1;i<20;i++)
				printf("----");
			printf("\n");

			for(j=0;j<n;j++)
			{
				printf("|");
				printf("%-10.0lf",xm[j].num);
				printf("|");
				printf("%-8s",xm[j].kind);
				printf("|");
				printf("%-12s",xm[j].name);
				printf("|");
				printf("%-5.2lf",xm[j].value);
				printf("|");
				printf("%-4d-%2d-%2d",xm[j].v_y,xm[j].v_m,xm[j].v_d);	
				printf("|");
				if(xm[j].bf==0)
				{
					printf("%-8s","��");	
					printf("|");
					printf("%-12s","/");
					printf("|");
				}
				else
				{
					printf("%-8s","��");	
					printf("|");
					printf("%-4d-%2d-%2d",xm[j].b_y,xm[j].b_m,xm[j].b_d);						
					printf("|");
					puts(xm[j].bz);
				}
				printf("\n");
				
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");
			}
			system("pause");
		}
		else
			;	

		goto back;
	}
	else if(sel==3)
	{
		����();
		goto back;
	}
	else
		;
}