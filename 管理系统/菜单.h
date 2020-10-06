void menu()
{
	int i;
	int sel;

	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t欢迎使用计算机教研室办公室办公用品管理系统\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t     1、录入信息\n");
	printf("\t\t     2、查询\\修改信息\n");
	printf("\t\t     3、报废处理\n");//报废处理【添加个备注？】
	printf("\t\t     4、信息统计\n");//排序、清单【应该够了吧…】、总价值、报废清单、破损耗费
	printf("\t\t     5、读取信息\n");//嫖
	printf("\t\t     6、保存信息\n");//嫖
	printf("\t\t     7、退出\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("请输入你的选择:");
re:
	scanf("%d",&sel);
	if(sel<1||sel>7)
	{
		printf("请重新输入:");
		getchar();
		goto re;
	}

	switch(sel)
	{
		case 1:input();menu();
		case 2:search();menu();
		case 3:broken();menu();
		case 4:stat();menu();
		case 5:load();menu();
		case 6:save();menu();
		case 7:exit(1);
	}
}