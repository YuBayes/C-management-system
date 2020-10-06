
void input()
{
	int i;
	int n;
	int j;
	int sel;

	double num;//编号
	char name[20];//名字
	char kind[10];//种类名字
	float value;//价格
	int v_y,v_m,v_d;//购买日期
	int bf;//报废否
	int b_y,b_m,b_d;//报废日期
	char bz[310];//报废

	char flag;//判断专用

	system("cls");


	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t     录入系统\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
		
	printf("\t\t    1、开始录入\n");
	printf("\t\t    2、退出\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("请输入你的选择:");
re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>2)
	{
		printf("请重新输入:");
		goto re;
	}

	if(sel==1)
	{
		for(n=0;n<MAX;n++)
		{
			if(xm[n].num==0)
				break;
		}
sr:

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

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
		printf("是否报废？(Y/N)");
re1:
		scanf("%c",&flag);
		getchar();
		if(flag=='Y'||flag=='y')
		{
			bf=1;
			printf("报废时间(yyyy-mm-nn):");
			scanf("%d-%d-%d",&b_y,&b_m,&b_d);
			getchar();
			printf("备注（非必填,150字内）:");
			gets(bz);
		}
		else if(flag=='N'||flag=='n')
		{
			bf=0;
		}
		else
		{
			printf("请重新输入:");
			goto re1;
		}

		for(i=0;i<20;i++)
			printf("***");
		printf("\n");
		printf("\t\t       是否确定录入？(Y/N)\n");
		printf("请输入选择：");
	re2:
		scanf("%c",&flag);
		getchar();
		if(flag == 'Y'||flag == 'y')//保存
		{
			printf("正在保存中");

			xm[n].num=num;
			strcpy(xm[n].kind,kind);
	
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
			xm[n].bf=bf;
			

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


			printf("是否继续输入？(Y/N):");
re3:
			scanf("%c",&flag);
			getchar();
			if(flag=='Y'||flag=='y')
			{
				n++;
				goto sr;
			}
			else if(flag=='N'||flag=='n')
			;
			else
			{
				printf("\n请重新输入:");
				goto re3;
			}
		}
		else if(flag == 'N'||flag == 'n')//不保存
		{
			printf("是否重新输入信息？(Y/N):");
re4:
			scanf("%c",&flag);
			if(flag=='Y'||flag=='y')
			{
				printf("\n");
				goto sr;
			}
			else if(flag=='N'||flag=='n')
				;
			else
			{
				printf("请重新输入:");
				getchar();
				goto re4;
			}
		}
		else
		{
			printf("请重新输入:");
			goto re2;
		}
	}

	else
		;
}