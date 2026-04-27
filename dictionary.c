// Implements a dictionary's functionality

#include "dictionary.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h> // for strcasecmp only s is needed
// #include for all like purple for mentioned
//  Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;
int counter = 0; // for line 75
// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO

    // · Hash word to obtain a hash value // copied from video prt sc
    int hash_value = hash(word);
    // to create cursor
    //. Access linked list at that index in the hash table

    node *cursor = table[hash_value];
    while (cursor != NULL)
    {
        //. Traverse linked list, looking for the word (strcasecmp)
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        else
        {
            cursor = cursor->next;
        } // if notthing while will stop
    }

    return false; // stop
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function

    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{ // TODO

    for (int i = 0; i < N; i++) // as line 78 table variable to mention
    {
        table[i] = NULL;
    }

    // we have to do like
    // Open the dictionary file

    // Read each word in the file

    // Add each word to the hash table

    // Close the dictionary file

    FILE *dictionary_file = fopen(dictionary, "r"); // first step // Open the dictionary file

    if (dictionary_file == NULL)
    {
        printf("Error in dictionary_file\n");
        return false; // to end
    } // AS LENGTH FROM dictionary.h  // temporary buffer

    // Read each word in the file
    char buffer[LENGTH + 1];
    // as video fscandf
    while (fscanf(dictionary_file, "%s", buffer) != EOF) // until end of file EOF
    {

        // to create new node for each word
        node *new_word = malloc(sizeof(node));
        // hash word to obtain hash value
        int hash_value = hash(buffer);
        // insert node into hash table at that location // as word is mentioned up
        strcpy(new_word->word, buffer);
        new_word->next = table[hash_value];
        table[hash_value] = new_word; // next value to the beginning of head
        counter++;                    // counter for word or word_counter
    }

    fclose(dictionary_file); // as to close
    return true;             // as false above
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void) // as question size by updating
{
    // TODO
    return counter; // to return counter
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        node *tmp = table[i];
        node *cursor = table[i];

        while (cursor != NULL)
        {
            cursor = cursor->next;
            free(tmp);
            tmp = cursor; // until cursor to null as video
        }
    }

    return true; // return true if all thing goes as plan // and only make as in make file all thing
                 // are done no need ./ ...
}
