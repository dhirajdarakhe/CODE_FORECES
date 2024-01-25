#include <bits/stdc++.h>
using namespace std;
class Student
{
    char name[30];
    int roll_no;
    char div[30];
    char address[30];
    int deleteIndicator;

public:
    Student() {}
    void getData();
    int serachData(int key);
    void deleteData(int key);
    int displayData();
};
void Student ::getData()
{
    cout << "\nEnter the Roll_num : ";
    cin >> roll_no;
    cin.ignore();
    cout << "\nEnter the Name : ";
    cin.getline(name, 30);
    cout << "\nEnter the Division : ";
    cin.getline(div, 30);
    cout << "\nEnter the Address : ";
    cin.getline(address, 30);
    deleteIndicator = 0;
}
int Student ::displayData()
{
    if (deleteIndicator == 1)
    {
        return 0;
    }
    cout << "\nRoll No. \tName \t Div \t Address \t" << endl;
    cout << "\n"
         << roll_no << "\t\t" << name << "\t" << div << "\t" << address << "\t" << endl;
    return 1;
}
int Student ::serachData(int key)
{
    if (deleteIndicator == 1 && roll_no == key)
    {
        return -1;
    }
    return roll_no == key;
}
void Student ::deleteData(int key)
{
    fstream fs;
    int flag = 0;
    int pos = 0;
    fs.open("A_fileD.txt", ios ::in | ios ::out | ios ::binary);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char *)this, sizeof(Student));
        if (fs)
        {

            if (roll_no == key && deleteIndicator == 0)
            {
                fs.seekg(pos);
                this->deleteIndicator = 1;
                flag = 1;
                fs.write((char *)this, sizeof(Student));
                break;
            }
        }
    }
    fs.close();
    if (flag)
    {
        cout << "\nDatahas been Deleted : ";
        return;
    }
    cout << "\nData not found for deletion : ";
}
int main()
{
    fstream file;
    int num;
    cout << "\nEnter the num of student : ";
    cin >> num;
    Student s[num];
    file.open("A_fileD.txt", ios ::out | ios ::binary);
    for (int i = 0; i < num; ++i)
    {
        s[i].getData();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();
    file.open("A_fileD.txt", ios ::in | ios ::binary);
    for (int i = 0; i < num; i++)
    {
        file.read((char *)&s[i], sizeof(s[i]));
        int res = s[i].displayData();
    }
    file.close();

    int rollno, res;
    cout << "\nEnter the roll no to be serached : ";
    cin >> rollno;
    file.open("A_fileD.txt", ios ::in | ios ::binary);
    for (int i = 0; i < num; ++i)
    {
        file.read((char *)&s[i], sizeof(s[i]));
        res = s[i].serachData(rollno);
        if (res == 1)
        {
            int pqr = s[i].displayData();
            break;
        }
        else if (res == -1)
        {
            cout << "\nSorry, Data was Deleted : ";
            break;
        }
    }
    if (res == 0)
    {
        cout << "\nData not found : ";
    }
    file.close();

    cout << "\nEnter the roll no to delete : ";
    cin >> rollno;
    Student temp;
    temp.deleteData(rollno);
    file.open("A_fileD.txt", ios ::in | ios ::binary);
    for (int i = 0; i < num; i++)
    {
        file.read((char *)&s[i], sizeof(s[i]));
        int res = s[i].displayData();
    }
    file.close();
    return 0;
}