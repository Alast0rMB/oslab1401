#include <stdio.h>
#include <string.h>

int main()
{
     FILE *file_src,*file_dst;
     char data[50]; //String of characters that we read each time
     
     file_src = fopen("src.txt","r");
     file_dst = fopen("dst2.txt","w");

     if(file_src)
     {
          printf("Source file is opened for reading.\n");
          if(file_dst){
               printf("Destination file is opened or created.\n");
               while(fgets(data,50,file_src) != NULL)
               {
                    //Writing the data to the destination
                    fputs(data,file_dst);
                    //fputs("\n",file_dst);
               }
               fclose(file_dst);
               printf("Destination file is closed\n");
          }
          else
               printf("Somthing went wrong while creating destination file.\n");

          fclose(file_src);
          printf("Source file is closed.\nData is written.Terminating process.\n");
     }
     else
          printf("Source file did not open correctly.\n");
     
     return 0;
}
