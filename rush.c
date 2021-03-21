#include "unistd.h"
#include "stdio.h"


int main(int argc, char *argv[])
{
char *cat;
int i = 0;
int j = 0;
int value[16];
cat = argv[1];
//we could change the param of the if to allow bigger value
//with a argv param...
//we could pass ir as a param too...
while(*cat)
{
    if(i % 2 == 0 && *cat > '0' && *cat < '5')
    {
       value[j] = *cat - '0';
      printf("%d",value[j]);
      j++;
    }
    cat++;
    i++;
}

}
