# Introdução
Este programa executa diversas operações sobre uma lista fornecida pelo utilizador, sendo possível selecionar quais as operações a realizar com base no *input* fornecido. O programa disponibiliza 10 opções diferentes para operar sobre essa lista.

<br>

# Programa
Este programa apresenta um pequeno menu com todas as opções disponíveis. Após inserir a lista de números, o utilizador pode escolher a ação que pretende que o programa execute.

```
Statistics Calculation Menu:
_______________________________
                                |
1. Calculate the square root    |
2. Calculate the average        |
3. Values divisible by 3        |
4. Sort in descending order     |
5. Vector permutations          |
6. Value closest to 25          |
7. Help                         |
8. Calculate the Dot product    |
9. Composite numbers            |
10. Product of two vectors      |
11. Calculate the determinant   |
_______________________________ |

Enter the option number (e.g: 2): _
```

<br>

# Dependências
### Windows
As dependências para o sistema operativo *Windows* são:
- `make` - Para a criação do ficheiro executável do programa;
- `cc` - Para a compilação dos ficheiros.
### Distribuições Linux
Nas distribuições *Linux*, as dependências necessárias para este projeto já se encontram instaladas.

<br>

# Execução
- Para a criação do ficheiro executável do programa:
```
make 
```
- Para a compilação e execução do programa de forma automática:
```
make run
```
- Para a remoção dos ficheiros `.o` e `.exe`:
```
make clean
```