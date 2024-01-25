#include <bits/stdc++.h>
using namespace std;
#define ll long long
int charPos(char ch)
{
    return (int)(ch - 'a');
}
class Node
{
private:
    Node *link[26];

public:
    Node()
    {
        for (int i = 0; i < 26; ++i)
            link[i] = NULL;
    }
    bool isKeyPresent(char ch)
    {

        // return 1 -> if ch is present
        // return 0 -> else ch is not there
        return link[charPos(ch)] != NULL;
    }
    Node *referenceTrie(int ch)
    {
        return link[charPos(ch)];
    }
    void addTrie(char ch, Node *new_node)
    {
        link[charPos(ch)] = new_node;
    }
};
class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void insert(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.size(); ++i)
        {
            // if current char is no present over there then
            if (!node->isKeyPresent(word[i]))
            {
                node->addTrie(word[i], new Node());
            }
            node = node->referenceTrie(word[i]);
        }
    }

    string startsWith(string prefix)
    {
        Node *node = root;
        cout << prefix << " prefix";
        string z = "-1";
        for (int i = 0; i < prefix.size(); ++i)
        {
            if (!node->isKeyPresent(prefix[i]))
            {
                return z;
            }
            node = node->referenceTrie(prefix[i]);
        }
        string x = prefix;
        cout << prefix << " "
             << "dhiraj"
             << " ";
        while (1)
        {
            int fg = 0;
            for (int i = 0; i < 26; ++i)
            {
                if (node->isKeyPresent('a' + i))
                {
                    x += 'a' + i;
                    node = node->referenceTrie('a' + i);
                    fg = 1;
                    break;
                }
            }
            if (fg == 0)
                break;
        }
        return x;
    }
};
int main()
{
    int n = 0;
    cin >> n;
    int m = 0;
    cin >> m;
    vector<string> input(n);
    for (int i = 0; i < n; ++i)
        cin >> input[i];
    vector<string> output(m);
    for (int i = 0; i < m; ++i)
        cin >> output[i];
    // cout << input] << endl;
    Trie t;
    for (int i = 0; i < n; ++i)
        t.insert(input[i]);
    for (int i = 0; i < m; ++i)
    {
        cout << t.startsWith(output[i]) << endl;
    }
    return 0;
}