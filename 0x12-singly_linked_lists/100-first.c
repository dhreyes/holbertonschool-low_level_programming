#include <stdio.h>
/**
 * dob4main - puts attribute before main
 * Return: none
 */
void __attribute__ ((constructor)) dob4main()
{
	printf("You're beat! and yet, you must %s",
			"allow,\nI bore my house upon my back!\n");
}
