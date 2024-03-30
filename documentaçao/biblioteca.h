//criando a struct que sera molde para adicionar novos livros ao sistema//
typedef struct livro livro;

//funções

int livro_novo(int id, int nome);
//recebe o id e o nome do livro para que ele seja inserido no sistema e retorna 1 caso seja bem sucedido

livro* pesquisar_livro(int id);

//para pesquisar o livro na base de dados usamos ID
//retornará o ponteiro que aponta para o livro

livro* estoque_disponivel(int id);

//retornará o conteudo para qual o ponteiro aponta

typedef struct usuario;

int novo_usuario(int nome, int cpf);
//recebe nome e cpf para criação de um novo usuário

int renovar_livro(char usuario, int id );

//recebe o usuario e o livro que ele deseja renovar e retorna 1 caso seja bem sucedido