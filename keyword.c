#define MAX_NAME 30

struct keytab{
	int nums; //��� ������
	char name[MAX_NAME]; 
};

struct keytab keywrds[13];

void count_word(char *word)
{
	int i;
	//�� keyword���� 
	for (i=0;i<13;i++) 
	{
		//if word�� keyword�� ������
		if(strncmp(word,keywrds[i],name,strlen(keywrds[i],name))==0)
		{
			//nums++; 
			keywrds[i].nums++;
		}
		
	}
	
}

void print_word()
{
	//i��° keyword�� ���ؼ� 
		//printf(Ű���� �̸�: �󵵼�);
		printf(keywrds:13); 
}
