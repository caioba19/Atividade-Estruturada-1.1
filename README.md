# Exercícios Práticos em C: Structs, Ponteiros e Vetores

Este repositório contém a resolução de três exercícios práticos desenvolvidos na linguagem C. O objetivo deste conjunto de códigos é consolidar conceitos fundamentais da linguagem, como modelagem de dados com estruturas (`struct`), manipulação de vetores e a utilização de ponteiros para passagem de parâmetros por referência.

---

## 📋 Sumário dos Exercícios

### Questão 1: Modelagem e Análise de Estruturas (Loja de Informática)
**Objetivo:** Identificar qual modelo de notebook possui a maior quantidade de memória RAM.
- **Conceitos Aplicados:** - Criação de `structs` para armazenar múltiplos tipos de dados (marca, modelo, RAM e preço).
  - Uso de vetores (arrays) de estruturas.
  - Laços de repetição (`for`) para leitura de dados via terminal e busca do maior valor.
- **Como funciona:** O programa solicita ao usuário o preenchimento dos dados de 3 notebooks, analisa as entradas e imprime na tela o modelo e o preço do equipamento com mais memória RAM.

### Questão 2: Passagem por Referência (Estufa Inteligente)
**Objetivo:** Atualizar automaticamente o status de irrigação de plantas com base no tempo (dias) sem receber água.
- **Conceitos Aplicados:** - Passagem de parâmetros por referência usando ponteiros.
  - Utilização do operador `->` para acessar e modificar atributos de uma `struct` dentro de uma função.
- **Como funciona:** A função `verificarIrrigacao` recebe o endereço de memória de uma planta. Se a planta estiver há 3 dias ou mais sem água, seu status é alterado para 'O' (Ok) e o contador de dias é zerado. O programa exibe o "Antes" e "Depois" para comprovar a alteração no espaço de memória original.

### Questão 3: Integração (Impressão 3D)
**Objetivo:** Filtrar projetos de impressão 3D que podem ser concluídos dentro de um tempo limite pré-estabelecido.
- **Conceitos Aplicados:** - Passagem de vetores de `structs` para funções.
  - Aritmética de ponteiros (`(p + i)->tempo`) para iterar e modificar os elementos do vetor.
- **Como funciona:** Uma lista de peças com seus respectivos tempos de impressão é avaliada em relação a um limite de 100 minutos. A função altera o status dos projetos viáveis para `1` (Concluído), e o programa imprime apenas os nomes das peças que se encaixaram na regra.

---

## 🚀 Como Compilar e Executar

Para rodar os códigos, você precisará de um compilador de C instalado em sua máquina (como o `gcc`).

1. Abra o terminal na pasta onde os arquivos estão salvos.
2. Compile o arquivo desejado usando o comando:
   ```bash
   gcc nome_do_arquivo.c -o programa
