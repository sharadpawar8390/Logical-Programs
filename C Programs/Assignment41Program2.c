// 2) Write application which accept file name from user and create that file.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the name of file that you want to create\n");
    scanf("%s",FileName);

    fd = creat(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to crete file\n",FileName);
    }    
    else
    {
        printf("File gets created sucessfully..",FileName,fd);
        close(fd);
    }

    return 0;
}