#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
using namespace std;
void outputFile(int argc,char *argv[],int charactersNum,int wordNum,int lineNum,string s[],int snum[],int num)//����ļ� 
{
	for(int i=0;i<argc;i++)
	{
		if(strcmp(argv[i],"-o")==0)
		{
			ofstream fout;
			fout.open(argv[i+1]);
			fout<<"chaeacters: "<<charactersNum<<endl;
			fout<<"words: "<<wordNum<<endl;
			fout<<"lines: "<<lineNum<<endl;
			for(int i=0;i<num;i++)
			{
				fout<<s[i]<<": "<<snum[i]<<endl;
			}
			fout.close();
			break;
		}//����𰸵��ļ� 
	}
}
int main(int argc,char *argv[])
{
	string str=inputFile(argc,argv);
	string s[10];
	int sNum[10];
	outputFile(argc,argv,40,5,2,s,sNum,10);//������Ӧ���Ҫ��ĸ������� 
	return 0;
}
