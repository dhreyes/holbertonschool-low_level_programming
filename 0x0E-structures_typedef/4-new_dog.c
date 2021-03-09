#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - return pointer to new str duplicate
 * @str: string that will be duplicated
 * Return: Returns pointer to duplicate str, else NULL
 */
char *_strdup(char *str)
{
	int len;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	dup = malloc((sizeof(char)) * (len + 1));
	if (dup == NULL)
		return (NULL);

	while (len >= 0)
	{
		dup[len] = str[len];
		len--;
	}
	return (dup);
}
/**
 * new_dog - create new doge with type dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);

	doge->name = _strdup(name);
	doge->age = age;
	doge->owner = _strdup(owner);

	return (doge);
}
