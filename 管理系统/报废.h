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
	printf("\t\t     ����ϵͳ\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	
	printf("\t\t    1������\n");
	printf("\t\t    2���˳�\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t  ���������ѡ��:");
re:
	scanf("%d",&sel);
	getchar();
	if(sel<1||sel>2)
	{
		printf("����������:");
		goto re;
	}

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	if(sel==1)
	{
		printf("������Ҫ�����豸�ı��(��ͨ����ѯϵͳ��ѯ):");
re1:
		scanf("%lf",&num);
		getchar();

		for(n=0;n<MAX;n++)
		{
			if(xm[n].num==0)
			{
				printf("\n�޲�ѯ���\n");
				printf("�Ƿ��������룿Y/N(N���˳�)");

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
					printf("����������:");
					goto re11;
				}
				break;
			}
			if(xm[n].num == num)
			{
				//�����Ϣ
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
					printf("%-s","/");
					printf("|");
					flag_=0;
				}
				else
				{
					printf("%-8s","��");	
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
			printf("�Ƿ񱨷ϣ�(Y/N)");
re3:
			scanf("%c",&flag);
			getchar();
			if(flag=='y'||flag=='Y')
			{
				xm[n].bf=1;
				printf("��������(yyyy-mm-dd):");
				scanf("%d-%d-%d",&xm[n].b_y,&xm[n].b_m,&xm[n].b_d);
				getchar();
				printf("����д��ע:(�Ǳ���)");
				gets(xm[n].bz);
				
				printf("���ϳɹ�");
				system("pause");
				goto back;
			}
			else if(flag=='N'||flag=='n')
				goto back;
			else
			{
				printf("����������:");
				goto re3;
			}
		}
		else
		{
			printf("���豸�ѱ��ϣ���Ҫ�޸���Ϣ�����ڲ�ѯ�������޸ġ�\n");
			system("pause");
			goto back;
		}
	}
	
	else
	;
end:
;
}