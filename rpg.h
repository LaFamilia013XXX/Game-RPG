





// Criando os Itens do RPG;
enum Tipo {
    POCAODECURA, // Cura o Heroi
    POCAODEPODER, // da um UPP em tudo (HP, Ataque, Defesa, Agilidade e Luck)
    POCAODEDEFESA, // aumenta tmeporariamente a defesa (escudo do heroi)
    POCAODASORTE, // aumenta a sorte de dar crítico e/ou esquivar de um inimigo
    ESPADA, // para o Barbaro
    MACHADO, // para o Barbaro
    VARINHA, //do mago
    NUM_TIPOS_DE_ITENS
};

struct CriandoItem {
    int Dano;
    string Nome;
    int Peso;
    int Cura;
    int Defesa;
};

class Item {
    public:
        Item();
        int Dano(Tipo tipo) const;
        string Nome(Tipo tipo) const;
        int Peso(Tipo tipo) const;
        int Cura(Tipo tipo) const;
        int Defesa(Tipo tipo) const;
    private:
        CriandoItem itens[NUM_TIPOS_DE_ITENS];
        void IniciandoItem();
        
};


// Estruturas de organização

// Mochila Usuario
const int MaxList = 100;
class List {
    public:
        List();
        ~List();
        bool Empty();
        bool Full();
        void Insert(int p, int x);
        void Delete(int p, int &x);
        void Retrieve(int p, int &x);
        void Replace(int p, int x);
        void Clear();
        int Size();
        void exibirList();
    private:
        int count;
        int Entry[MaxList+1]; 

};

// Mochila Usuario
class Mochila {
    public:
        Mochila();
        ~Mochila();
        bool Empty();
        bool Full();
        void Push(int x);
        void Pop(int &x);
        void Clear();
        void Top(int &x);
        int Size();
    private:

        struct StackNode {
            int Entry;
            StackNode *NextNode;
        };

        typedef StackNode *StackPointer;

        StackPointer top;
};

const int MaxStack = 4;
class Cinto {
    public:
        Cinto();
        ~Cinto();
        bool Empty();
        bool Full();
        void Push(CriandoItem x);
        void Pop(CriandoItem &x);
        void Clear();
        void Top(CriandoItem &x);
        int Size();
        void exibirCinto();
    private:
        int top;
        CriandoItem Entry[MaxStack]; // Armazena itens de `CriandoItem`
};


/*-------------------------------------------------------------------------------------------------------*/
class Heroi
{
    public:
    // -- TIPO DO MEU HEROI -- //
    enum EnumTipoHeroi
    {
        mago = 1,
        arqueira = 2,
        bruxa = 3,
        barbaro = 4,
    };
    static void FuncaoMeuHeroi(EnumTipoHeroi heroi);

    // ---- ATRIBUTOS DO HEROI ---- //
    Heroi(
    const string name,
    int hp,
    int ataque,
    int defesa, 
    int agilidade, 
    int luck, 
    string especial);

void MostrandoTudo(); // EXIBE TODOS OS ATRIBUTOS
void RecebeDano();

    ~Heroi(); //destrutor

    // -----------PRIVATE------------- //
    private:
        const string Name;
        int HP;
        int Ataque;
        int Defesa;
        int Agilidade; 
        int Luck;
        string Especial;
};

class Habilidade {


};