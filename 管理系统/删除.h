void del(int n)
{
	char flag;
	int i;
	int j;
	int k;

	printf("是否要删除此信息？Y/N(N会返回查询界面)");
re:
		scanf("%c",&flag);
		getchar();
		if(flag=='Y'||flag=='y')
		{
			printf("删除中");

			for(j=1;j<MAX;j++)
			{
				if(xm[j].num==0)
					break;
			}

			//种类数量-1
			kinds[xm[n].k_num].sl-=1;
			//从N+1向前覆盖N，然后N++到j覆盖完为止
			for(n;n<j;n++)
			{
				xm[n].num=xm[n+1].num;
				strcpy(xm[n].kind,xm[n+1].kind);
	
			
				strcpy(xm[n].name,xm[n+1].name);
				xm[n].value=xm[n+1].value;
				xm[n].v_y=xm[n+1].v_y;
				xm[n].v_m=xm[n+1].v_m;
				xm[n].v_d=xm[n+1].v_d;
				xm[n].bf=xm[n+1].bf;
	
				if(xm[n].bf==1)
				{
					xm[n].b_y=xm[n+1].b_y;
					xm[n].b_m=xm[n+1].b_m;
					xm[n].b_d=xm[n+1].b_d;
					strcpy(xm[n].bz,xm[n+1].bz);
				}
			}
			//J项作为尾项清空
			xm[n].num=0;
			strcpy(xm[n].kind,"\0");
			strcpy(xm[n].name,"\0");
			xm[n].value=0;
			xm[n].v_y=0;
			xm[n].v_m=0;
			xm[n].v_d=0;
			xm[n].bf=0;
			xm[n].b_y=0;
			xm[n].b_m=0;
			xm[n].b_d=0;
			strcpy(xm[n].bz,"\0");

			for(i=0;i<6;i++)
			{
				printf(".");
				_sleep(500);
			}
			printf("\n删除成功！\n");
			system("pause");
		}
		else if(flag=='N'||flag=='n')
		{
			;
		}
		else
		{
			printf("请重新输入:");
			goto re;
		}
}