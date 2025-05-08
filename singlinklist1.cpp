#include <iostream>
using namespace std;

class Node 
{
    public:
        int noMhs;
        Node *next;
};

class LinkedList 
{
    Node *START;

    public:
        LinkedList()
        {
            START = NULL;
        }

        void addNode()
        {
            int nim;
            cout << "\nMasukkan Nomor Mahasiswa: ";
            cin >> nim;

            Node *nodeBaru = new Node;
            nodeBaru->noMhs = nim;

            if (START == NULL || nim <= START->noMhs)
        }
}


int main() {

}