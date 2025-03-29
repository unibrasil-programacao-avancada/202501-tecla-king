#include "../include/warmup_solver.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char OUTPUT_DIR[] = "output/";
const char SOLUTION_FILE[] = "solution.txt";

void solve_warmup(FILE* ptr_in_file, char* file_name, const char* warmup_instance) {
    FILE *froutptr, *fwsolptr;
    char line[100];
    char out_file[200]; // Aumentei o tamanho para evitar buffer overflow

    // Criando o caminho do arquivo de saída corretamente
    strcpy(out_file, warmup_instance);
    strcat(out_file, OUTPUT_DIR);
    strcat(out_file, file_name);

    // Criando arquivo de solução
    fwsolptr = fopen(SOLUTION_FILE, "w");
    if (fwsolptr == NULL) {
        printf("Erro: Não foi possível abrir o arquivo '%s'\n", SOLUTION_FILE);
        exit(1);
    }

    // Lendo do arquivo de entrada e processando
    char S[101];
    if (fscanf(ptr_in_file, "%100s", S) != 1) {
        printf("Erro ao ler a string de entrada\n");
        fclose(fwsolptr);
        exit(1);
    }

    int soma = 0, contador = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == '1' && S[i + 1] == '0') { // Se for "10", tratar como um único número
            soma += 10;
            contador++;
            i++; // Pular o próximo caractere '0'
        } else { // Caso contrário, tratar como um número de 1 a 9
            soma += S[i] - '0';
            contador++;
        }
    }

    if (contador > 0) {
        fprintf(fwsolptr, "%.2f\n", (double)soma / contador);
    } else {
        fprintf(fwsolptr, "Erro: Nenhum número válido encontrado.\n");
    }

    fclose(fwsolptr);

    // Abrindo arquivo resposta
    froutptr = fopen(out_file, "r");
    if (froutptr == NULL) {
        printf("Erro: Não foi possível abrir o arquivo '%s'\n", out_file);
        exit(1);
    }

    // Copiando resposta para solução
    while (fgets(line, sizeof(line), froutptr)) {
        fputs(line, fwsolptr);
    }

    fclose(froutptr);
}

int check_warmup_solution(const char* file_name, const char* warmup_instance) {
    FILE *fanswer, *fsolution;
    char answer_line[100], solution_line[100], answer_file[200];

    strcpy(answer_file, warmup_instance);
    strcat(answer_file, OUTPUT_DIR);
    strcat(answer_file, file_name);

    // Abrindo arquivo resposta
    fanswer = fopen(answer_file, "r");
    if (fanswer == NULL) {
        printf("Erro: Não foi possível abrir o arquivo '%s'\n", answer_file);
        exit(1);
    }

    // Abrindo arquivo solução
    fsolution = fopen(SOLUTION_FILE, "r");
    if (fsolution == NULL) {
        printf("Erro: Não foi possível abrir o arquivo '%s'\n", SOLUTION_FILE);
        fclose(fanswer);
        exit(1);
    }

    // Comparando os arquivos linha por linha
    int is_correct = 1;
    while (fgets(answer_line, sizeof(answer_line), fanswer) && fgets(solution_line, sizeof(solution_line), fsolution)) {
        if (strcmp(answer_line, solution_line) != 0) {
            is_correct = 0;
            break;
        }
    }

    fclose(fanswer);
    fclose(fsolution);

    return is_correct;
}
