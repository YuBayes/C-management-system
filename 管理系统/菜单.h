void menu()
{
	int i;
	int sel;

	system("cls");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");
	printf("\t��ӭʹ�ü���������Ұ칫�Ұ칫��Ʒ����ϵͳ\n");
	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("\t\t     1��¼����Ϣ\n");
	printf("\t\t     2����ѯ\\�޸���Ϣ\n");
	printf("\t\t     3�����ϴ���\n");//���ϴ�����Ӹ���ע����
	printf("\t\t     4����Ϣͳ��\n");//�����嵥��Ӧ�ù��˰ɡ������ܼ�ֵ�������嵥������ķ�
	printf("\t\t     5����ȡ��Ϣ\n");//��
	printf("\t\t     6��������Ϣ\n");//��
	printf("\t\t     7���˳�\n");

	for(i=0;i<20;i++)
		printf("===");
	printf("\n");

	printf("���������ѡ��:");
re:
	scanf("%d",&sel);
	if(sel<1||sel>7)
	{
		printf("����������:");
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