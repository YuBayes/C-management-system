int k_sort()
{
	int n;
	int i;
	int j;

/*	for(n=0;n<MAX;n++)
	{
		if(kinds[n].num==0)
			break;
	}

	for(i=1;i<n;i++)
	{
		if(kinds[i].sl<1)
		{
			for(j=i;j<n;j++)
			{
				kinds[j].num=kinds[j+1].num;
				strcpy(kinds[j].name,kinds[j+1].name);
				kinds[j].sl=kinds[j+1].sl;
			}
		}
	}*/

	for(n=0;n<MAX;n++)
	{
		if(xm[n].num==0)
			break;
	}

	return n;
}