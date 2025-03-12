#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog details
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Typedef for easier usage of struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */
