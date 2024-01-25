#include <bits/stdc++.h>
class Node
{
public:
    Node *link;
    int ctend;
    int ctpx;
    Node()
    {
        link = new Node[26];
        ctend = 0;
        ctpx = 0;
    }
    void put(char ch, Node *node)
    {
        link[ch - 'a'] = node;
    }
    Node *getReference(char ch)
    {
        return link[ch - 'a'];
    }

    bool containKey(char ch)
    {
        return link[ch - 'a'] != NULL;
    }
    int getend() { return ctend; }
    int getpre() { return ctpre; }
    void incend() { ctend++; }
    void incpre() { ctpre++; }
    void decend() { ctend--; }
    void decpre() { ctpre--; }

} class Trie
{
    Node *root;

public:
    Trie()
    {
        // Write your code here.
        root = new Node();
    }

    void insert(string &word)
    {
        // Write your code here.
        Node *node = root;
        for (int i = 0; i < word.size(); ++i)
        {
            if (!node->containKey(word[i]))
            {
                node->put(word[i], new Node());
            }
            node = node->getReference();
            node->incpre();
        }
        node->incend();
    }

    int countWordsEqualTo(string &word)
    {
        // Write your code here.
        Node *node = root;
        for (int i = 0; i < word.size(); ++i)
        {
            if (!node->containKey(word[i]))
            {
                node->put(word[i], new Node());
            }
            else
            {
                return 0;
            }
            node = node->getReference();
            // node->incpre();
        }
        // node->incend();
        return node->getend();
    }

    int countWordsStartingWith(string &word)
    {
        // Write your code here.
        Node *node = root;
        for (int i = 0; i < word.size(); ++i)
        {
            if (!node->containKey(word[i]))
            {
                node->put(word[i], new Node());
            }
            else
            {
                return 0;
            }
            node = node->getReference();
            // node->incpre();
        }
        // node->incend();
        return node->getpre();
    }

    void erase(string &word)
    {
        // Write your code here.
        if (countWordsEqualTo(word) == 0)
            return;
        Node *node = root;
        for (int i = 0; i < word.size(); ++i)
        {
            node->decpre();
            node = node->getReference();
        }
        node->decend();
    }
};
