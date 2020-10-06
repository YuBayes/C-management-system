void modify(int n)
{
	int i;int j;
	int sel;int sel2;int sel3;
	double num;
	char name[20];
	char kind[10];
	int k_num;
	float value;
	int v_y,v_m,v_d;
	int bf;
	int b_y,b_m,b_d;
	char bz[310];

	char flag;
back:
	system("cls");

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
	printf("%-12s","购买时间");	
	printf("|");
	printf("%-4s","是否报废");	
	printf("|");
	printf("%-12s","报废时间");
	printf("|");
	printf("%-12s","备注");
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

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	
	printf("\t\t         修改");
	printf("\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t     1、修改全部信息\n");
	printf("\t\t     2、修改单项信息\n");
	printf("\t\t     3、删除该信息\n");
	printf("\t\t     4、返回\n");;

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
sr:
		printf("编号:");
		scanf("%lf",&num);
		getchar();
		printf("名称:");
		gets(name);
		printf("种类:");
		gets(kind);
		printf("价格:");
		scanf("%f",&value);
		printf("购买时间(yyyy-mm-nn):");
		scanf("%d-%d-%d",&v_y,&v_m,&v_d);
		getchar();
		if(xm[n].bf==1)
		{
			printf("报废时间yyyy-mm-nn):");
			scanf("%d-%d-%d",&b_y,&b_m,&b_d);
			getchar();
			printf("备注（非必填,150字内）:");
			gets(bz);
		}

		for(i=0;i<20;i++)
			printf("***");
		printf("\n");
		printf("\t\t       是否确定录入？(Y/N)\n");
		for(i=0;i<20;i++)
			printf("***");
		printf("\n");
		printf("请输入选择：");
re3:
		scanf("%c",&flag);
		getchar();
		if(flag == 'Y'||flag == 'y')//保存
		{
			printf("正在保存中");

			xm[n].num=num;
			strcpy(xm[n].kind,kind);
			//原种类数量-1
			kinds[xm[n].k_num].sl-=1;
			//种类编号分配
			for(j=1;j<MAX;j++)
			{
				if(kinds[j].num==0)
				{
					kinds[j].num=j;
					xm[n].k_num=j;
					strcpy(kinds[j].name,kind);
					kinds[j].sl=1;
					break;
				}
				if(strcmp(kinds[j].name,kind)==0)
				{
					xm[n].k_num=j;
					kinds[j].sl+=1;
					break;
				}
			}
			strcpy(xm[n].name,name);
			xm[n].value=value;
			xm[n].v_y=v_y;
			xm[n].v_m=v_m;
			xm[n].v_d=v_d;

			if(xm[n].bf==1)
			{
				xm[n].b_y=b_y;
				xm[n].b_m=b_m;
				xm[n].b_d=b_d;
				strcpy(xm[n].bz,bz);

			}

			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
		
			printf("\n保存成功\n");
			goto back;
		}
		else if(flag == 'N'||flag == 'n')//不保存
		{
			printf("是否重新输入信息？(Y/N):");
re4:
			scanf("%c",&flag);
			getchar();
			if(flag=='Y'||flag=='y')
			{
				printf("\n");
				goto sr;
			}
			else if(flag=='N'||flag=='n')
			{
				goto go;
			}
			else
			{
				printf("请重新输入:");
				goto re4;
			}
		}
		else
		{
			printf("请重新输入:");
			goto re3;
		}
go:
		;
	}
	else if(sel==2)
	{

		printf("\t\t     1、修改编号\n");
		printf("\t\t     2、修改名称\n");
		printf("\t\t     3、修改种类\n");
		printf("\t\t     4、修改价格\n");
		printf("\t\t     5、修改购买时间\n");
		printf("\t\t     6、修正错误报废信息\n");
		printf("\t\t     7、返回\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("\t\t*报废请在主菜单报废处理处进行操作\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("请输入你的选择:");
re2:
		scanf("%d",&sel2);
		getchar();
		if(sel2<1||sel2>7)
		{
			printf("请重新输入:");
			goto re2;
		}

		if(sel2==1)
		{
			printf("编号:");
			scanf("%lf",&num);
			getchar();
			printf("确认修改？Y/N(N会返回)\n");
re21:
			scanf("%c",&flag);
			getchar();
			if(flag=='Y'||flag=='y')
			{
				xm[n].num=num;
			}
			else if(flag=='N'||flag=='n')
			{
				goto go;
			}
			else
			{
				printf("请重新输入:");
				goto re21;
			}

		}
		else if(sel2==2)
		{
			printf("名称:");
			gets(name);
			printf("确认修改？Y/N(N会返回)\n");
re22:
			scanf("%c",&flag);
			getchar();
			if(flag=='Y'||flag=='y')
			{
				strcpy(xm[n].name,name);
			}
			else if(flag=='N'||flag=='n')
			{
				goto go;
			}
			else
			{
				printf("请重新输入:");
				goto re22;
			}
		}
		else if(sel2==3)
		{
			printf("种类:");
			gets(kind);
			printf("确认修改？Y/N(N会返回)\n");
re23:
			scanf("%c",&flag);
			getchar();
			if(flag=='Y'||flag=='y')
			{
				strcpy(xm[n].kind,kind);
				//原种类数量-1
				kinds[xm[n].k_num].sl-=1;
				//种类编号分配
				for(j=1;j<MAX;j++)
				{
					if(kinds[j].num==0)
					{
						kinds[j].num=j;
						xm[n].k_num=j;
						strcpy(kinds[j].name,kind);
						kinds[j].sl=1;
						break;
					}
					if(strcmp(kinds[j].name,kind)==0)
					{
						xm[n].k_num=j;
						kinds[j].sl+=1;
						break;
					}
				}
			}
			else if(flag=='N'||flag=='n')
			{
				goto go;
			}
			else
			{
				printf("请重新输入:");
				goto re23;
			}
		}
		else if(sel2==4)
		{
			printf("价格:");
			scanf("%f",&value);
			getchar();
			printf("确认修改？Y/N(N会返回)\n");
re24:
			scanf("%c",&flag);
			getchar();
			if(flag=='Y'||flag=='y')
			{
				xm[n].value=value;
			}
			else if(flag=='N'||flag=='n')
			{
				goto go;
			}
			else
			{
				printf("请重新输入:");
				goto re24;
			}

		}
		else if(sel2==5)
		{
			printf("购买时间(yyyy-mm-nn):");
			scanf("%d-%d-%d",&v_y,&v_m,&v_d);
			getchar();
			printf("确认修改？Y/N(N会返回)\n");
re25:
			scanf("%c",&flag);
			getchar();
			if(flag=='Y'||flag=='y')
			{
				xm[n].v_y=v_y;
				xm[n].v_m=v_m;
				xm[n].v_d=v_d;
			}
			else if(flag=='N'||flag=='n')
			{
				goto go;
			}
			else
			{
				printf("请重新输入:");
				goto re25;
			}
		}
		else if(sel2==6)
		{
			if(xm[n].bf==1)
			{
go3:			
				for(i=0;i<20;i++)
					printf("===");
				printf("\n");

				printf("\t\t     1、取消报错\n");
				printf("\t\t     2、修改报错日期\n");
				printf("\t\t     3、修改备注\n");
				printf("\t\t     4、返回\n");

				for(i=0;i<20;i++)
					printf("===");
				printf("\n");

				printf("请输入你的选择:");
re261:
				scanf("%d",&sel3);
				getchar();
				if(sel<1||sel>4)
				{
					printf("请重新输入:");
					goto re261;
				}
		
				for(i=0;i<20;i++)
					printf("===");
				printf("\n");

				if(sel3==1)
				{
					printf("是否要取消报废？Y/N(N会返回)");
re31:
					scanf("%c",&flag);
					getchar();
					if(flag=='Y'||flag=='y')
					{
						xm[n].bf=0;

						goto back;
					}
					else if(flag=='N'||flag=='n')
					{
						goto go3;
					}
					else
					{
						printf("请重新输入:");
						goto re31;
					}
				}
				else if(sel3==2)
				{
					printf("报废时间(yyyy-mm-nn):");
					scanf("%d-%d-%d",&b_y,&b_m,&b_d);
					getchar();
					printf("确认修改？Y/N(N会返回)\n");
re32:
					scanf("%c",&flag);
					getchar();
					if(flag=='Y'||flag=='y')
					{
						xm[n].b_y=b_y;
						xm[n].b_m=b_m;
						xm[n].b_d=b_d;

						goto back;
					}
					else if(flag=='N'||flag=='n')
					{
						goto go3;
					}
					else
					{
						printf("请重新输入:");
						goto re32;
					}	
				}
				else if(sel3==3)
				{
					printf("备注（非必填,150字内）:");
					gets(bz);
					printf("确认修改？Y/N(N会返回)\n");
re33:
					scanf("%c",&flag);
					getchar();
					if(flag=='Y'||flag=='y')
					{
						strcpy(xm[n].bz,bz);
						goto back;
					}
					else if(flag=='N'||flag=='n')
					{
						goto go3;
					}
					else
					{
						printf("请重新输入:");
						goto re33;
					}
				}
				else
					goto go;
			}
			else
				printf("该设备未报废，报废请在主菜单进行报废处理！\n");
				system("pause");
				goto go;
		}
		else
			goto back;

		printf("修改中");
		for(i=0;i<6;i++)
		{
			printf(".");
			_sleep(500);
		}
		printf("\n");
		printf("修改成功!\n");
		system("pause");
		goto back;
	}
	else if(sel==3)
	{
		del(n);
	}
	else
		;
}