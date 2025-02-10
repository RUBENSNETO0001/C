// Função menu
int menu(void) {
    int op;
    printf("\n\n\n\tMenu");
    printf("\n\n1 - Enfileirar Cadastro de Aluno");
    printf("\n2 - Desenfileirar Cadastro de Aluno");
    printf("\n3 - Exibir Fila de Cadastros de Alunos");
    printf("\n4 - Buscar Fila de Cadastros de Alunos");
    printf("\n0 - Sair");

    printf("\n\nInforme a opção desejada: ");
    scanf("%d", &op);
    return op;
}

