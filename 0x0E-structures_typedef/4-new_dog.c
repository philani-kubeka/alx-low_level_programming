#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 *
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 *
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpname, *cpowner;
	int name_len = 0, owner_len = 0;
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	cpname = malloc(name_len + 1);

	if (cpname == NULL)
		return (NULL);
	for (i = 0; i < name[i]; i++)
		cpname[i] = name[i];
	cpname[i] = '\0';

	cpowner = malloc(owner_len + 1);

	if (cpowner == NULL)
		return (NULL);
	for (j = 0; j < owner[j]; j++)
		cpowner[j] = owner[j];
	cpowner[j] = '\0';

	new_dog->name = cpname;
	new_dog->age = age;
	new_dog->owner = cpowner;

	return (new_dog);
}
