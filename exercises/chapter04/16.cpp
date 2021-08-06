using namespace std;
#include "stdio.h"
#include "string.h"
typedef char chuoi[100];
//typedef SV daySV[100];
//typedef char *chuoi2;
//void daoChuoi(chuoi);
int main() {
//	chuoi2 s2 = new char[100];
//	SV* p = new SV[2000];
//	daySV p;
	chuoi s; // 0,1,2,3,..,99
	fflush(stdin); // suc sach bo dem ban phim
//	for(int i=0;i<=3;i++) {
//		//s[i] = 'a'; //*(s+i) = 'a';
//		scanf("%c",&s[i]);
//	}
	
	gets(s); // abc, abc\0.................99
		
		//    *(p+sizeof(SV)*i) = 'a';
//	for(int i=0;i<=3;i++)
//		printf("%c, ",s[i]);
	printf("Original: \'%s\'", s); 
	// '   lEx  vAN    tEO   ' -> 
	                 //  012345
	                 // 'lEx  vAN    tEO   '
	                 //  0
	// 1: xoa cac khoang trang ben trai ~ trim
	int i=0;
	for(; s[i]==' '; i++) ;
	int j=0;
	for(; s[j]!='\0'; j++) s[j] = s[j+i];
	s[j]='\0';
	printf("\nAfter Trim left: \'%s\'", s); 
	
	// 2: xoa cac khoang trang o ben phai
	int L=strlen(s); // 0,1,..,L-1,\0
	for(i=L-1; s[i]==' '; i--) ;
	s[i+1] = '\0';
	printf("\nAfter Trim right: \'%s\'", s); 
	
	int startWord=0;
	for(;;) {
		if (s[startWord]>='a' && s[startWord]<='z')
			s[startWord] = (char)(s[startWord] - ('a' - 'A'));
		int i = startWord+1;
		for(; s[i]!= '\0' && s[i]!= ' '; i++) {
			if (s[i]>='A' && s[i]<='Z')
				s[i] = (char)(s[i] + ('a' - 'A'));
		}
		if(s[i]== '\0') break;
		startWord=i+1; int k=startWord;
		for(; s[k]==' '; k++) ;
		int j=startWord;
		for(; s[j]!='\0'; j++) s[j] = s[k++];
		s[j]='\0';
	}
	printf("\nFinish: \'%s\'", s); 
}
	
//	daoChuoi(s);
//	printf("Chuoi sau khi dao la %s", s);
//	
//	
//	
//	
//	                 // abc\0..............99
//	                 // 3abc...........999
//	                 // 0123
//	// insert, delete cac ky tu hoac cac chuoi con
//	// do dai cua chuoi la bao nhieu - strlen(s)
//	// copy chuoi nay sang chuoi kia - strcpy(d,s) 
//	// trong thu vien "string.h"
//	printf("Do dai cua %s la %d", s, strlen(s));
//	chuoi s2;
//	gets(s2);
//	// so sanh tu trai sang, theo thu tu alphabet
//	// le van b       le 
//	// le van c		  le let
//	if (strcmp(s,s2)==0) printf(" = ");
//	else if (strcmp(s,s2)==1) printf(" > ");
//	else if (strcmp(s,s2)==-1) printf(" < ");
//}
//
//void daoChuoi(chuoi s) {
//	int L = strlen(s);
//	for(int i=0, j=L-1; i<j; i++, j--)
//		{
//			char t = s[i];s[i]=s[j]; s[j]=t;
//		}
//}
