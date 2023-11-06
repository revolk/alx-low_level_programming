#ifndef DOG_H
#define DOG_H

/**
 *  * struct dog - a dog's basic info
 *   * @name: First member
 *    * @age: Second member
 *     * @owner: Third member
 *      *
 *       * Description: A structure to store information about a dog.
 *        */
struct dog
{
	    char *name;
	        float age;
		    char *owner;
};

/**
 *  * dog_t - typedef for struct dog
 *   */
typedef struct dog dog_t;

/**
 *  * init_dog - Initializes a dog structure.
 *   * @d: Pointer to the dog structure.
 *    * @name: The name of the dog.
 *     * @age: The age of the dog.
 *      * @owner: The owner of the dog.
 *       */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 *  * print_dog - Prints the information of a dog structure.
 *   * @d: Pointer to the dog structure.
 *    */
void print_dog(struct dog *d);

/**
 *  * new_dog - Creates a new dog structure.
 *   * @name: The name of the dog.
 *    * @age: The age of the dog.
 *     * @owner: The owner of the dog.
 *      * Return: Pointer to the new dog structure.
 *       */
dog_t *new_dog(char *name, float age, char *owner);

/**
 *  * free_dog - Frees memory allocated for a dog structure.
 *   * @d: Pointer to the dog structure.
 *    */
void free_dog(dog_t *d);

/**
 *  * _strcpy - Copies a string to a buffer.
 *   * @dest: Destination buffer.
 *    * @src: Source string.
 *     * Return: Pointer to the destination buffer.
 *      */
char *_strcpy(char *dest, char *src);

/**
 *  * _strlen - Calculates the length of a string.
 *   * @s: Input string.
 *    * Return: Length of the string.
 *     */
int _strlen(char *s);

#endif

