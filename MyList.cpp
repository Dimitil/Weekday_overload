#include <iostream>

class List;
class Node
{
        int m_data;
        Node* m_pPrev;
        Node* m_pNext;

        ~Node()
        {
            if(pPrev){
            m_pPrev->m_pNext = this->m_pNext;}
            if(pNext){
            m_pNext->m_pPrev = this->m_pPrev;}
        }
        Node() : m_pNext(nullptr), m_pPrev(nullptr){}
        Node(Node* beforeNew, const int* pInt) : m_data(*pInt)
        {
            m_pPrev = beforeNew;
            m_pNext = beforeNew->m_pNext;
            beforeNew->m_pNext = this;
            m_pNext->m_pPrev = this;
        }
        friend class List;
};

class List
{
        Node Head;
        Node Tail;
        size_t m_size;

    public:
        List();
        ~List();
        void AddToHead(const A&);
        bool RemoveOne(const A&);
};

int main()
{
    List A;
	return 0;
}
