#ifndef __MYLLIB_H
#define __MYLLIB_H

/*
把一个字符转换成十进制整型

返回值:	一个整型
		如果输入的字符非法,返回-1
*/
int char_to_dec(char c);

/*
把一个一位的十六进制值转换成一个字符

返回值:
		一个整型数
		如果输入的字符非法,返回-1
*/
char hex_to_char(int num);

/*
把一个字符转换成十进制整型
返回值:
		空
*/
void str_del_char(char *str, char c);

#endif
