void login()
{

	char id[16];
	char pw[20];
	int sel;
	int i;
	int n;
	char flag;
	FILE *fp;
back:
	fp=fopen("数据3.dat","r");
	fread(users,sizeof(struct data3),MAX,fp);

	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t欢迎使用计算机教研室办公室办公用品管理系统\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t      1、登录\n");
	printf("\t\t      2、注册\n");
	printf("\t\t      3、退出\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("请输入你的选择:");
re:
	scanf("%d",&sel);
	getchar();

	if(sel<1||sel>3)
	{
		printf("请重新输入:");
		goto re;
	}
	if(sel==1)
	{
re1:
		printf("请输入账号:");
		gets(id);
		printf("请输入密码:");

		for(i=0;i<=99;i++)
		{
			pw[i]=_getwch();
			if(pw[i]=='\r')
				break;
			 printf("*");
		}
		pw[i]='\0';
		
		printf("\n");

		for(n=1;n<MAX;n++)
		{
			if(users[n].num==0)
			{
				printf("账户或密码错误，请重新输入！\n");
				printf("是否重新输入？Y/N【N则返回】");
re11:
				scanf("%c",&flag);
				getchar();

				if(flag=='Y'||flag=='y')
					goto re1;
				else if(flag=='N'||flag=='n')
					goto back;
				else
				{
					printf("请重新输入选择:");
					goto re11;
				}
			}
			if(strcmp(users[n].id,id)==0)
			{
				if(strcmp(users[n].pw,pw)==0)
				{
					printf("登录中");
					for(i=0;i<6;i++)
					{
						printf(".");
						_sleep(500);
					}
					printf("\n登录成功！\n");
					system("pause");
					break;
				}
				else
				{
					printf("密码错误，请重新输入！\n");
					printf("是否重新输入？Y/N【N则返回】");
re12:
					scanf("%c",&flag);
					getchar();

					if(flag=='Y'||flag=='y')
						goto re1;
					else if(flag=='N'||flag=='n')
						goto back;
					else
					{
						printf("请重新输入选择:");
						goto re12;
					}
				}
			}
		}
	}
	else if(sel==2)
	{
		fclose(fp);
		fp=fopen("数据3.dat","w");
		printf("请输入账号:");
		gets(id);
		printf("请输入密码:");
		gets(pw);

		for(n=1;n<MAX;n++)
		{
			printf("是否确认输入？Y/N【N则返回】");
re2:
			scanf("%c",&flag);
			getchar();

			if(flag=='Y'||flag=='y')
			{
				for(n=1;n<MAX;n++)
				{
					if(users[n].num==0)
					{
						users[n].num=n;
						strcpy(users[n].id,id);
						strcpy(users[n].pw,pw);
						break;
					}
				}
				printf("\n注册成功！\n");
				fwrite(users,sizeof(struct data3),MAX,fp);
				fclose(fp);
				system("pause");
				goto back;
			}
			else if(flag=='N'||flag=='n')
				goto back;
			else
			{
				printf("请重新输入选择:");
				goto re2;
			}
		}
	}
	else
		exit(0);

	fclose(fp);
}