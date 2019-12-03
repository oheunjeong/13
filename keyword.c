#define MAX_NAME 30

struct keytab{
	int nums; //몇번 나오냐
	char name[MAX_NAME]; 
};

struct keytab keywrds[13];

void count_word(char *word)
{
	int i;
	//각 keyword별로 
	for (i=0;i<13;i++) 
	{
		//if word랑 keyword랑 같으면
		if(strncmp(word,keywrds[i],name,strlen(keywrds[i],name))==0)
		{
			//nums++; 
			keywrds[i].nums++;
		}
		
	}
	
}

void print_word()
{
	//i번째 keyword에 대해서 
		//printf(키워드 이름: 빈도수);
		printf(keywrds:13); 
}
