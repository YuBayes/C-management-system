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
	printf("\t\t     信息统计系统\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
		
	printf("\t\t    1、信息排序\n");
	printf("\t\t    2、设备一览\n");
	printf("\t\t    3、分类统计\n");
	printf("\t\t    4、退出\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	tj();

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");


	printf("请输入你的选择:");

re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>4)
	{
		printf("请重新输入:");
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
		
		printf("\t\t    1、开始输出\n");
		printf("\t\t    2、退出\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("请输入你的选择:");

re2:
		scanf("%d",&sel2);
		getchar();
		if(sel2<1||sel>2)
		{
			printf("请重新输入:");
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
			printf("%-10s","编号");
			printf("|");
			printf("%-8s","种类");
			printf("|");
			printf("%-12s","名称");	
			printf("|");
			printf("%-5s","价格");
			printf("|");
			printf("%-11s","购买时间");	
			printf("|");
			printf("%-8s","是否报废");	
			printf("|");
			printf("%-11s","报废时间");
			printf("|");
			printf("%s","备注");

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
					printf("%-8s","否");	
					printf("|");
					printf("%-12s","/");
					printf("|");
				}
				else
				{
					printf("%-8s","是");	
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
		分类();
		goto back;
	}
	else
		;
}