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
		
	printf("\t\t    1、按编号排序\n");
	printf("\t\t    2、按种类排序\n");
	printf("\t\t    3、按购买时间排序\n");
	printf("\t\t    4、按价格排序\n");
	printf("\t\t    5、退出\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("请输入你的选择:");
re:
	scanf("%d",&sel);
	getchar();

	if(sel<1||sel>5)
	{
		printf("请重新输入:");
		goto re;
	}

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		printf("\t\t    1、升序排序\n");//从小到大
		printf("\t\t    2、降序排序\n");//从大到小
		printf("\t\t    3、退出\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("请输入你的选择:");
re1:
		scanf("%d",&sel1);
		getchar();

		if(sel1<1||sel1>3)
		{
			printf("请重新输入:");
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

			printf("排序中");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n排序成功！\n");
			system("pause");
		}
		else if(sel1==2)
		{
			qsort(xm,n,sizeof(xm[0]),Comp12);

			printf("排序中");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n排序成功！\n");
			system("pause");
		}
		else
			;

		goto back;
	}
	else if(sel==2)
	{
		printf("\t\t    1、升序排序\n");//从小到大
		printf("\t\t    2、降序排序\n");//从大到小
		printf("\t\t    3、退出\n");
		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("请输入你的选择:");
re12:
		scanf("%d",&sel1);
		getchar();

		if(sel1<1||sel1>3)
		{
			printf("请重新输入:");
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

			printf("排序中");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n排序成功！\n");
			system("pause");
		}
		else if(sel1==2)
		{
			qsort(xm,n,sizeof(xm[0]),Comp22);

			printf("排序中");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n排序成功！\n");
			system("pause");
		}
		else
			;

		goto back;
	}
	else if(sel==3)
	{
		printf("\t\t    1、时间从新到旧\n");
		printf("\t\t    2、时间从旧到新\n");
		printf("\t\t    3、退出\n");
		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("请输入你的选择:");
re13:
		scanf("%d",&sel1);
		getchar();

		if(sel1<1||sel1>3)
		{
			printf("请重新输入:");
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

			printf("排序中");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n排序成功！\n");
			system("pause");
		}
		else if(sel1==2)
		{
			qsort(xm,n,sizeof(xm[0]),Comp31);

			printf("排序中");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n排序成功！\n");
			system("pause");
		}
		else
			;

		goto back;
	}
	else if(sel==4)
	{
		printf("\t\t    1、升序排序\n");//从小到大
		printf("\t\t    2、降序排序\n");//从大到小
		printf("\t\t    3、退出\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("请输入你的选择:");
re14:
		scanf("%d",&sel1);
		getchar();

		if(sel1<1||sel1>3)
		{
			printf("请重新输入:");
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

			printf("排序中");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n排序成功！\n");
			system("pause");
		}
		else if(sel1==2)
		{
			qsort(xm,n,sizeof(xm[0]),Comp42);

			printf("排序中");
			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n排序成功！\n");
			system("pause");
		}
		else
			;

		goto back;
	}
	else
		;
}