void askme(void)
{	
	fgets(name,25,stdin);
	printf("\nLength = %d\n",strlen(name));
	name[strlen(name)-1]='\0';
	fgets(last,25,stdin);
	fgets(address,25,stdin);
}