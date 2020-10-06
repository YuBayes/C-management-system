void search()
{
	int i;int j;int n;
	int sel;
	char flag;//判断专用
	int flag_=0;//一个标记

	double num;
	char name[20];
	char kind[10];

back:
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t                   查询系统\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t             1、通过编号查询\n");
	printf("\t\t             2、通过名字查询\n");
	printf("\t\t             3、通过种类查询\n");
	printf("\t\t             4、退出\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t     *只有通过编号查询到信息之后进行修改。\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>4)
	{
		printf("请重新输入:");
		goto re;
	}

	if(sel==1)
	{
		printf("请输入你要查询的设备编号:");
		scanf("%lf",&num);
		getchar();

		printf("\n");
		for(i=1;i<20;i++)
			printf("----");
		printf("\n");

		for(n=0;n<MAX;n++)
		{
			if(xm[n].num==0)
			{
				printf("无查询结果\n");
				break;
			}
			if(xm[n].num == num)
			{
				//输出查询信息
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
					printf("%s","/");
					printf("|");
				}
				else
				{
					printf("%-8s","是");	
					printf("|");
					printf("%-4d-%2d-%2d",xm[n].b_y,xm[n].b_m,xm[n].b_d);
					printf("|");
					puts(xm[n].bz);
				}
				printf("\n");
				
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

				printf("是否修改信息？(Y/N)");
re3:
				scanf("%c",&flag);
				getchar();
				if(flag=='y'||flag=='Y')
				{
					modify(n);
					goto back;
				}
				else if(flag=='N'||flag=='n')
					;
				else
				{
					printf("请重新输入:");
					goto re3;
				}

				break;
			}
		}
	}
	else if(sel==2)
	{
		printf("请输入你要查询的设备名字:");
		gets(name);

		printf("\n");
		for(i=1;i<20;i++)
			printf("----");
		printf("\n");

		for(n=0;n<MAX;n++)
		{
			if(xm[n].num==0)
			{
				if(flag_==0)
					printf("无查询结果\n");
				break;
			}
			if(strcmp(name,xm[n].name) == 0)
			{
				//输出查询到的信息
				if(flag_==0)
				{
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
					printf("%-8s","是否报废");	
					printf("|");
					printf("%-11s","报废时间");
					printf("|");
					printf("%s","备注");
					printf("\n");

					for(i=1;i<20;i++)
						printf("----");
					printf("\n");

					flag_=1;
				}

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
					printf("%s","/");
					printf("|");
				}
				else
				{
					printf("%-8s","是");	
					printf("|");
					printf("%-4d-%2d-%2d",xm[n].b_y,xm[n].b_m,xm[n].b_d);
					printf("|");
					puts(xm[n].bz);
				}
				printf("\n");
				
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");
			}
		}
	}
	else if(sel==3)
	{
		printf("请输入要查询的种类:");
		gets(kind);
						
		for(i=1;i<20;i++)
			printf("----");
		printf("\n");
	
		flag_=0;
		for(n=1;n<MAX;n++)
		{
			if(kinds[n].num==0)
			{
				printf("无查询结果。\n");
				break;
			}
			if(strcmp(kinds[n].name,kind)==0)
			{
				for(j=0;j<MAX;j++)
				{
					if(xm[j].num==0)
					{
						if(flag_==0)
							printf("无结果\n");
						break;
					}
					if(xm[j].k_num==n)
					{
						if(flag_==0)
						{
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

							flag_=1;
						}

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
							printf("%s","/");
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
				}
				break;
			}
		}
	}
	else
		goto end;

	printf("是否继续查询？(Y/N)(N会退出)");
re2:

	scanf("%c",&flag);
	getchar();
	if(flag=='Y'||flag=='y')
		goto back;
	else if(flag=='n'||flag=='N')
		goto end;
	else
	{
		printf("请重新输入");
		goto re2;
	}
end:
	;
}