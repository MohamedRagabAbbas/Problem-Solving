class LinkedList {
    struct Node
    {
        int data;
        Node* next;
        Node(int value):data(value),next(NULL){}
    };
    Node* head;
    Node* tail;
    int length;
public:
    LinkedList():length(0),head(nullptr),tail(nullptr) {}

    int get(int index) {
        if(index < 0 || index >= length)
            return -1;
        Node* temp = head;
        for(int i=0;i<index;i++)
            temp=temp->next;
        return temp->data;
    }

    void insertHead(int val) {
        Node* temp = new Node(val);
        length++;
        if(!head)
        {
            head = temp;
            tail = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }
    
    void insertTail(int val) {
        Node* temp = new Node(val);
        length++;
        if(!tail)
        {
            tail = temp;
            head = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }

    bool remove(int index) {
        if(index < 0 || index >= length)
            return false;
        Node* temp = head;
        if(length == 1)
        {
            head = nullptr;
            tail = nullptr;
            length--;
            delete temp;
            return true;
        }
        if(index == 0)
        {
            head = temp->next;
            length--;
            delete temp;
            return true;
        }
        for(int i=0;i<index-1;i++)
            temp=temp->next;
        if(index == length-1)
        {
            temp->next = nullptr;
            delete tail;
            tail = temp;
            length--;
            return true;
        }
        Node* current = temp->next;
        temp->next = temp->next->next;
        delete current;
        length--;
        return true;
    }

    vector<int> getValues() {
        vector<int> v;
        if(length==0)
            return v;
        Node* temp= head;
        
        while(temp)
        {
            v.push_back(temp->data);
            temp = temp->next;
        }
        return v;
    }
};
