# MergeSort - Dados de Temperatura em Intervalos
# Descrição
Este programa em C implementa o algoritmo de ordenação Merge Sort e uma função para agrupar temperaturas em intervalos especificados. Os dados de temperatura são lidos, agrupados e cada grupo é ordenado individualmente antes de ser exibido.

# Estruturas e Funções

## 1. merge()
Descrição: 
- Mescla dois subarrays em ordem crescente.

Parâmetros:
- arr[]: Array de inteiros que contém os dados a serem ordenados.
- left: Índice inicial do primeiro subarray.
- mid: Índice médio que separa os dois subarrays.
- right: Índice final do segundo subarray.
  
Funcionamento:
- Cria dois arrays temporários L e R para armazenar os elementos dos subarrays.
- Mescla os elementos de L e R de volta em arr de forma ordenada.
  
## 2. mergeSort()
Descrição: 
- Função recursiva que aplica o algoritmo Merge Sort ao array.

Parâmetros:
- arr[]: Array de inteiros a ser ordenado.
- left: Índice inicial do array a ser ordenado.
- right: Índice final do array a ser ordenado.
  
Funcionamento:
- Divide o array em duas metades até que cada subarray tenha um único elemento, e depois chama merge() para mesclá-los de volta em ordem.
  
## 3. printArray()
Descrição: 
- Imprime os elementos de um array.

Parâmetros:
- arr[]: Array de inteiros a ser impresso.
- size: Tamanho do array.
  
Funcionamento:
- Itera sobre o array e imprime cada elemento seguido por um espaço.

## 4. groupAndSortTemperatures()
Descrição: 
- Agrupa e ordena temperaturas em intervalos definidos pelo usuário.

Parâmetros:
- temperatures[]: Array de inteiros que contém as temperaturas a serem agrupadas.
- size: Número total de temperaturas no array.
- interval: Tamanho do intervalo para agrupamento das temperaturas.
  
Funcionamento:
- Determina o valor máximo e mínimo das temperaturas.
- Cria grupos baseados nos intervalos especificados.
- Atribui cada temperatura ao grupo correspondente.
- Imprime as temperaturas não ordenadas e, em seguida, as temperaturas de cada grupo ordenadas usando mergeSort().

## 5. main()
Descrição: 
- Função principal que executa o programa.
  
Funcionamento:
 - Define um array de temperaturas e um intervalo para agrupamento.
- Calcula o tamanho do array e chama groupAndSortTemperatures() para processar as temperaturas.
  
# Considerações Finais
Ao executar o programa, as temperaturas definidas no array são agrupadas em intervalos de 10°C. O programa imprime as temperaturas antes da ordenação e, em seguida, exibe as temperaturas agrupadas e ordenadas para cada intervalo. Este código é uma implementação básica de Merge Sort na disciplina Estrutura de Dados, demonstrando a capacidade de agrupar e ordenar dados em C.

# Aluno
Renan Alves Tavares

# Docente
Johnatan Alves De Oliveira
