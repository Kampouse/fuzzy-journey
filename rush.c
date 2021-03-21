#include "unistd.h"
#include "stdio.h"


int parsinginput(char *input,int *value)
	{
		int i;
		int j;

		i = 0;
		j = 0;
		while (*input)
		{	
			if(i % 2 == 0 && *input > '0' && *input < '5')
			{
			   value[j] = *input - '0';
			j++;		
			}
			i++;
			input++;
		}
		if(j != 16)
		{
			return (-1);
		}
	return *value;
	}
int main(int argc, char *argv[])
{
	char *copy;
	
	int value[16];
		if(argc == 2)
		{
			copy = argv[1];
			parsinginput(copy,value); 
		}
		else
		{
		write(1,"error",5);
		}
}


