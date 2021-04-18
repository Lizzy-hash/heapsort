#include <iostream>
#include <vector>

//struct node {
//
//    long value;
//    node* l_node;
//    node* r_node;
//
//    node* parent;
//
//};


void create_heap(std::vector<int>& tab, int i);

void heap_check(std::vector<int> &tab, int i);



int main()
{
    std::cout << "Hello World!\n";

    std::vector<int> tab = { 7,6,4,9 };

    for (int j = 0; j < tab.size(); j++) {
        
        create_heap(tab, j);
        
    }

 
    for (int i = 0; i < tab.size(); i++) std::cout << tab[i] << " ";
}


void create_heap(std::vector<int>& tab, int i)
{
    int root = i;
    int l_node = (2 * i) + 1;
    int r_node = (2 * i) + 2;
    int temp;

    if (l_node < tab.size())
        if (tab.at(l_node) > tab.at(root))
        {
            std::swap(tab.at(l_node), tab.at(root));
            root = l_node;

        }

    if (r_node < tab.size())
        if (tab.at(r_node) > tab.at(root))
        {
            std::swap(tab.at(r_node), tab.at(root));
            root = r_node;
        }


   

    if (root != i) 
    { 
        std::swap(tab.at(root), tab.at(i));
        create_heap(tab, i);
    }
    else return;


}

void heap_check(std::vector<int>& tab, int i)
{

    

}
