 #include<stdio.h>
 int c=0;
 char p[20];
 void s();
voidl();
 void lprime();
 voidl()
 {
 	s();
 	lprime();
 }
 void lprime()
 {
 	if(p[c]==',')
 	{
 		c++;
 		s();
 		lprime();
	 }
 }
 void s()
 {
 	if(p[c]=='a')
 	c++;
 	else if(p[c]=='(')
 	{
 		c++;
 		l();
 		if(p[c]==')')
 		c++;
 		else
 		c--;
	 }
	 else
	 printf("\ninvalid expression");
 }
 int main()
 {
 	printf("\nimplementation of RECURSION DESCENT PRASER\n");
 	printf("\nenter the expression:\n");
 	scanf("%s",p);
 	s();
 	if(p[c]=='$')
 	printf("\nthe string is accepted");
 	else
 	printf("\n the string is rejected");
 }
