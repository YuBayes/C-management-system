void 分类()
{
	int i;
	int n;//设备总数量
	int j;//设备遍历用
	int x;//又是一个遍历
	int a[MAX];//种类统计遍历

	int k;//标记用
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
	memcpy(zc,xm,sizeof(xm));//拿一个暂时排序


back:
	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t\t     分类统计\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
		
	printf("\t\t    1、按照种类分类\n");
	printf("\t\t    2、按照时间分类\n");
	printf("\t\t    3、报废与正常设备\n");
	printf("\t\t    4、退出\n");

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
					printf("%-8s","否");	
					printf("|");
					printf("%s","/");
					printf("|");
				}
				else
				{
					printf("%-8s","是");	
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
				printf("%-8s","种类名称");	
				printf("|");
				printf("%-13s","数量");
				printf("|");
				printf("%-13s","数量(不含报废)");
				printf("|");
				printf("%-15s","总价值");
				printf("|");
				printf("%-15s","总价值(不含报废)");	
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
				printf("%-8s","购买年份");	
				printf("|");
				printf("%-13s","种类数量");
				printf("|");
				printf("%-13s","种类(不含报废)");
				printf("|");
				printf("%-13s","数量");
				printf("|");
				printf("%-13s","数量(不含报废)");
				printf("|");
				printf("%-15s","总价值");
				printf("|");
				printf("%-15s","总价值(不含报废)");	
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
		printf("%-11s","报废时间");
		printf("|");
		printf("%s","备注");

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
				printf("%-8s","是");	
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
			printf("%-8s","数量");
			printf("|");
			printf("%-8s","种类数量");
			printf("|");
			printf("%-15s","总耗费");
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
			printf("%-8s","数量");
			printf("|");
			printf("%-8s","种类数量");
			printf("|");
			printf("%-15s","总价值");
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