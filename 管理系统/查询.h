void search()
{
	int i;int j;int n;
	int sel;
	char flag;//�ж�ר��
	int flag_=0;//һ�����

	double num;
	char name[20];
	char kind[10];

back:
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t                   ��ѯϵͳ\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t             1��ͨ����Ų�ѯ\n");
	printf("\t\t             2��ͨ�����ֲ�ѯ\n");
	printf("\t\t             3��ͨ�������ѯ\n");
	printf("\t\t             4���˳�\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t     *ֻ��ͨ����Ų�ѯ����Ϣ֮������޸ġ�\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>4)
	{
		printf("����������:");
		goto re;
	}

	if(sel==1)
	{
		printf("��������Ҫ��ѯ���豸���:");
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
				printf("�޲�ѯ���\n");
				break;
			}
			if(xm[n].num == num)
			{
				//�����ѯ��Ϣ
				printf("|");
				printf("%-10s","���");
				printf("|");
				printf("%-12s","����");
				printf("|");
				printf("%-8s","����");
				printf("|");
				printf("%-5s","�۸�");
				printf("|");
				printf("%-11s","����ʱ��");	
				printf("|");
				printf("%-4s","�Ƿ񱨷�");	
				printf("|");
				printf("%-11s","����ʱ��");
				printf("|");
				printf("%s","��ע");
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
					printf("%-8s","��");	
					printf("|");
					printf("%s","/");
					printf("|");
				}
				else
				{
					printf("%-8s","��");	
					printf("|");
					printf("%-4d-%2d-%2d",xm[n].b_y,xm[n].b_m,xm[n].b_d);
					printf("|");
					puts(xm[n].bz);
				}
				printf("\n");
				
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

				printf("�Ƿ��޸���Ϣ��(Y/N)");
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
					printf("����������:");
					goto re3;
				}

				break;
			}
		}
	}
	else if(sel==2)
	{
		printf("��������Ҫ��ѯ���豸����:");
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
					printf("�޲�ѯ���\n");
				break;
			}
			if(strcmp(name,xm[n].name) == 0)
			{
				//�����ѯ������Ϣ
				if(flag_==0)
				{
					printf("|");
					printf("%-10s","���");
					printf("|");
					printf("%-12s","����");
					printf("|");
					printf("%-8s","����");
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
					printf("%-8s","��");	
					printf("|");
					printf("%s","/");
					printf("|");
				}
				else
				{
					printf("%-8s","��");	
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
		printf("������Ҫ��ѯ������:");
		gets(kind);
						
		for(i=1;i<20;i++)
			printf("----");
		printf("\n");
	
		flag_=0;
		for(n=1;n<MAX;n++)
		{
			if(kinds[n].num==0)
			{
				printf("�޲�ѯ�����\n");
				break;
			}
			if(strcmp(kinds[n].name,kind)==0)
			{
				for(j=0;j<MAX;j++)
				{
					if(xm[j].num==0)
					{
						if(flag_==0)
							printf("�޽��\n");
						break;
					}
					if(xm[j].k_num==n)
					{
						if(flag_==0)
						{
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
							printf("%-8s","��");	
							printf("|");
							printf("%s","/");
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
				}
				break;
			}
		}
	}
	else
		goto end;

	printf("�Ƿ������ѯ��(Y/N)(N���˳�)");
re2:

	scanf("%c",&flag);
	getchar();
	if(flag=='Y'||flag=='y')
		goto back;
	else if(flag=='n'||flag=='N')
		goto end;
	else
	{
		printf("����������");
		goto re2;
	}
end:
	;
}