# Simulação de Movimentos de Peças de Xadrez em C

Este projeto tem como objetivo aplicar conceitos fundamentais e intermediários de programação em linguagem C através da simulação dos movimentos de peças do jogo de xadrez. O código foi desenvolvido de forma progressiva, contemplando os três níveis de desafio propostos: **Novato**, **Aventureiro** e **Mestre**.

## 🎯 Objetivo Geral

Utilizar estruturas de repetição (for, while, do-while), loops aninhados e recursividade para simular o comportamento das peças de xadrez em diferentes contextos, reforçando o domínio de controle de fluxo, boas práticas de programação e organização de código.

---

## 🧩 Nível Novato

Neste primeiro estágio, foram simulados os movimentos básicos de três peças do xadrez: **Torre**, **Bispo** e **Rainha**, utilizando uma estrutura de repetição diferente para cada uma.

### ✅ Regras de movimentação simuladas:

- **Torre**: movimenta-se 5 casas para a **direita**. Implementado com um loop `for`.
- **Bispo**: movimenta-se 5 casas na **diagonal superior direita**. Implementado com um loop `while`.
- **Rainha**: movimenta-se 8 casas para a **esquerda**. Implementado com um loop `do-while`.

Cada movimento foi representado com uma mensagem no console indicando a direção da peça a cada passo.

---

## 🧗 Nível Aventureiro

Neste nível, foi adicionado ao programa o movimento do **Cavalo**, que se move em formato de "L" (duas casas em uma direção e uma casa em direção perpendicular).

### ✅ Regras de movimentação simuladas:

- O **Cavalo** move-se **duas casas para baixo** e **uma casa para a esquerda**.
- A simulação foi feita utilizando **loops aninhados**, onde:
  - Um loop `for` controla o número de movimentos;
  - Um loop `while` simula as duas casas para baixo;
  - Um loop `for` interno simula uma casa para a esquerda;
  - Foram utilizados os comandos `continue` e `break` para controle do fluxo, como boa prática de uso em loops aninhados.

A saída exibe, passo a passo, a direção tomada pela peça em cada parte do movimento.

---

## 🧠 Nível Mestre

No desafio final, o projeto foi aprimorado com técnicas mais avançadas como **recursividade** e **loops aninhados complexos**, simulando comportamentos mais sofisticados.

### ✅ Alterações e aprimoramentos:

#### ♖ Torre (recursiva):
- Movimenta-se 5 casas para a **direita**, utilizando uma função **recursiva** para simular cada passo.

#### ♗ Bispo (duas implementações):
- Implementado com uma função **recursiva** que move 5 casas na **diagonal superior direita**.
- Também implementado com **loops aninhados**: o loop externo simula o movimento vertical e o interno o horizontal.

#### ♕ Rainha (recursiva):
- Movimenta-se 8 casas para a **esquerda**, implementado com **recursividade**.

#### ♘ Cavalo (aprimorado):
- Movimenta-se **duas casas para cima** e **uma casa para a direita**.
- Utiliza **loops aninhados com múltiplas variáveis e condições**, além de `continue` e `break`, para tornar o controle do movimento mais preciso e dinâmico.

---

## 🛠️ Estrutura do Código

O código está contido em um único arquivo:

- **xadrez.c**: contém todas as implementações dos movimentos, organizados em funções independentes para cada peça. Os movimentos são exibidos no console com mensagens claras sobre a direção percorrida.

---

## 🧾 Requisitos Atendidos

### Funcionais:
- Movimentação específica de cada peça conforme descrito nos desafios.
- Impressão da direção a cada passo.
- Utilização adequada de estruturas de repetição, loops aninhados e recursividade.

### Não Funcionais:
- Código organizado e eficiente.
- Boas práticas de nomenclatura e indentação.
- Comentários explicativos ao longo do código.
- Nenhuma entrada do usuário é necessária, conforme simplificação dos desafios.

---

## 📦 Como Executar

Para compilar e executar o código em um ambiente com GCC:

```bash
gcc xadrez.c -o xadrez
./xadrez
