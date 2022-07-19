const int max_itens = 100; // setar o tamanho maximo da pilha
typedef int TipoItem; // setar o tipo da varivel

class pilha {
    private: // declarando as variaveis no private, para quem fiquem seguras.
    
    int tamanho;
    int* estrutura;

    public: // declarando as funcoes da pilha em public, para que sejam acessadas.

    pilha(); // construtora, precisa ter o mesmo nome da class
    ~pilha(); // destrutora
    bool isfull(); // verifica se a pilha esta cheia
    bool isEmpty(); // verifica se a pilha esta vazia
    void push(TipoItem item); // inserir
    TipoItem pop(); // remover
    void print(); // imprimir
    int lenght(); // tamanho
}; 