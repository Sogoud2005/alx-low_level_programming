#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a
 * @name: a
 * @age: a
 * @owner: a
 * Description: structures
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(const char *str);
char *_strcpy(char *dest, char *str);
void free_dog(dog_t *d);
#endif
