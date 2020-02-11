#include<stdio.h>
#include<string.h>

int change(char x[]){
	if(strcmp(x,"零") == 0)
		return 0;
	if(strcmp(x,"一") == 0)
		return 1;
	if(strcmp(x,"二") == 0)
		return 2;
	if(strcmp(x,"三") == 0)
		return 3;
	if(strcmp(x,"四") == 0)
		return 4;
	if(strcmp(x,"五") == 0)
		return 5;
	if(strcmp(x,"六") == 0)
		return 6;
	if(strcmp(x,"七") == 0)
		return 7;
	if(strcmp(x,"八") == 0)
		return 8;
	if(strcmp(x,"九") == 0)
		return 9;
	if(strcmp(x,"十") == 0)
		return 10;
}

void change2(int a){
	int x,y;
	if(a == 0)
		printf("零");
	if(a < 0)
	{	
		printf("负");
		a=-a;
	}
	if(a/100 != 0){
		switch(a/100){
			case 1:
				printf("一百");break;
			case 2:
				printf("二百");break;
			case 3:
				printf("三百");break;
			case 4:
				printf("四百");break;
			case 5:
				printf("五百");break;
			case 6:
				printf("六百");break;
			case 7:
				printf("七百");break;
			case 8:
				printf("八百");break;
			case 9:
				printf("九百");break;
		}
	}
	if(a/10%10 != 0){
		switch(a/10%10){
			case 1:
				printf("一十");break;
			case 2:
				printf("二十");break;
			case 3:
				printf("三十");break;
			case 4:
				printf("四十");break;
			case 5:
				printf("五十");break;
			case 6:
				printf("六十");break;
			case 7:
				printf("七十");break;
			case 8:
				printf("八十");break;
			case 9:
				printf("九十");break;	
		}
	}
	else 
		printf("零");
	if(a%10 != 0){
		switch(a%10){
			case 1:
				printf("一");break;
			case 2:
				printf("二");break;
			case 3:
				printf("三");break;
			case 4:
				printf("四");break;
			case 5:
				printf("五");break;
			case 6:
				printf("六");break;
			case 7:
				printf("七");break;
			case 8:
				printf("八");break;
			case 9:
				printf("九");break;
		}
	}
}

void tq(char y[]){
	char s[100];
	int i=0,n=0;
	while(y[i]!='"' && y[i]!='\0' )
				i++;
			while(1){
				i++;
				if(y[i]!='"') 
					s[n++]=y[i];
				else
					break;
			}
			s[n++]='\0';
	printf("%s\n",s);
}

int main(){
	char x1[100],x2[100],x3[100],x4[100],y1[100],y2[100],y3[100],y[100];
	char s1[100],s2[100],s[100];
	char z1[100],z2[100],z3[100],z4[100],z5[100],z6[100],z7[100],z8[100],z9[100];
	int a=0,b=0,i=0,n=0,a1=0,j=0,flag=0;
	int change(char x[]);
	void change2(int a);
	void tq(char y[]);
	while(scanf("%s",&y1)){
		if(strcmp(y1,"整数") == 0){
			if(flag == 0){
				scanf("%s %s %s",&x1,&x3,&x4);
				a+=change(x4);
				flag=1;
			}
			else{
				scanf("%s %s %s",&x2,&x3,&x4);
				b+=change(x4);
			}
		}
		else if(strcmp(y1,"看看") == 0){
			scanf("%s",&y2);
			if(strcmp(y2,x1) == 0){	
				change2(a);
				printf("\n");
			}
			if(strcmp(y2,x2) == 0){	
				change2(b);
				printf("\n");
			}
		}
		else if(strcmp(y1,"如果") == 0){
			scanf("%s %s %s %s %s %s %s %s %s",&z1,&z2,&z3,&z4,&z5,&z6,&z7,&z8,&z9);
			if(strcmp(z5,"看看") == 0)
				if(strcmp(z1,x1) == 0){
					if(a>change(z3)) tq(z6);
					else tq(z9);
				}
				else{
					if(b>change(z3)) tq(z6);
					else tq(z9);
				}
			else{
				if(strcmp(z1,x1) == 0){
					if(a>change(z3)) 
						if(strcmp(z6,"增加") == 0)
							if(strcmp(z5,x1) == 0) a+=change(y3);
							else b+=change(y3);
								
						else if(strcmp(z6,"减少") == 0)
							if(strcmp(z5,x1) == 0) a-=change(y3);
							else b-=change(y3);	
					else
						if(strcmp(z9,"无") == 0) break;
				}
				else{
					if(b>change(z3)) 
						if(strcmp(z6,"增加") == 0)
							if(strcmp(z5,x1) == 0) a+=change(y3);
							else b+=change(y3);
								
						else if(strcmp(z6,"减少") == 0)
							if(strcmp(z5,x1) == 0) a-=change(y3);
							else b-=change(y3);	
					else
						if(strcmp(z9,"无") == 0) break;
				}
			}
		}
		else{
			scanf("%s %s",&y2,&y3);
			if(strcmp(y2,"增加") == 0){
				if(strcmp(y1,x1) == 0)
					a+=change(y3);
				else
					b+=change(y3);
			}		
			else if(strcmp(y2,"减少") == 0){
				if(strcmp(y1,x1) == 0)
					a-=change(y3);
				else
					b-=change(y3);
			}	
		}
	}
	return 0;
}