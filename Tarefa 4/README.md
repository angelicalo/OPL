# Oficina de Programação e Laboratório - UFU 2020 - Tarefa 4
Códigos estarão disponíveis após a dada de entrega da atividade - 28/09

## Exercício 1 
O Código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto acima dela um número fixo de vezes. Por exemplo, com uma troca de 3 posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string (de tamanho máximo 256 caracteres) e retorne a string codificada. Repare que, nesse caso,  ́X ́,  ́Y ́ e  ́Z ́ viram, respectivamente,  ́A ́,  ́B ́ e  ́C ́. Idem para letras minúsculas. Se o caracter não for uma letra, imprima-o sem alteração.
(5pontos)

## Exercício 2 
Reimplemente o programa do exercício anteriorde modo que o mesmo leia o arquivo texto arq.txtdo diretório corrente do disco  e retorne a string codificada com o Código de César de 3 posições. Para a submissão, basta fazer upload do arquivo .c, pois o arquivo de texto arq.txt já na raiz dos testes.
(5pontos)

## Exercício 3
Faça um programa que converta coordenadas polares para cartesianas:

-Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a) em radianos.

-Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo que x = r * cos(a)e y = r * sin(a).

No programa principal, leia um ponto em coordenada polar e mostre as coordenadas doponto gerado no plano cartesiano.Crie estruturas (structs) para representar os pontos nos dois sistemas de coordenadas. Dica: use as funções sin() e cos() da biblioteca <math.h>.Use float com 2 casas decimais de precisão.
(5pontos)

## Exercício 4
Dadas duas strings lidas do teclado, a primeira contendo uma frase (tamanho máximo 256 caracteres) e a segunda contendo uma palavra (tamanho máximo 8 caracteres), determine o número de vezes que a palavra ocorre na frasee o imprima na tela.
(5pontos)
