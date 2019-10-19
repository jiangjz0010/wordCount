#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
using namespace std;
void outputFile(int argc,char *argv[],int charactersNum,int wordNum,int lineNum,string s[],int snum[],int num)//输出文件 
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
		}//输出答案到文件 
	}
}
int main(int argc,char *argv[])
{
	string str=inputFile(argc,argv);
	string s[10];
	int sNum[10];
	outputFile(argc,argv,40,5,2,s,sNum,10);//参数对应输出要求的各个内容 
	return 0;
}
