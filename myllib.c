#include "myllib.h"


int char_to_dec(char c)
{
	if (c >= 48 && c <= 57)
		return c-48;
	else if(c >= 65 && c <= 70)
		return c-65+10;
	else if(c >= 97 && c <= 102)
		return c-97+10;
	else
		return -1;
}

int hex_to_char(int num)
{
	int char_num;
	switch(num)
	{
		case 0:
			char_num = '0';
			break;
		case 1:
			char_num = '1';
			break;
		case 2:
			char_num = '2';
			break;
		case 3:
			char_num = '3';
			break;
		case 4:
			char_num = '4';
			break;
		case 5:
			char_num = '5';
			break;
		case 6:
			char_num = '6';
			break;
		case 7:
			char_num = '7';
			break;
		case 8:
			char_num = '8';
			break;
		case 9:
			char_num = '9';
			break;
		case 0xa:
			char_num = 'a';
			break;
		case 0xb:
			char_num = 'b';
			break;
		case 0xc:
			char_num = 'c';
			break;
		case 0xd:
			char_num = 'd';
			break;
		case 0xe:
			char_num ='e';
			break;
		case 0xf:
			char_num ='f';
			break;
		default:
			char_num = '\0';
	}

	return char_num;
}


void str_del_char(char *str, char c)
{
	int i = 0, l = 0;
	while ( s_str[i] ) {
		if (s_str[i] == c) {
			i++;
			continue;
		}
		s_str[l] = s_str[i];
		//printf("d_str[%d] = %c\n", l, d_str[l]);
		l++;
		i++;
	}
	s_str[l] = 0;
	//printf("l = %d, d_str = %s\n", l, d_str);
}


