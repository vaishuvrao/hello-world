#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stdlib.h>
#define TOK_ADD 5
#define MAXLINE 25
#define TOK_SUB 10
#define TOK_MUL 14
#define TOK_DIV 20
jmp_buf jmpbuffer;
char ans,a,b,*c,*d;
char *tok_ptr;
void do_line(char *);
void cmd_add(void);
void cmd_sub(void);
void cmd_mul(void);
void cmd_div(void);
int get_token(void);

int main(void)
{
	char line[MAXLINE];
	if (setjmp(jmpbuffer) != 0)
		printf("error");
	while (fgets(line,MAXLINE, stdin) != NULL)
		do_line(line);
		exit(0);
}
     
void do_line(char *ptr)
{
	int cmd;            
	tok_ptr = ptr;
	while ((cmd = get_token()) > 0) 
	{
		switch (cmd) 
		{          
			case TOK_ADD:   cmd_add();
					break;
			case TOK_SUB:	cmd_sub();
					break;
			case TOK_MUL:   cmd_mul();
					break;
			case TOK_DIV:	cmd_div();
					break;
			default: 	printf("bye");
					break;
		}
		break;
	}
}

void cmd_add(void)
{
	int token;
	a=atoi(c);
	b=atoi(d);
	
	ans=a+b;
	printf("%d\n",ans);

	/*	
	token=get_token();
	if (token < 0)
		longjmp(jmpbuffer, 1);
	*/
}

void cmd_sub(void)
{
	int token;
	a=atoi(c);
	b=atoi(d);
	ans=a-b;
	printf("%d\n",ans);
	token=get_token();
	if(token<0)
		longjmp(jmpbuffer,1);
}

void cmd_mul(void)
{
	int token;
	a=atoi(c);
	b=atoi(d);
	ans=a*b;
	printf("%d\n",ans);
	token=get_token();
	if(token<0)
		longjmp(jmpbuffer,1);
}

void cmd_div(void)
{
	int token;
	a=atoi(c);
	b=atoi(d);
	ans=a/b;
	printf("%d\n",ans);
	token=get_token();
	if(token<0)
		longjmp(jmpbuffer,1);
}

int get_token(void)
{

		tok_ptr=strtok(tok_ptr, " ");
				
		if(strcmp(tok_ptr,"add")==0)
		{	
			c=strtok(NULL, " ");
			d=strtok(NULL, " ");
			return 5;
		}
		else if(strcmp(tok_ptr,"sub")==0)
		{
			c=strtok(NULL, " ");
			d=strtok(NULL, " ");
			return 10;
		}
		else if(strcmp(tok_ptr,"mul")==0)
		{
			c=strtok(NULL, " ");
			d=strtok(NULL, " ");
			return 14;
		}
		else if(strcmp(tok_ptr,"div")==0)
		{
			c=strtok(NULL, " ");
			d=strtok(NULL, " ");			
			return 20;
		}
		else if(strcmp(tok_ptr,"bye\n")==0)
		{
			exit(0);
		}
		else
			return -1;
}

