void sort()
{
	int i;int n;
	int sel;
	int sel1;
	int sel2;
	int sel3;

back:
	system("cls");
	
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
		
	printf("\t\t    1�����������\n");
	printf("\t\t    2������������\n");
	printf("\t\t    3��������ʱ������\n");
	printf("\t\t    4�����۸�����\n");
	printf("\t\t    5���˳�\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("���������ѡ��:");
re:
	scanf("%d",&sel);
	getchar();

	if(sel<1||sel>5)
	{
		printf("����������:");
		goto re;
	}

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		printf("\t\t    1����������\n");//��С����
		printf("\t\t    2����������\n");//�Ӵ�С
		printf("\t\t    3���˳�\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("���������ѡ��:");
re1:
		scanf("%d",&sel1);
		getchar();

		if(sel1<1||sel1>3)
		{
			printf("����������:");
			getchar();
			goto re1;
		}

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		for(n=0;n<MAX;n++)
		{
			if(xm[n].num==0)
				break;
		}

		if(sel1==1)
		{
			qsort(xm,n,sizeof(xm[0]),Comp11);

			printf("������");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n����ɹ���\n");
			system("pause");
		}
		else if(sel1==2)
		{
			qsort(xm,n,sizeof(xm[0]),Comp12);

			printf("������");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n����ɹ���\n");
			system("pause");
		}
		else
			;

		goto back;
	}
	else if(sel==2)
	{
		printf("\t\t    1����������\n");//��С����
		printf("\t\t    2����������\n");//�Ӵ�С
		printf("\t\t    3���˳�\n");
		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("���������ѡ��:");
re12:
		scanf("%d",&sel1);
		getchar();

		if(sel1<1||sel1>3)
		{
			printf("����������:");
			getchar();
			goto re12;
		}

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");
		
		n=k_sort();

		if(sel1==1)
		{
			qsort(xm,n,sizeof(xm[0]),Comp21);

			printf("������");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n����ɹ���\n");
			system("pause");
		}
		else if(sel1==2)
		{
			qsort(xm,n,sizeof(xm[0]),Comp22);

			printf("������");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n����ɹ���\n");
			system("pause");
		}
		else
			;

		goto back;
	}
	else if(sel==3)
	{
		printf("\t\t    1��ʱ����µ���\n");
		printf("\t\t    2��ʱ��Ӿɵ���\n");
		printf("\t\t    3���˳�\n");
		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("���������ѡ��:");
re13:
		scanf("%d",&sel1);
		getchar();

		if(sel1<1||sel1>3)
		{
			printf("����������:");
			goto re13;
		}

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		for(n=0;n<MAX;n++)
		{
			if(xm[n].num==0)
				break;
		}
		
		if(sel1==1)
		{
			qsort(xm,n,sizeof(xm[0]),Comp32);

			printf("������");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n����ɹ���\n");
			system("pause");
		}
		else if(sel1==2)
		{
			qsort(xm,n,sizeof(xm[0]),Comp31);

			printf("������");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n����ɹ���\n");
			system("pause");
		}
		else
			;

		goto back;
	}
	else if(sel==4)
	{
		printf("\t\t    1����������\n");//��С����
		printf("\t\t    2����������\n");//�Ӵ�С
		printf("\t\t    3���˳�\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("���������ѡ��:");
re14:
		scanf("%d",&sel1);
		getchar();

		if(sel1<1||sel1>3)
		{
			printf("����������:");
			getchar();
			goto re14;
		}

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		for(n=0;n<MAX;n++)
		{
			if(xm[n].num==0)
				break;
		}

		if(sel1==1)
		{
			qsort(xm,n,sizeof(xm[0]),Comp41);

			printf("������");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n����ɹ���\n");
			system("pause");
		}
		else if(sel1==2)
		{
			qsort(xm,n,sizeof(xm[0]),Comp42);

			printf("������");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n����ɹ���\n");
			system("pause");
		}
		else
			;

		goto back;
	}
	else
		;
}