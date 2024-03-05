// 3) Write application which accept file name from user and read all data from that file and display contents on screen.
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

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to display data \n",FileName);
    }    
    else
    {
        printf("Display data on screen sucessfully...\n",FileName,fd);
        close(fd);
    }

    return 0;
}