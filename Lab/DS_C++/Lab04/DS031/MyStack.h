class MyStack {
    private:
        int maxsize;
        int top;
        int* list;
    
    public:
        MyStack(int size = 10);
        ~MyStack();
    
        void initialize();
        bool isEmpty() const;              
        bool isFull() const;               
        void push(const int& element);        
        int* pop();
        void print();
    };