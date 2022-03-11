#include<stdio.h>
int main(){ 
FILE *fp; 
char ch; 
fp=fopen("File1.txt" ,"r");
fseek( fp,15,SEEK_SET); 
ch=fgetc(fp);  
while(!feof(fp ))  
{ 
printf("%c" ,ch);
printf("%d", ftell(fp ));
ch= getc(fp );  
} 
rewind(fp );
while(!feof(fp)) 
{  
printf("%c" ,ch);
printf("%d" ,ftell(fp));
ch= fgetc(fp); 
} 
fclose(fp ); 
}