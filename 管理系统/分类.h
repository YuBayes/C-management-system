void ����()
{
	int i;
	int n;//�豸������
	int j;//�豸������
	int x;//����һ������
	int a[MAX];//����ͳ�Ʊ���

	int k;//�����
	int s_k=0;
	int b_k=0;
	int sel;
	struct data1 zc[MAX];
	int flag=0;

	double b_sl=0;
	double s_sl=0;

	float s_v=0;
	float b_v=0; 

	n=k_sort();
	memcpy(zc,xm,sizeof(xm));//��һ����ʱ����


back:
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t     ����ͳ��\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
		
	printf("\t\t    1�������������\n");
	printf("\t\t    2������ʱ�����\n");
	printf("\t\t    3�������������豸\n");
	printf("\t\t    4���˳�\n");

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


	if(sel==1)
	{
		qsort(zc,n,sizeof(zc[0]),Comp21);

		for(j=0;j<=n;j++)
		{
			if(flag==0)
			{
				if(xm[j].num!=0){
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

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

				flag=1;
				k=0;
				}
			}

			if(k==0 || (j>0 && zc[j-1].k_num==zc[j].k_num))
			{
				if(zc[j].num!=0){
				printf("|");
				printf("%-10.0lf",zc[j].num);
				printf("|");
				printf("%-8s",zc[j].kind);
				printf("|");
				printf("%-12s",zc[j].name);
				printf("|");
				printf("%-5.2lf",zc[j].value);
				printf("|");
				s_v+=zc[j].value;
				printf("%-4d-%2d-%2d",zc[j].v_y,zc[j].v_m,zc[j].v_d);	
				printf("|");
				if(zc[j].bf==0)
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
					printf("%-4d-%2d-%2d",zc[j].b_y,zc[j].b_m,zc[j].b_d);						
					printf("|");
					puts(zc[j].bz);
					b_sl+=1;
					b_v+=zc[j].value;
				}
				printf("\n");
				
				k++;

				for(i=1;i<20;i++)
					printf("----");
				printf("\n");
				}
			}
			else
			{
				printf("\n");
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

				printf("|");
				printf("%-8s","��������");	
				printf("|");
				printf("%-13s","����");
				printf("|");
				printf("%-13s","����(��������)");
				printf("|");
				printf("%-15s","�ܼ�ֵ");
				printf("|");
				printf("%-15s","�ܼ�ֵ(��������)");	
				printf("|");

				printf("\n");

				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

				printf("|");
				printf("%-8s",zc[j-1].kind);	
				printf("|");
				printf("%-13.0lf",kinds[zc[j-1].k_num].sl);
				printf("|");
				printf("%-13.0lf",(kinds[zc[j-1].k_num].sl-b_sl));
				printf("|");
				printf("%-15.2f",s_v);
				printf("|");
				printf("%-15.2f",(s_v-b_v));	
				printf("|");

				printf("\n");

				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

				printf("\n");

				k=0;
				flag=0;
				b_sl=0;
				s_v=0;
				b_v=0;
				j--;
			}
		}
	}
	else if(sel==2)
	{
		qsort(zc,n,sizeof(zc[0]),Comp32);

		for(j=0;j<=n;j++)
		{
			if(flag==0)
			{
				if(xm[j].num!=0){
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");

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

				flag=1;
				k=0;
				}
			}

			if(k==0 || (j>0 && zc[j-1].v_y==zc[j].v_y))
			{
				if(zc[j].num!=0){
				s_sl+=1;

				printf("|");
				printf("%-10.0lf",zc[j].num);
				printf("|");
				printf("%-8s",zc[j].kind);
				
				if(a[zc[j].k_num]!=1)
				{
					a[zc[j].k_num]=1;
					s_k+=1;
					if(zc[j].bf==1)
					{
						b_k+=1;
					}
				}
				

				printf("|");
				printf("%-12s",zc[j].name);
				printf("|");
				printf("%-5.2lf",zc[j].value);
				printf("|");
				s_v+=xm[j].value;
				printf("%-4d-%2d-%2d",zc[j].v_y,zc[j].v_m,zc[j].v_d);	
				printf("|");
				if(zc[j].bf==0)
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
					b_sl+=1;
					b_v+=xm[j].value;
				}
				printf("\n");
				
				k++;

				for(i=1;i<20;i++)
					printf("----");
				printf("\n");
				}
			}
			else
			{
				printf("\n");
				for(i=1;i<20;i++)
					printf("-----");
				printf("\n");

				printf("|");
				printf("%-8s","�������");	
				printf("|");
				printf("%-13s","��������");
				printf("|");
				printf("%-13s","����(��������)");
				printf("|");
				printf("%-13s","����");
				printf("|");
				printf("%-13s","����(��������)");
				printf("|");
				printf("%-15s","�ܼ�ֵ");
				printf("|");
				printf("%-15s","�ܼ�ֵ(��������)");	
				printf("|");

				printf("\n");

				for(i=1;i<20;i++)
					printf("-----");
				printf("\n");

				printf("|");
				printf("%-8d",zc[j-1].v_y);	
				printf("|");
				printf("%-13d",(s_k));
				printf("|");
				printf("%-13d",(s_k-b_k));
				printf("|");
				printf("%-13.0lf",s_sl);
				printf("|");
				printf("%-13.0lf",(s_sl-b_sl));
				printf("|");
				printf("%-15.2f",s_v);
				printf("|");
				printf("%-15.2f",(s_v-b_v));	
				printf("|");

				printf("\n");

				for(i=1;i<20;i++)
					printf("-----");
				printf("\n");

				printf("\n");

				k=0;
				flag=0;
				for(i=0;i<MAX;i++)
					a[i]=0;
				s_k=0;
				b_k=0;
				s_sl=0;
				b_sl=0;
				s_v=0;
				b_v=0;
				j--;
			}
		}
		
	}
	else if(sel==3)
	{
		qsort(zc,n,sizeof(zc[0]),Comp11);

		for(i=1;i<20;i++)
			printf("----");
		printf("\n");

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
		printf("%-11s","����ʱ��");
		printf("|");
		printf("%s","��ע");

		printf("\n");

		for(i=1;i<20;i++)
			printf("----");
		printf("\n");

		for(j=0;j<n;j++)
		{
			if(zc[j].bf==1)
			{
				printf("|");
				printf("%-10.0lf",zc[j].num);
				printf("|");
				printf("%-8s",zc[j].kind);
				if(a[zc[j].k_num]!=1)
				{
					a[zc[j].k_num]=1;
					b_k+=1;
				}
				printf("|");
				printf("%-12s",zc[j].name);
				printf("|");
				printf("%-5.2lf",zc[j].value);
				printf("|");
				b_v+=zc[j].value;
				printf("%-4d-%2d-%2d",zc[j].v_y,zc[j].v_m,zc[j].v_d);	
				printf("|");
				printf("%-8s","��");	
				printf("|");
				printf("%-4d-%2d-%2d",zc[j].b_y,zc[j].b_m,zc[j].b_d);						
				printf("|");
				puts(zc[j].bz);
				b_sl+=1;

				printf("\n");
				for(i=1;i<20;i++)
					printf("----");
				printf("\n");
				
			}
			
		}


			printf("\n");
			for(i=1;i<20;i++)
			printf("----");
			printf("\n");

			printf("|");
			printf("%-8s","����");
			printf("|");
			printf("%-8s","��������");
			printf("|");
			printf("%-15s","�ܺķ�");
			printf("|");
			printf("\n");

			for(i=1;i<20;i++)
				printf("----");
			printf("\n");

			printf("|");
			printf("%-8.0lf",b_sl);	
			printf("|");
			printf("%-8d",b_k);
			printf("|");
			printf("%-15.2f",b_v);

			printf("\n");
			for(i=1;i<20;i++)
				printf("----");
			printf("\n");

			printf("\n");
			for(i=0;i<MAX;i++)
				a[i]=0;


			

		for(i=1;i<20;i++)
			printf("----");
		printf("\n");

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

		printf("\n");

		for(i=1;i<20;i++)
			printf("----");
		printf("\n");

		for(j=0;j<n;j++)
		{
			if(zc[j].bf==0)
			{
				printf("|");
				printf("%-10.0lf",zc[j].num);
				printf("|");
				printf("%-8s",zc[j].kind);
				if(a[zc[j].k_num]!=1)
				{
					a[zc[j].k_num]=1;
					s_k+=1;
				}
				printf("|");
				printf("%-12s",zc[j].name);
				printf("|");
				printf("%-5.2lf",zc[j].value);
				printf("|");
				s_v+=zc[j].value;
				printf("%-4d-%2d-%2d",zc[j].v_y,zc[j].v_m,zc[j].v_d);	
				printf("|");
				s_sl+=1;

				printf("\n");

				for(i=1;i<20;i++)
					printf("----");
				printf("\n");	
			}
		}

			printf("\n");
			for(i=1;i<20;i++)
			printf("----");
			printf("\n");

			printf("|");
			printf("%-8s","����");
			printf("|");
			printf("%-8s","��������");
			printf("|");
			printf("%-15s","�ܼ�ֵ");
			printf("|");
			printf("\n");

			for(i=1;i<20;i++)
				printf("----");
			printf("\n");

			printf("|");
			printf("%-8.0lf",s_sl);	
			printf("|");
			printf("%-8d",s_k);
			printf("|");
			printf("%-15.2f",s_v);

			printf("\n");

			for(i=1;i<20;i++)
				printf("----");
			printf("\n");
			}
	else
		;

	system("pause");
}