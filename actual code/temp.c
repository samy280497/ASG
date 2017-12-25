#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#include <time.h>
#include <string.h>
#include <time.h>
static FILE *fout;
int main()


{
	char key[50];	
	printf("Welcome to auto story generator!");
	printf("Because writing is tough task.");
	printf("enter the input keyword:");
	scanf("%s",key);
        FILE *fp;
	
              char w[200];//,search_string[];
	//search_string[]=key;





              char fName[20];
 int z;
 for (z=1; z<18; z++)    
 { 
	
    sprintf(fName,"%d.txt",z);
    fp = fopen(fName, "r");
    
 
// process your data here
 








	//fseek(fp,10L,400);

        if(!fp)
	//remove defn and special chars from dictionary manually

        {


                perror("could not find the file");


                exit(0);


        }

  //  int x=0;

        while ( fgets ( w, 200, fp ) != NULL ) 


        {
		int x=0;
		//fseek(fp,200,SEEK_CUR);
		//if (line[0] != '\n')

              //  if(strstr(w,search_string)){
		if(strstr(w,key)){		fseek(fp,100,SEEK_CUR);
		for(int x=0;x<=0;x++){
				//fseek(fp,100,SEEK_CUR);
                //fputs ( w, stdout ); }
		printf("%.100s", w);}//.50 will limit the output as the 50 charcarcter per line. we can also change this as per the length of user need
//writing output to file so as to espeak
		fout = fopen("testout.txt","w");
		fprintf(fout,w);
		fclose(fout); fout = stdout;
		}
	}
		//fseek(fp,100,SEEK_CUR);
		

	//printf("\n\n\n\nBREAK BREAK BREAK\n\n\n\n");
	 
	
				
		
  

        


       // fclose ( fp );


        return 0;


}
}
