#include "unistd.h"
#include "stdio.h"


int main(int argc, char *argv[])
{

char *cat;
int i = 0;
int j = 0;
int value[16];
cat = argv[1];
while(*cat)
{
    if(i % 2 == 0)
    {
       value[j] = *cat - '0';
      printf("%d",value[j]);
      j++;
    }
    cat++;
    i++;
}


}
