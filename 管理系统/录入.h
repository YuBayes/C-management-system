
void input()
{
	int i;
	int n;
	int j;
	int sel;

	double num;//���
	char name[20];//����
	char kind[10];//��������
	float value;//�۸�
	int v_y,v_m,v_d;//��������
	int bf;//���Ϸ�
	int b_y,b_m,b_d;//��������
	char bz[310];//����

	char flag;//�ж�ר��

	system("cls");


	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t     ¼��ϵͳ\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
		
	printf("\t\t    1����ʼ¼��\n");
	printf("\t\t    2���˳�\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("���������ѡ��:");
re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>2)
	{
		printf("����������:");
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
		printf("�Ƿ񱨷ϣ�(Y/N)");
re1:
		scanf("%c",&flag);
		getchar();
		if(flag=='Y'||flag=='y')
		{
			bf=1;
			printf("����ʱ��(yyyy-mm-nn):");
			scanf("%d-%d-%d",&b_y,&b_m,&b_d);
			getchar();
			printf("��ע���Ǳ���,150���ڣ�:");
			gets(bz);
		}
		else if(flag=='N'||flag=='n')
		{
			bf=0;
		}
		else
		{
			printf("����������:");
			goto re1;
		}

		for(i=0;i<20;i++)
			printf("***");
		printf("\n");
		printf("\t\t       �Ƿ�ȷ��¼�룿(Y/N)\n");
		printf("������ѡ��");
	re2:
		scanf("%c",&flag);
		getchar();
		if(flag == 'Y'||flag == 'y')//����
		{
			printf("���ڱ�����");

			xm[n].num=num;
			strcpy(xm[n].kind,kind);
	
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
		
			printf("\n����ɹ�\n");


			printf("�Ƿ�������룿(Y/N):");
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
				printf("\n����������:");
				goto re3;
			}
		}
		else if(flag == 'N'||flag == 'n')//������
		{
			printf("�Ƿ�����������Ϣ��(Y/N):");
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
				printf("����������:");
				getchar();
				goto re4;
			}
		}
		else
		{
			printf("����������:");
			goto re2;
		}
	}

	else
		;
}