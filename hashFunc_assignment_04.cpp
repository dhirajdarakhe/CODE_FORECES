
#include <bits/stdc++.h>
using namespace std;
class HashNode
{
    char name;
    int tele;
    friend class HashTable;

public:
    HashNode()
    {
        name = ' ';
        tele = 0;
    }
    HashNode(char name1, int tele1)
    {
        name = name1;
        tele = tele1;
    }
};

class HashTable
{

public:
    int size;
    HashNode *hashtable;
    HashTable(int s)
    {
        size = s;
        hashtable = new HashNode[size];
    }
    int HashFunc(int a)
    {
        return (a % 10);
    }
    void hashWithoutResplacement(char c, int a)
    {
        int count = 0;
        int index = HashFunc(a);
        if (hashtable[index].tele == 0)
        {
            hashtable[index].tele = a;
            hashtable[index].name = c;
        }
        else
        {
            while (hashtable[index].tele != 0)
            {
                index = (index + 1) % size;
                count++;
            }
            hashtable[index].tele = a;
            hashtable[index].name = c;
        }
    }
    void hashWithResplacement(char c, int a)
    {
        int index = HashFunc(a);
        if (hashtable[index].tele == 0)
        {
            hashtable[index].tele = a;
            hashtable[index].name = c;
        }
        else
        {
            if (HashFunc(hashtable[index].tele) == index)
            {
                while (hashtable[index].tele != 0)
                {
                    index = (index + 1) % size;
                }
                hashtable[index].tele = a;
                hashtable[index].name = c;
            }
            else
            {
                int repaceInt = hashtable[index].tele;
                int repaceChar = hashtable[index].name;
                hashtable[index].tele = a;
                hashtable[index].name = c;
                while (hashtable[index].tele != 0)
                {
                    index = (index + 1) % size;
                }
                hashtable[index].tele = repaceInt;
                hashtable[index].name = repaceChar;
            }
        }
    }
    void displayHashTable()
    {
        // cout << " *********  HASH TABLE *********** \n";
        // cout << "___________________________________________\n";
        for (int i = 0; i < size; ++i)
        {
            cout << " | " << hashtable[i].name << " | " << hashtable[i].tele << " | " << endl;
        }
        // cout << "___________________________________________\n";
    }
    void search(int c)
    {
        int index = HashFunc(c);
        int count = 0;
        bool element_found = false;
        for (int i = 0; i < size; i++)
        {
            if (hashtable[index].tele == c)
            {
                element_found = true;
                break;
            }
            index = (index + 1) % size;
        }
        if (element_found)
        {
            cout << " Entered element is found at " << index << endl;
        }
        else
        {
            cout << "Entered element is not present in given hash table" << endl;
        }
    }
};

int main()
{
    int size;
    cout << "Enter the size of hash table\n";
    cin >> size;
    HashTable hash(size);
    int flag = 1;
    while (flag == 1)
    {
        cout << "1.Insert With Replacement" << endl;
        cout << "2.Insert Without Replacement" << endl;
        cout << "3.Search by phone number" << endl;
        cout << "4.Print" << endl;
        cout << "0.Exit" << endl;
        cout << "Enter Your Choice" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                char c;
                cout << "Enter the name\n";
                cin >> c;
                cout << "Enter the number\n";
                int t;
                cin >> t;
                hash.hashWithResplacement(c, t);
            }
            break;
        case 2:
            for (int i = 0; i < size; i++)
            {
                char c;
                cout << "Enter the name\n";
                cin >> c;
                cout << "Enter the number\n";
                int t;
                cin >> t;
                hash.hashWithoutResplacement(c, t);
            }
            break;
        case 3:
            cout << "Enter telephone number you want to search" << endl;
            int c;
            cin >> c;
            hash.search(c);
            break;
        case 4:
            hash.displayHashTable();
            break;
        case 0:
            cout << "Thank You!!!" << endl;
            flag = 0;
            break;
        default:
            cout << "Please Enter Valid choice" << endl;
            break;
        }
    }
    return 0;
}