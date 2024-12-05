# Estimativa de PI com Método de Monte Carlo

## Descrição

O programa "calcula-pi" utiliza o método de Monte Carlo para estimar o valor de PI por meio de uma simulação probabilística. Ele gera pontos aleatórios dentro de um quadrado de lado 1 e conta quantos desses pontos caem dentro de um círculo de raio 1, inscrito nesse quadrado. A razão entre os pontos dentro do círculo e o total de pontos gerados é usada para calcular o valor de PI.

## Componentes e Tecnologias

- **Linguagem de Programação**: C
- **Compilador**: GCC
- **Conceito Matemático**: Método de Monte Carlo para estimativa de PI.
- **Aleatoriedade**: Geração de números aleatórios para simulação.
- **Tecnologia de Tempo**: Uso da biblioteca `time.h` para inicializar a semente do gerador de números aleatórios.

## Estrutura do Código

O código é dividido em uma função principal e uma função `calculaPI`:
- **calculaPI**: Esta função realiza o cálculo de Monte Carlo. Para cada ponto gerado aleatoriamente, verifica-se se ele cai dentro do círculo de raio 1.
- **main**: A função principal solicita ao usuário o número de pontos a serem gerados, chama a função `calculaPI`, e exibe a estimativa de PI.

## Como Jogar (Usar)

1. **Clone o repositório** para sua máquina local:
   ```bash
   git clone https://github.com/usuario/montecarlo-pi.git
   cd montecarlo-pi
   ```

2. **Compile o código-fonte**:
   ```bash
   gcc main.c -o main -lm
   ```

3. **Execute o programa**:
   ```bash
   ./main
   ```

4. **Instruções do Jogo**:
   - O programa solicita ao usuário o número de pontos a serem utilizados na estimativa.
   - A partir do valor informado, o programa realiza o cálculo de Monte Carlo e retorna a estimativa de PI.
   - O usuário deve fornecer um número dentro do limite de 1.000.000.000 de pontos. Caso o valor inserido seja maior, o programa exibirá uma mensagem de erro.

## Funcionalidades

- **Cálculo de PI**: Através do método de Monte Carlo, o programa gera pontos aleatórios para estimar o valor de PI.
- **Limite de Pontos**: O programa permite a inserção de até 1.000.000.000 pontos, com uma verificação para garantir que o valor não ultrapasse o limite.
- **Precisão**: Quanto maior o número de pontos, mais precisa é a estimativa do valor de PI.

## Considerações Finais

Este programa demonstra a aplicação do método de Monte Carlo, um conceito matemático utilizado para simulações probabilísticas. O valor de PI estimado se torna mais preciso conforme o número de pontos aumentam, permitindo uma interessante experiência de aprendizado sobre aproximações numéricas.
