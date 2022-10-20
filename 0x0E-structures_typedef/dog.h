#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 * @name: name
 * @age: age
 * @owner:  owner of the dog
 * Description: Defines metadata about the dog and type of dog's struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
