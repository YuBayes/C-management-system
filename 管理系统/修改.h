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
	printf("%-10s","���");
	printf("|");
	printf("%-12s","����");
	printf("|");
	printf("%-8s","����");
	printf("|");
	printf("%-5s","�۸�");
	printf("|");
	printf("%-12s","����ʱ��");	
	printf("|");
	printf("%-4s","�Ƿ񱨷�");	
	printf("|");
	printf("%-12s","����ʱ��");
	printf("|");
	printf("%-12s","��ע");
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

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	
	printf("\t\t         �޸�");
	printf("\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t     1���޸�ȫ����Ϣ\n");
	printf("\t\t     2���޸ĵ�����Ϣ\n");
	printf("\t\t     3��ɾ������Ϣ\n");
	printf("\t\t     4������\n");;

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("���������ѡ��:");
re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>4)
	{
		printf("����������:");
		goto re;
	}
		
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
sr:
		printf("���:");
		scanf("%lf",&num);
		getchar();
		printf("����:");
		gets(name);
		printf("����:");
		gets(kind);
		printf("�۸�:");
		scanf("%f",&value);
		printf("����ʱ��(yyyy-mm-nn):");
		scanf("%d-%d-%d",&v_y,&v_m,&v_d);
		getchar();
		if(xm[n].bf==1)
		{
			printf("����ʱ��yyyy-mm-nn):");
			scanf("%d-%d-%d",&b_y,&b_m,&b_d);
			getchar();
			printf("��ע���Ǳ���,150���ڣ�:");
			gets(bz);
		}

		for(i=0;i<20;i++)
			printf("***");
		printf("\n");
		printf("\t\t       �Ƿ�ȷ��¼�룿(Y/N)\n");
		for(i=0;i<20;i++)
			printf("***");
		printf("\n");
		printf("������ѡ��");
re3:
		scanf("%c",&flag);
		getchar();
		if(flag == 'Y'||flag == 'y')//����
		{
			printf("���ڱ�����");

			xm[n].num=num;
			strcpy(xm[n].kind,kind);
			//ԭ��������-1
			kinds[xm[n].k_num].sl-=1;
			//�����ŷ���
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
		
			printf("\n����ɹ�\n");
			goto back;
		}
		else if(flag == 'N'||flag == 'n')//������
		{
			printf("�Ƿ�����������Ϣ��(Y/N):");
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
				printf("����������:");
				goto re4;
			}
		}
		else
		{
			printf("����������:");
			goto re3;
		}
go:
		;
	}
	else if(sel==2)
	{

		printf("\t\t     1���޸ı��\n");
		printf("\t\t     2���޸�����\n");
		printf("\t\t     3���޸�����\n");
		printf("\t\t     4���޸ļ۸�\n");
		printf("\t\t     5���޸Ĺ���ʱ��\n");
		printf("\t\t     6���������󱨷���Ϣ\n");
		printf("\t\t     7������\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("\t\t*�����������˵����ϴ������в���\n");

		for(i=0;i<20;i++)
			printf("===");
		printf("\n");

		printf("���������ѡ��:");
re2:
		scanf("%d",&sel2);
		getchar();
		if(sel2<1||sel2>7)
		{
			printf("����������:");
			goto re2;
		}

		if(sel2==1)
		{
			printf("���:");
			scanf("%lf",&num);
			getchar();
			printf("ȷ���޸ģ�Y/N(N�᷵��)\n");
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
				printf("����������:");
				goto re21;
			}

		}
		else if(sel2==2)
		{
			printf("����:");
			gets(name);
			printf("ȷ���޸ģ�Y/N(N�᷵��)\n");
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
				printf("����������:");
				goto re22;
			}
		}
		else if(sel2==3)
		{
			printf("����:");
			gets(kind);
			printf("ȷ���޸ģ�Y/N(N�᷵��)\n");
re23:
			scanf("%c",&flag);
			getchar();
			if(flag=='Y'||flag=='y')
			{
				strcpy(xm[n].kind,kind);
				//ԭ��������-1
				kinds[xm[n].k_num].sl-=1;
				//�����ŷ���
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
				printf("����������:");
				goto re23;
			}
		}
		else if(sel2==4)
		{
			printf("�۸�:");
			scanf("%f",&value);
			getchar();
			printf("ȷ���޸ģ�Y/N(N�᷵��)\n");
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
				printf("����������:");
				goto re24;
			}

		}
		else if(sel2==5)
		{
			printf("����ʱ��(yyyy-mm-nn):");
			scanf("%d-%d-%d",&v_y,&v_m,&v_d);
			getchar();
			printf("ȷ���޸ģ�Y/N(N�᷵��)\n");
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
				printf("����������:");
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

				printf("\t\t     1��ȡ������\n");
				printf("\t\t     2���޸ı�������\n");
				printf("\t\t     3���޸ı�ע\n");
				printf("\t\t     4������\n");

				for(i=0;i<20;i++)
					printf("===");
				printf("\n");

				printf("���������ѡ��:");
re261:
				scanf("%d",&sel3);
				getchar();
				if(sel<1||sel>4)
				{
					printf("����������:");
					goto re261;
				}
		
				for(i=0;i<20;i++)
					printf("===");
				printf("\n");

				if(sel3==1)
				{
					printf("�Ƿ�Ҫȡ�����ϣ�Y/N(N�᷵��)");
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
						printf("����������:");
						goto re31;
					}
				}
				else if(sel3==2)
				{
					printf("����ʱ��(yyyy-mm-nn):");
					scanf("%d-%d-%d",&b_y,&b_m,&b_d);
					getchar();
					printf("ȷ���޸ģ�Y/N(N�᷵��)\n");
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
						printf("����������:");
						goto re32;
					}	
				}
				else if(sel3==3)
				{
					printf("��ע���Ǳ���,150���ڣ�:");
					gets(bz);
					printf("ȷ���޸ģ�Y/N(N�᷵��)\n");
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
						printf("����������:");
						goto re33;
					}
				}
				else
					goto go;
			}
			else
				printf("���豸δ���ϣ������������˵����б��ϴ���\n");
				system("pause");
				goto go;
		}
		else
			goto back;

		printf("�޸���");
		for(i=0;i<6;i++)
		{
			printf(".");
			_sleep(500);
		}
		printf("\n");
		printf("�޸ĳɹ�!\n");
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