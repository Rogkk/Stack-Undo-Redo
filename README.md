# Stack Undo Redo Simulador de Navegador de Internet

Este projeto é um programa em C++ que simula o comportamento básico de um navegador de internet. Ele permite ao usuário navegar entre páginas, voltar para páginas visitadas anteriormente e avançar novamente caso tenha voltado antes. É uma ótima aplicação para entender o uso da biblioteca `stack` em C++.

## Funcionalidades

1. **Acessar Páginas**:
   - O usuário pode digitar o nome de um site para "acessar" uma nova página.

2. **Voltar para a Página Anterior (Undo)**:
   - Permite retornar à página visitada imediatamente antes da atual.

3. **Avançar para a Próxima Página (Redo)**:
   - Caso o usuário tenha voltado para uma página anterior, é possível avançar novamente para a página que estava sendo visualizada.

4. **Sair do Programa**:
   - Encerra a simulação do navegador.

## Como o Programa Funciona

O programa utiliza duas pilhas da biblioteca `stack` para gerenciar o histórico de navegação:

- **Histórico**:
  - Armazena as páginas acessadas na ordem em que foram visitadas.
- **Página**:
  - Armazena as páginas para onde o usuário pode avançar caso tenha usado a função de "Voltar".

### Fluxo de Navegação

1. Quando o programa inicia, o usuário é solicitado a digitar o nome de um site para acessar.
2. O site digitado é empilhado no histórico, representando o acesso a uma nova página.
3. Ao selecionar "Voltar", a página atual é movida do histórico para a pilha de páginas, permitindo retornar a ela posteriormente.
4. Ao selecionar "Avançar", a última página armazenada na pilha de páginas é movida de volta para o histórico.
5. O programa limpa a pilha de páginas (para avançar) sempre que um novo site é acessado, garantindo que o comportamento do navegador seja consistente.

## Interface do Usuário

Ao executar o programa, o usuário verá o seguinte menu:

```
https://<pagina_atual>

1) Voltar
2) Avancar
3) Buscar Site
0) Sair

Digite uma opcao:
```

O programa exibe a página atual e oferece opções para navegar ou sair. O sistema garante que as opções "Voltar" e "Avançar" só funcionem quando há páginas disponíveis nas pilhas correspondentes.

## Como Executar

1. Compile o código com um compilador compatível com C++, como `g++`:
   ```bash
   g++ -o navegador navegador.cpp
   ```
2. Execute o programa:
   ```bash
   ./navegador
   ```

## Requisitos

- Compilador C++ com suporte para a biblioteca padrão.
- Sistema operacional com suporte para comandos de terminal (como Windows, Linux ou macOS).

## Estrutura do Projeto

- **navegador.cpp**: Contém o código fonte do programa.
- **README.md**: Este arquivo explicativo.
- **navegador.exe**: (Opcional) Executável do programa.

Com este projeto, você pode aprender de forma prática conceitos de estrutura de dados como pilhas e sua aplicação em problemas do mundo real, como a navegação em páginas da web. Divirta-se explorando e aprimorando o código! Como desafio, tente refatorar o algoritmo para usar funções separadas da `main` para as ações de avançar, voltar, pesquisar e sair. Isso ajudará a organizar melhor o código e torná-lo mais modular. Quando concluir, envie o código do desafio para o e-mail <rogerioweel@gmail.com>.

