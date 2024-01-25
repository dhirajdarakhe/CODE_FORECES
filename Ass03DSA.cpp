/*
Create an inordered threaded binary tree and perform inorder and preorder traversals. 
Analyze time and space complexity of the algorithm.
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
    Node *right, *left;
    int data;
    int lbit, rbit;

public:
    Node()
    {
        right = NULL;
        left = NULL;
        data = 0;
        lbit = 0;
        rbit = 0;
    }
    friend class TBT;
};
class TBT
{
    Node *root, *head;

public:
    TBT()
    {
        root = NULL;
        head = NULL;
    }
    void Create()
    {

        Node *temp = new Node;
        int x;
        cout << "Enter the Data - ";
        cin >> x;
        temp->data = x;
        if (root == NULL)
        {
            head = new Node;
            head->data = -999;
            head->left = NULL;
            head->right = NULL;
            head->lbit = 0;
            head->rbit = 0;
            root = temp;
            head->left = root;
            head->lbit = 1;
           root->right = root->left = head;
            
        }
        else
        {
            Node *ptr = root;
            while (true)
            {
                if (x < ptr->data)
                {
                    if (ptr->lbit != 0)
                    {
                        ptr = ptr->left;
                    }
                    else
                    {
                        temp->lbit = 0;
                        temp->rbit = 0;
                        temp->left = ptr->left;
                        temp->right = ptr;
                        ptr->left = temp;
                        ptr->lbit = 1;
                        return;
                    }
                }
                else if (x > ptr->data)
                {
                    if (ptr->rbit != 0)
                    {
                        ptr = ptr->right;
                    }
                    else
                    {
                        temp->lbit = 0;
                        temp->rbit = 0;
                        temp->right = ptr->right;
                        ptr->right = temp;
                        temp->left = ptr;
                        ptr->rbit = 1;
                        return;
                    }
                }
                else
                {
                    cout << "Dublicate Vaule Inserted!" << endl;
                }
            }
        }
    }
    void Inorder(Node *temp, Node *dummy)
    {
        do
        {
            while (temp->lbit == 1)
            {
                temp = temp->left;
            }
            cout << temp->data << " ";
            while (temp->rbit == 0)
            {
                temp = temp->right;
                if (temp == dummy)
                {
                    return;
                }
                cout << temp->data << " ";
            }
            temp = temp->right;
        } while (temp != dummy);
    }
    void Preorder(Node *temp, Node *dummy)
    {
        while (temp != dummy)
        {
            cout << temp->data << " ";
            while (temp->lbit != 0)
            {
                temp = temp->left;
                cout << temp->data << " ";
            }
            while (temp->rbit == 0)
            {
                temp = temp->right;
                if (temp == head)
                {
                    return;

                }
            }
            temp = temp->right;
        }
    }
    void Display_Inorder()
    {

        Inorder(root, head);
    }
    void Display_Preorder()
    {
        Preorder(root, head);
    }
};
int main()
{
    TBT t;
    int ch;
    do
    {
        cout << "\n1.Add Node - \n2.Display Inorder- " << endl;
        cout << "3.Display Preorder - " << endl;
        cout << "Enter Choice - ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            t.Create();
            break;
        case 2:
            t.Display_Inorder();
            break;
        case 3:
            t.Display_Preorder();
            break;
        default:
            break;
        }
    } while (ch != 0);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
typedef vector<ll> v64;
typedef vector<int> v32;
#define fast_DHIraj() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
void dhiraj();
ll binaryExpoRRec(ll a, ll b) {if (b == 0) return 1 * 1ll;ll res = binaryExpoRRec(a, b / 2);if (b & 1) {return a * res * res;} return res * res;}
int main()
{
fast_DHIraj();
// #ifndef ONLINE_JUDGE
// freopen('input.txt', 'r', stdin);
// freopen('error.txt', 'w', stderr);
// freopen('output.txt', 'w', stdout);
// #endif
int t = 1;
cin >> t;
while (t--) {dhiraj(); cout << '\n'; } return 0;
}
void dhiraj()
{
 // ll a;
// cin>>a;
}