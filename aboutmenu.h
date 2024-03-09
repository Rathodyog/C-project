#include<stdio.h>
 void about()
 {
 	FILE*fptr;
 	fptr=fopen("aboutmenudb.txt","a");
 	fprintf(fptr,"about our medical");
 	printf("data save-------->");
 	fclose(fptr);
 }
