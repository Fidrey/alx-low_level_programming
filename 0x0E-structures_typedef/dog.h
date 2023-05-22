#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name of the structure
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes the attributes of a dog structure
 * with the provided name, age, and owner values.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
void print_dog(struct dog *d) /* print_dog - prints a dog structure */
dog_t *new_dog(char *name, float age, char *owner)
void free_dog(dog_t *d)

#endif /* DOG_H */
