void tj()
{
	int i;
	int n;
	int j;//遍历专用
	int s_k=0;int n_k=0;int b_k=0;
	int a[MAX];
	int b[MAX];
	int c[MAX];
	int b_sl=0;
	float s_v=0;float b_v=0;

	n=k_sort();

	for(i=1;i<20;i++)
		printf("------");
	printf("\n");

	printf("|");
	printf("%-10s","设备总数量");
	printf("|");
	printf("%-10s","种类总数量");
	printf("|");
	printf("%-8s","总价值");
	printf("||");
	printf("%-12s","正常设备数量");
	printf("|");
	printf("%-8s","种类数量");
	printf("|");
	printf("%-8s","总价值");	
	printf("||");
	printf("%-12s","报废设备数量");
	printf("|");
	printf("%-11s","种类数量");	
	printf("|");
	printf("%-8s","总破损耗费");	
	printf("|");


	printf("\n");

	for(i=1;i<20;i++)
		printf("------");
	printf("\n");

	for(j=0;j<n;j++)
	{
		s_v+=xm[j].value;
		if(a[xm[j].k_num]!=1)
		{
			a[xm[j].k_num]=1;
			s_k+=1;
		}
		
		if(xm[j].bf==1)
		{
			b_sl+=1;
			b_v+=xm[j].value;
			if(b[xm[j].k_num]!=1)
			{
				b[xm[j].k_num]=1;
				b_k+=1;
			}
		}
		else
		{
			if(c[xm[j].k_num]!=1)
			{
				c[xm[j].k_num]=1;
				n_k+=1;
			}
		}

	}

	printf("|");
	printf("%-10d",n);
	printf("|");
	printf("%-10d",s_k);
	printf("|");
	printf("%-8.2lf",s_v);
	printf("||");
	printf("%-12d",(n-b_sl));
	printf("|");
	printf("%-8d",n_k);
	printf("|");
	printf("%-8.2lf",(s_v-b_v));	
	printf("||");
	printf("%-12d",b_sl);
	printf("|");
	printf("%-11d",b_k);	
	printf("|");
	printf("%-8.2lf",b_v);	
	printf("|");
	printf("\n");

	for(i=1;i<20;i++)
		printf("------");
	printf("\n");
}