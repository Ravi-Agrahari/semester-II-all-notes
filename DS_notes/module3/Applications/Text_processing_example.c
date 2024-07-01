/*
Introduction and Explanation:
A Trie is a tree-like data structure used for storing a dynamic set of strings, where the keys are usually strings. It is used for tasks like autocomplete and spell checker.

Diagram:
       (root)
       /  \
      t    b
     /    / \
    h    a   e
   /    /     \
  e    t       l
 / \          / \
i   r        l   l
    |             |
    n             o
                 |
                 n

Example Program (Trie in C):
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure of a trie node
struct TrieNode {
    struct TrieNode* children[26];
    int isEndOfWord;
};

// Create a new trie node
struct TrieNode* createTrieNode() {
    struct TrieNode* node = (struct TrieNode*)malloc(sizeof(struct TrieNode));
    node->isEndOfWord = 0;
    for (int i = 0; i < 26; i++)
        node->children[i] = NULL;
    return node;
}

// Insert a word into the trie
void insertTrie(struct TrieNode* root, const char* key) {
    struct TrieNode* pCrawl = root;
    while (*key) {
        int index = *key - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = createTrieNode();
        pCrawl = pCrawl->children[index];
        key++;
    }
    pCrawl->isEndOfWord = 1;
}

// Search for a word in the trie
int searchTrie(struct TrieNode* root, const char* key) {
    struct TrieNode* pCrawl = root;
    while (*key) {
        int index = *key - 'a';
        if (!pCrawl->children[index])
            return 0;
        pCrawl = pCrawl->children[index];
        key++;
    }
    return (pCrawl != NULL && pCrawl->isEndOfWord);
}

int main() {
    // Create a root node
    struct TrieNode* root = createTrieNode();

    // Insert words into the trie
    insertTrie(root, "the");
    insertTrie(root, "a");
    insertTrie(root, "there");
    insertTrie(root, "answer");
    insertTrie(root, "any");
    insertTrie(root, "by");
    insertTrie(root, "bye");
    insertTrie(root, "their");

    // Search for different keys
    printf("the: %s\n", searchTrie(root, "the") ? "Found" : "Not Found");
    printf("these: %s\n", searchTrie(root, "these") ? "Found" : "Not Found");
    printf("their: %s\n", searchTrie(root, "their") ? "Found" : "Not Found");
    printf("thaw: %s\n", searchTrie(root, "thaw") ? "Found" : "Not Found");

    return 0;
}

/*
Summary:
Tries are efficient for prefix-based searches, making them suitable for applications like autocomplete and spell checkers. They provide fast insertion and search operations for strings.
*/
