#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

void print_str(const char * const pComment, const char * const pStr)
{
	printf("%s:\t%s\n",pComment, pStr);
}

int main() {

	printf("Welcome to old style!");
	const char* const str1 = "strin1";
	char str2[] = "string2";
	char buff[64] = {}; // init by 0

	printf( "Size of string as pointer = %ul\n"
			"Size of string as array = %ul\n"
			"Size of string as array of known size = %ul\n", sizeof(str1), sizeof(str2), sizeof(buff));


	strncpy(buff,str2, 64); //better, than strcpy
	print_str("str2 in buff", buff);
	strncpy(buff+strlen(str2),str2, 64); // pointer+ofset
	print_str("2*str2 in buff", buff);
	buff[strlen(str2)] = 0;
	print_str("cut text buff by 0", buff);

	cout << "It is one char: " << *buff << "\nIt is the same char: " << buff[0] << endl;

	cout << "output char by char:"<<endl;
	char *p = buff;
	while(*p)
	{
		putchar(*p++);
	}

	//some converting
	char values[] = "12 3.5 1.4e2";
	int v1= 0;
	float v2= 0;
	double  v3= 0;
	sscanf(values,"%d %f %lf", &v1, &v2, &v3);
	cout << "\n" << v1 << " " << v2 << " " << v3 << endl;

	string stdstr(str1);
	cout << "\nCreate string from old style: " << stdstr << endl;
	printf("Using std string as char pointer: %s ", stdstr.c_str());

	return 0;
}
