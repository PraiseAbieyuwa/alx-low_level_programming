#ifndef _DOG_FILE_
#define _DOG_FILE_

/**
 * struct dog - struct that stores a dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: store a dog's info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Type for struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

