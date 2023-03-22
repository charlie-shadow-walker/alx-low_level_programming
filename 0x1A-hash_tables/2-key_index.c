#include "hash_tables.h"

/**
 * key_index - a function that returns the index of a key
 * @key: the key
 * @size: the size of the array
 *
 * Return: the index at wich the key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
