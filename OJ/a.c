string input()
{
	string temp;
	char tchars[2]={0};
	while(scanf("%c",&tchars[0])==1 && (tchars[0]=='\n' || temp.append(tchars)=="")); // 释放缓冲区
	while(scanf("%c",&tchars[0])==1 && tchars[0]!='\n' && temp.append(tchars)!="");
	return temp;
}