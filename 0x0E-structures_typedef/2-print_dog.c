#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
