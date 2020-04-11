#include <stdio.h>
#include<string.h>
#include<string.h>
#include<cstdlib>
int main()
{
FILE *pa,*pb,*pc;
    long long linedata;
	int t=0;
	int m=0;
	int n=0;
    int k=0;
	int j=0;
	int y=0;
	int i=0;
	int p=0;
	int log=0;
	char ca[8000],cb[8000];
    char a[10],b[10];
    char str1[40],str2[40];
	str1[0]='\0';
	str2[0]='\0';
	printf("请将比较文件放到目录下\n");
 if((pa=fopen("a.txt","r+"))==NULL){
	 printf("不能打开a文件!");}
if((pb=fopen("b.txt","r+"))==NULL){
	printf("不能打开b文件!");}
if((pc=fopen("c.txt","a+"))==NULL){
	 printf("不能打开c文件!");}
for(linedata=1;!feof(pa);linedata++)
{
		while(!feof(pa)){                               /*a行总字符串*/
		ca[i]=fgetc(pa);
		if(ca[i]=='\n'){
			break;}
		ca[i+1]='\0';
		i++;
		}
		/*****/
		while(!feof(pb)){                               /*b行总字符串*/
		cb[p]=fgetc(pb);
		if(cb[p]=='\n'){
			break;}
		cb[p+1]='\0';
		p++;
		}
		/*****/
		for(;;){
			for(;;){                           /*单词a字符串*/   
				if(j>=i){                                   
					log=-1;
					k=0;
					m++;
					break;}
				if(ca[j] >='a' && ca[j]<='z' ||  ca[j] >='A' && ca[j]<='Z'){
					str1[k]=ca[j];
					k++;
					str1[k]='\0';
				}
				else{
					if(str1[0]!='\0'){
						k=0;
						m++;
						break;
					}
				}
				j++;
			}
				/*********************/
				for(;;){                           /*单词b字符串*/    
				if(y>=p){                                   
					log=-1;
					k=0;
					break;}
				if(cb[y] >='a' && cb[y]<='z' ||  cb[y] >='A' && cb[y]<='Z'){
					str2[k]=cb[y];
					k++;
					str2[k]='\0';
				}
				else{
					if(str2[0]!='\0'){
						k=0;
						break;
					}
				}
				y++;
				}
				/*****/
				/*新建文件*/
				itoa(linedata,a,10);
				itoa(m,b,10);
				if(strcmp(str1,str2)!=0){
					if(t==0){
						fputs("行号,单词首字母在本行中的序号",pc);
					    fputc('\n',pc);
					}
					fputs(a,pc);
					fputc(' ',pc);
					fputs(b,pc);
					fputc(' ',pc);
					fputc('\n',pc);
					t=1;
				}
				/******/
				for(n=0;n<40;n++){
					str1[n]='\0';
				}
				for(n=0;n<40;n++){
					str2[n]='\0';
				}
				
				
				if(log==-1){
					break;
				}
				}
		         /*重置*/
		        i=0;
				p=0;
				j=0;
				y=0;
				m=0;
				log=0;
				for(n=0;n<999;n++){
					ca[n]='\0';
				}
				for(n=0;n<999;n++){
					cb[n]='\0';
				}
	
}
if(t==0){
	fputs("Exactly the same",pc);
}
else{
}
printf("比较结果c.txt文件生成成功\n");
fclose(pa);
fclose(pb);
fclose(pc);
return 0;
}











