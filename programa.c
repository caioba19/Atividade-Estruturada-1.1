//1
#include <stdio.h>

struct Planta {
    char especie[50];
    int diasSemAgua;
    char status;
};

void verificarIrrigacao(struct Planta *p) {
    if (p->diasSemAgua >= 3) {
        p->status = 'O';
        p->diasSemAgua = 0;
    }
}

int main() {
    struct Planta planta1 = {"Samambaia", 1, 'N'};
    struct Planta planta2 = {"Cacto", 5, 'N'};

    printf("Antes:\n");
    printf("%s - Dias: %d - Status: %c\n", planta1.especie, planta1.diasSemAgua, planta1.status);
    printf("%s - Dias: %d - Status: %c\n", planta2.especie, planta2.diasSemAgua, planta2.status);

    verificarIrrigacao(&planta1);
    verificarIrrigacao(&planta2);

    printf("\nDepois:\n");
    printf("%s - Dias: %d - Status: %c\n", planta1.especie, planta1.diasSemAgua, planta1.status);
    printf("%s - Dias: %d - Status: %c\n", planta2.especie, planta2.diasSemAgua, planta2.status);

    return 0;
}

//2
#include <stdio.h>
#include <string.h>

struct Notebook {
    char marca[50];
    char modelo[50];
    int ram;       
    float preco;
};

int main() {
    int n = 3;
    struct Notebook notebooks[n];

    for (int i = 0; i < n; i++) {
        printf("\nNotebook %d:\n", i + 1);

        printf("Marca: ");
        scanf("%s", notebooks[i].marca);

        printf("Modelo: ");
        scanf("%s", notebooks[i].modelo);

        printf("RAM (GB): ");
        scanf("%d", &notebooks[i].ram);

        printf("Preco: ");
        scanf("%f", &notebooks[i].preco);
    }

    int maior = 0;
    for (int i = 1; i < n; i++) {
        if (notebooks[i].ram > notebooks[maior].ram) {
            maior = i;
        }
    }

    printf("\nNotebook com maior RAM:\n");
    printf("Modelo: %s\n", notebooks[maior].modelo);
    printf("Preco: %.2f\n", notebooks[maior].preco);

    return 0;
}

//3
#include <stdio.h>

struct Projeto {
    char nome[50];
    int tempo;   
    int status;  
};

void verificarProjetos(struct Projeto *p, int tamanho, int limite) {
    for (int i = 0; i < tamanho; i++) {
        if ((p + i)->tempo <= limite) {
            (p + i)->status = 1;
        }
    }
}

int main() {
    struct Projeto projetos[4] = {
        {"Peca_A", 30, 0},
        {"Peca_B", 120, 0},
        {"Peca_C", 60, 0},
        {"Peca_D", 200, 0}
    };

    int limite = 100;

    verificarProjetos(projetos, 4, limite);

    printf("Projetos concluidos:\n");
    for (int i = 0; i < 4; i++) {
        if (projetos[i].status == 1) {
            printf("%s\n", projetos[i].nome);
        }
    }

    return 0;
}
