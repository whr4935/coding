namespace alg {

struct Tree {
    Tree(int _key, void* _value = nullptr)
    : key(_key)
    , value(_value)
    , red(0)
    , b(31) //left most bit
    , l(nullptr)
    , r(nullptr)
    {

    }

    int key;
    void * value;
    char red;
    int b;
    Tree* l;
    Tree* r;
};

void print_tree(Tree*);


}
