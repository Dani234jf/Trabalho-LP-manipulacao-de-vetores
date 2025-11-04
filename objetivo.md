Laboratórios de Programação
===========================

Propostas de Trabalho de Grupo
------------------------------

**Atenção:** ler bem antes de começar a implementar!

Os trabalhos de grupo consistem sobretudo num Projeto de Programação acompanhado pela respetiva Documentação e Relatório. Uma apresentação desse trabalho fará também parte da avaliação do mesmo. A avaliação destes trabalhos tem um peso de 40% (correspondendo a 8 valores) na avaliação final da Unidade Curricular de Laboratórios de Programação (LP). Devem ser desenvolvidos por grupos de alunos previamente estabelecidos.

Os elementos a entregar, bem como os pesos individuais dados a cada componente desses projetos pode ser detalhada da seguinte forma:

1.  **Código do programa com `makefile`** para compilação e execução (o programa deve estar a funcionar), é avaliado para 2 valores;
2.  Boas práticas da programação e **documentação gerada a partir do código em HTML**, é avaliado para 2 valores;
3.  Um pequeno **relatório técnico**, preparado em LATEX\\LaTeX, mas entregue em pdf, a descrever o trabalho, é avaliado para 2 valores;
4.  A **apresentação** do trabalho (máximo 15 minutos), seguida de defesa (máximo de 10 minutos), a ocorrer no final do semestre, poderá valer até 1 valor.

**Assume-se que cada projeto é implementado pelos membros de cada grupo, e que estes conhecem e compreendem o [Código de Integridade da UBI](https://www.google.com/url?q=https%3A%2F%2Fwww.ubi.pt%2FFicheiros%2FEntidades%2F91363%2Fcodigo_integridade.pdf), nomedamente no que diz respeito ao plágio.**

Todos os projetos consistem no desenvolvimento de um programa que permite fazer cálculos sobre um conjunto de números. As funcionalidades a integrar são geradas aleatoriamente, mas indexadas ao `código` fornecido pelos docentes da unidade curricular a cada um dos grupos. **Para obter a especificação exata do seu trabalho, coloque o código no campo em baixo e pressione o simbolo de _play_ à esquerda `(>)`.**

Note que todo o código deve estar devidamente comentado, seguir boas práticas da programação. A documentação deve ser obviamente gerada a partir desses comentários. **Todos os programas devem ser implementados em**, pelo menos, **três ficheiros**, seguindo a nomenclatura descrita a seguir (considere que a equipa a fazer o projeto é a _Team X_):

1.  Um ficheiro com o código da função _main_, chamado `main-team-x.c`;
2.  Um ficheiro com as funções pedidas para cada funcionalidade, chamado `functions-team-x.c`;
3.  Um ficheiro cabeçalho com os protótipos das funções, chamado `functions-team-x.h`.

---

O objetivo deste trabalho  é  implementar  um programa que peça ao utilizador 14 números inteiros e os guarde num vetor, para  posteriormente  providenciar forma de calcular algumas estatísticas ou fazer operações sobre esses valores. Os valores pedidos devem estar compreendidos entre 3 e 31. Deve ser feita a VALIDAÇÃO DE ENTRADA!

Após terem sido pedidos os valores, deve  ser mostrado um menu ao utilizador que lhe permita calcular cada  uma  das  estatísticas referidas em baixo, exatamente pela  ordem  colocadas  neste  enunciado.  Depois de  se  escolher  uma opção, o resultado deve ser mostrado no ecrã, e o menu deve voltar a ser exibido. As funcionalidades mínimas a disponibilizar são as seguintes:

1. Cálculo da raíz quadrada de todos os elementos no vetor;
2. Cálculo da média de todos os elementos no vetor;
3. Devolução dos valores do vetor que são divisíveis por três;
4. Devolução do vetor ordenado por ordem decrescente;
5. Construção de uma matriz 14 por 14, em que cada linha é composta pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas);
6. Identificação do valor mais próximo de 25.


Uma  versão  mais elaborada  do projeto  deve exibir adicionalmente as seguintes características e funcionalidades:

1. Leitura de um novo vetor, cálculo e devolução do produto interno;
2. Identificação de todos os números compostos (não primos) no vetor inicial;
3. Leitura  de  um novo vetor  1x14,  cálculo  e  devolução  da  matriz 14x14 resultante do produto do vetor inicial com o novo vetor gerado;
4. Cálculo do determinante da matriz referida no ponto anterior;
5. O programa apresenta  adicionalmente  uma  página de ajuda, acessível como sendo a entrada 7 no menu.
6. O programa  mostra  alguma  ajuda  quando é executado a partir da linha de comandos com a flag --help.