void broken()
{
	int i;
	int sel;
	int n;
	double num;

	char flag;
	int flag_;
back:
	system("cls");


	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t     报废系统\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	
	printf("\t\t    1、报废\n");
	printf("\t\t    2、退出\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t  请输入你的选择:");
re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>2)
	{
		printf("请重新输入:");
		goto re;
	}

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		printf("请输入要报废设备的编号(可通过查询系统查询):");
re1:
		scanf("%lf",&num);
		getchar();

		for(n=0;n<MAX;n++)
		{
			if(xm[n].num==0)
			{
				printf("\n无查询结果\n");
				printf("是否重新输入？Y/N(N会退出)");

re11:
				scanf("%c",&flag);
				getchar();
				if(flag=='Y'||flag=='y')
					goto re1;
				else if(flag=='N'||flag=='n')
				{
					goto end;
				}
				else
				{
					printf("请重新输入:");
					goto re11;
				}
				break;
			}
			if(xm[n].num == num)
			{
				//输出信息
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

				printf("|");
				printf("%-10s","编号");
				printf("|");
				printf("%-12s","名称");
				printf("|");
				printf("%-8s","种类");
				printf("|");
				printf("%-5s","价格");
				printf("|");
				printf("%-11s","购买时间");	
				printf("|");
				printf("%-4s","是否报废");	
				printf("|");
				printf("%-11s","报废时间");
				printf("|");
				printf("%s","备注");
				printf("\n");

				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

				printf("|");
				printf("%-10.0lf",xm[n].num);
				printf("|");
				printf("%-12s",xm[n].name);
				printf("|");
				printf("%-8s",xm[n].kind);
				printf("|");
				printf("%-5.2lf",xm[n].value);
				printf("|");
				printf("%-4d-%2d-%2d",xm[n].v_y,xm[n].v_m,xm[n].v_d);	
				printf("|");
				if(xm[n].bf==0)
				{
					printf("%-8s","否");	
					printf("|");
					printf("%-s","/");
					printf("|");
					flag_=0;
				}
				else
				{
					printf("%-8s","是");	
					printf("|");
					printf("%-4d-%2d-%2d",xm[n].b_y,xm[n].b_m,xm[n].b_d);
					printf("|");
					puts(xm[n].bz);	
					flag_=1;
				}
				printf("\n");

				for(i=1;i<20;i++)
					printf("---");
				printf("\n");
				break;
			}
		}
		if(flag_==0)
		{
			printf("是否报废？(Y/N)");
re3:
			scanf("%c",&flag);
			getchar();
			if(flag=='y'||flag=='Y')
			{
				xm[n].bf=1;
				printf("报废日期(yyyy-mm-dd):");
				scanf("%d-%d-%d",&xm[n].b_y,&xm[n].b_m,&xm[n].b_d);
				getchar();
				printf("请填写备注:(非必填)");
				gets(xm[n].bz);
				
				printf("报废成功");
				system("pause");
				goto back;
			}
			else if(flag=='N'||flag=='n')
				goto back;
			else
			{
				printf("请重新输入:");
				goto re3;
			}
		}
		else
		{
			printf("该设备已报废！若要修改信息，请在查询功能下修改。\n");
			system("pause");
			goto back;
		}
	}
	
	else
	;
end:
;
}