#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: doggo
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("%s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner= (nil)");
	else
		printf("%s\n", d->owner);
}
