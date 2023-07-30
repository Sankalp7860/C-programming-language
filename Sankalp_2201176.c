#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct words_name{
    char words[50];
}s[1000];

//Taking paragraph as a input
char * paragraphInput(void){
    char * str=(char *)calloc(50000,sizeof(char));
    printf("Enter the paragraph: ");
    fgets(str,50000,stdin);
    return str;
}


//Replacing all characters other than English alphabet to white spaces
char * removeNumber(int z,char * str){
    for (int i = 0; i < z-1; i++)
    {
        if (!((str[i]>96 && str[i]<123) || (str[i]>64 && str[i]<91)))
        {
            str[i]=' ';
        }
        
    }
    return str;
}


//Removing multiple Spaces to single spaces
char * removeMultipleSpaces(int z,char * str){
    for (int i = 0; i < z-1; i++)
    {
        if (str[i]==' ' && str[i+1]==' ')
        {
            for (int j = i; j < z; j++)
            {
                str[j]=str[j+1];
            }
            
        }
        
    }
    return str;
}

//Converting all Lower case to Upper Case
char * lowerToUpper(int z,char * str){
    for (int i = 0; i < z-1; i++)
    {
        if (str[i]>96 && str[i]<123)
        {
            str[i]=(str[i]-32);
        }
    }
    return str;
}

//Finding all Unique Words and Their frequencies
void uniqueFrequency(int z,char * str){
    char* freq;
    int count=0;
    for (int i = 0; i < z-1; i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
        
    }
    
    char **matrix= (char**) calloc(count+1,sizeof(char*));
    for (int i = 0; i < count+1; i++)
    {
        matrix[i]=(char*) calloc(50,sizeof(char));
    }
    int l=0,k=0,f=0;
    for (int i = 0; i < z-1; i++)
    {
        if (str[i]==' ')
        {
            l=i-1;
            int g=0;
            for (int j = f; j < l+1; j++)
            {
                matrix[k][g]=str[j];
                g++;
            }
                k++;
        
            f=i+1;
        }
        
    }
    int m=0;
    for(int p=0;p<count+1;p++){
        int count1=1;
        for (int i = 0; i < count+1; i++){
            if (strcmp(matrix[p],matrix[i+1])==0)
            {
                count1++;
                freq[i+1]=-1;
            }
        }
        freq[p]=count1;
    }   
    
    
// Sorting of frequencies and printing in descending order of frequencies
int max=0;
for (int j = 0; j < count+1; j++)
{
    int i = j;
    for (; i < count+1; i++)
    {
        if (freq[i]>freq[j])
        {
            max=freq[i];
        }

    }
    if (freq[i]!=-1)
    {
        printf("Word is %s and Its freq is %d",matrix[i],freq[i]);
    }
    
}

}
// finding the word and printing its frequency
void find_word(int z,char * string, char * str){
       char* freq;
    int count=0;
    for (int i = 0; i < z-1; i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
        
    }
    
    char **matrix= (char**) calloc(count+1,sizeof(char*));
    for (int i = 0; i < count+1; i++)
    {
        matrix[i]=(char*) calloc(50,sizeof(char));
    }
    int l=0,k=0,f=0;
    for (int i = 0; i < z-1; i++)
    {
        if (str[i]==' ')
        {
            l=i-1;
            int g=0;
            for (int j = f; j < l+1; j++)
            {
                matrix[k][g]=str[j];
                g++;
            }
                k++;
        
            f=i+1;
        }
        
    }
    int m=0;
    for(int p=0;p<count+1;p++){
        int count1=1;
        for (int i = 0; i < count+1; i++){
            if (strcmp(matrix[p],matrix[i+1])==0)
            {
                count1++;
                freq[i+1]=-1;
            }
        }
        freq[p]=count1;
    }   
for (int i = 0; i < count+1; i++)
{
    if (string==matrix[i])
    {
        printf("Word is %s and its freq is %d",string,freq[i]);
    }
    
}

    
}
int main()
{
    char * string;
    char * str =paragraphInput();
    int z=strlen(str);
    str=removeNumber(z,str);
    str=removeMultipleSpaces(z,str);
    z=strlen(str);
    str=lowerToUpper(z,str);
    printf("Enter the word(enter 1 to exit)");
    scanf("%s",&string);
    if (string=="1")
    {
        exit(0);
    }
    else
    {
        find_word(z,str,string);
    }
    
    
    return 0;
}





