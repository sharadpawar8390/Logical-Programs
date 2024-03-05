/*
4) Write application which accept file name from user and display size of file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};

    int fd = 0 , iRet = 0;
    int iSize = 0;

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }    
    else
    {
        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            iSize = iSize + iRet;    
        }
        
        printf("File contains %d bytes in it\n",iSize);

        close(fd);
    }

    return 0;
}