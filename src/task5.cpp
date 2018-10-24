#include "pch.h"
#include "task5.h"


void split(char ***result, int *N, char *buf, char simvol)
{
	*N = 0;
	for (int i = 0; buf[i]; i++)
	{
		if (buf[i] == simvol)
			(*N)++;
	}

	(*N)++;

	char **temp_substring = new char*[*N];
	int length_subline = 0;
	int element_subline = 0;
	for (int i = 0; buf[i]; i++)
	{
		length_subline++;
		if (buf[i] == simvol || buf[i + 1] == 0)
		{
			temp_substring[element_subline] = new char[length_subline + 1];
			for (int j = i - length_subline + 1; j < i + 1; j++) 
			{
				if (buf[j] != simvol)
					temp_substring[element_subline][j - (i - length_subline) - 1] = buf[j];
				else
					temp_substring[element_subline][j - (i - length_subline) - 1] = 0;
			}
			temp_substring[element_subline][length_subline] = 0;
			length_subline = 0;
			element_subline++;
		}
	}

	*result = temp_substring;
	
}

