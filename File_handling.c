#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    char string[64]="This is how a boy top the world\n ";

//  ``r''   Open text file for reading.  The stream is positioned at the beginning of the file.

//  ``r+''  Open for reading and writing.  The stream is positioned at the  beginning of the file.

//  ``w''   Truncate file to zero length or create text file for writing.  The stream is positioned at the beginning of the file.

//  ``w+''  Open for reading and writing.  The file is created if it does not  exist, otherwise it is truncated.  The stream is positioned at  the beginning of the file.

//  ``a''   Open for writing.  The file is created if it does not exist.  The  stream is positioned at the end of the file.  Subsequent writes  to the file will always end up at the then current end of file,  irrespective of any intervening fseek(3) or similar.

//  ``a+''  Open for reading and writing.  The file is created if it does not  exist.  The stream is positioned at the end of the file.  Subse-  quent writes to the file will always end up at the then current  end of file, irrespective of any intervening fseek(3) or similar.



    //**** Reading a File****
    // ptr=fopen("file_1.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("%s\n",string);
    // fclose(ptr);
     

    //**** Writing a File****
    // ptr=fopen("file.txt","w");
    // fprintf(ptr,"%s",string);
    // fclose(ptr);


    //  **** Reading & Writing a File****
    // ptr=fopen("file_1.txt","a");
    // fprintf(ptr,"%s",string);
    // fclose(ptr);
    
    
    // ptr=fopen("file_1.txt","r");
    // char c=fgetc(ptr);
    // printf("%c",c);
    
    // ptr=fopen("file_1.txt","r");
    // char str[4];
    // fgets(str,3,ptr);
    // printf("%s",str);
   
   
    // ptr=fopen("file_1.txt","w");
    // fputc('o',ptr);
    // fputs("This is dj",ptr);
   
   
    // ptr=fopen("file_1.txt","r+");
    // fputc('o',ptr); 
    // fputs("This is dj",ptr);
    

    // ptr=fopen("file_1.txt","w+");
    // fputc('o',ptr); 
    // fputs("This is dj",ptr);
    
    
    // ptr=fopen("file_1.txt","a+");
    // fputc('o',ptr); 
    // fputs("This is dj",ptr);
    
    return 0;
}