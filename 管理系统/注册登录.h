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
	fp=fopen("����3.dat","r");
	fread(users,sizeof(struct data3),MAX,fp);

	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t��ӭʹ�ü���������Ұ칫�Ұ칫��Ʒ����ϵͳ\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t      1����¼\n");
	printf("\t\t      2��ע��\n");
	printf("\t\t      3���˳�\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("���������ѡ��:");
re:
	scanf("%d",&sel);
	getchar();

	if(sel<1||sel>3)
	{
		printf("����������:");
		goto re;
	}
	if(sel==1)
	{
re1:
		printf("�������˺�:");
		gets(id);
		printf("����������:");

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
				printf("�˻�������������������룡\n");
				printf("�Ƿ��������룿Y/N��N�򷵻ء�");
re11:
				scanf("%c",&flag);
				getchar();

				if(flag=='Y'||flag=='y')
					goto re1;
				else if(flag=='N'||flag=='n')
					goto back;
				else
				{
					printf("����������ѡ��:");
					goto re11;
				}
			}
			if(strcmp(users[n].id,id)==0)
			{
				if(strcmp(users[n].pw,pw)==0)
				{
					printf("��¼��");
					for(i=0;i<6;i++)
					{
						printf(".");
						_sleep(500);
					}
					printf("\n��¼�ɹ���\n");
					system("pause");
					break;
				}
				else
				{
					printf("����������������룡\n");
					printf("�Ƿ��������룿Y/N��N�򷵻ء�");
re12:
					scanf("%c",&flag);
					getchar();

					if(flag=='Y'||flag=='y')
						goto re1;
					else if(flag=='N'||flag=='n')
						goto back;
					else
					{
						printf("����������ѡ��:");
						goto re12;
					}
				}
			}
		}
	}
	else if(sel==2)
	{
		fclose(fp);
		fp=fopen("����3.dat","w");
		printf("�������˺�:");
		gets(id);
		printf("����������:");
		gets(pw);

		for(n=1;n<MAX;n++)
		{
			printf("�Ƿ�ȷ�����룿Y/N��N�򷵻ء�");
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
				printf("\nע��ɹ���\n");
				fwrite(users,sizeof(struct data3),MAX,fp);
				fclose(fp);
				system("pause");
				goto back;
			}
			else if(flag=='N'||flag=='n')
				goto back;
			else
			{
				printf("����������ѡ��:");
				goto re2;
			}
		}
	}
	else
		exit(0);

	fclose(fp);
}