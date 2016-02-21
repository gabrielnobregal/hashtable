# HashTable

Este projeto foi feito com o objetivo de realizar um estudo sobre tabelas hash e diferentes funções de dispersão. O projeto foi feito em C++ e acompanha um relatório.

## Compilando e Executando

O projeto foi desenvolvido em linguagem C++, sendo assim será necessário a utilização
do compilador g++. Tente executar o g++ pelo terminal, caso este não seja localizado
será necessário instala-lo. Nas distribuições derivadas do Debian (por ex:Ubuntu), a
instalação pode ser realizada através do comando:

sudo apt-get install g++

Com o compilador instalado o projeto pode ser compilado com o comando make
dentro do diretório src do projeto.

make

O comando irá gerar o binário hashapp dentro do diretório src. Para executa-lo utilize
o comando:

./hashapp

O menu primário irá ser apresentado, como mostra abaixo:

<<HashApp>>
------------------------
1)Criar tabela hash
0)Sair
------------------------
->1

As opções de menu são auto explicativas. O software não necessita da passagem de parâmetros, sua utilização deve ser feita através da seleção de opções nos menus. Qualquer dúvida consulte os passos contidos no relatório.

Para eliminar todos os arquivos binários gerados no processo de compilação execute o comando:

.../HashApp/src$ make clear


## Hierarquia de diretórios

O diretório /doc possui a documentação gerada com o doxygen. Para visualiza-lo abra a página
index.html e selecione a opção "classes". 

O diretório /src possui os códigos fontes. Nela estão contidos os menus do software que realizam chamadas para a biblioteca de estrutura de dados e para o gerenciador de menus. Em /src/hashlib está toda a biblioteca de estrutura de dados. Em /src/menulib está a o gerenciador de menus.


## Dicas para o estudo do código fonte

Para o estudo do código fonte é aconselhavel que o desenvolvedor se concentre inicialmente
nas classes nomeadas com sufixo Menu contidas no diretório .../src. Cada um destes menus
representam uma tela do software e realizam chamadas simples às bibliotecas de
estrutura de dados. Elas irão passar a noção geral do software, enquanto que o
aprofundamento deverá ser realizado com o estudos dos códigos contidos na biblioteca de
estrutura de dados no diretório .../src/hashlib. Você pode utilizar a documentação gerada
através do doxygen contida no diretório .../doc para orientar sua análise.


