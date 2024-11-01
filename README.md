# Ponderada em Sala - Semana 3 - Semáforo

## 1. Montagem Física do Semáforo
### 1.1 Separação dos Componentes
&nbsp;&nbsp;&nbsp;&nbsp;Inicialmente, os seguintes componentes foram separados para montar o circuito:

| Componente | Quantidade | Finalidade |
| -----------|------------|------------|
| Arduino Uno | 1 | Para possibilitar o controle, envio e recebimento de informações |
| Led Vermelho | 1 | Servir como o sinal vermelho |
| Led Amarelo | 1 | Servir com o sinal amarelo |
| Led Verde | 1 | Servir com o sinal verde |
| Resistor 150Ω | 3 | Para proteger os leds |
| Estrutura de MDF | 1 | Fornecida em aula pelo professor |
| Fios Jumper Macho-Macho | 4 | Para realizar a conexão das portas com os leds (utilizando resistores na protoboard) e para ligar o GND |
| Fios Jumper Macho-Fêmea | 3 | Para conectar os leds (suspensos pela estrutura de MDF de semáforo) na protoboard |
| Protoboard | 1 | Para realizar a montagem física com os componentes supracitados |

### 1.2 Montagem do circuito
&nbsp;&nbsp;&nbsp;&nbsp;Após a separação dos componentes, o próximo passo foi a montagem (feita em sala de aula conforme orientações do professor), resultando no seguinte vídeo:

https://drive.google.com/file/d/1IDNK6YTA-bvOGyr-ITkdtQEtgb5rvNcA/view?usp=drive_link

&nbsp;&nbsp;&nbsp;&nbsp;Como é possível ver acima, o seguinte processo foi realizado:
1. Conectar o GND na protoboard
2. Colocar os leds na estrutura de MDF
3. Conectar os jumpers macho-fêmea em cada led (vermelho, verde e amarelo)
4. Conectar as portas aos leds (utilizando resistores para proteção na protoboard) por meio dos jumpers macho-macho

<br>

## 2. Programação e Lógica do Semáforo

&nbsp;&nbsp;&nbsp;&nbsp;O comportamento do semáforo foi estipulado da seguinte maneira:
| Cor | Segundos |
| --- | -------- |
| Vermelho | 6 |
| Amarelo | 2 |
| Verde | 2 |
| Verde | +2 (simulando o tempo adicional para pedestres terminarem a travessia) |
| Amarelo | 2 |

&nbsp;&nbsp;&nbsp;&nbsp;Baseado nisso, o seguinte código foi criado:

<div align="center">
  <sup>Figura 1 - Código no Arduino IDE </sup>
  <img src="./img/code.png" alt="Código do Semáforo no Arduino IDE">

  <sup>Para acessar o arquivo do código [clique aqui](./code.cpp) </sup>
</div>

&nbsp;&nbsp;&nbsp;&nbsp;No código, os números das portas foram utilizadas para praticidade do código, facilitando a troca de portas entre os diferentes leds. Além disso, foi utilizado o `digitalWrite()` para ligar e desligar os leds (utilizando `HIGH` e `LOW`, respectivamente). Além disso, para controlar o tempo no qual um led fica acesso foi utilizado o `delay()`.

<br>

## 3. Avaliação em pares (Realizada na Sala de Aula)

### Avaliação 1 - Rafael Rocha Barbosa
**4/4**
- Até 4 pontos (Contempla/Contempla parcialmente/Não contempla) - Montagem física 
realizada com as cores corretas, boa disposição dos fios e uso adequado de resistores 
para proteção;

**3/3**
- Até 3 pontos (Contempla/Contempla parcialmente/Não contempla) - Temporização 
adequada conforme tempos medidos com auxílio de algum instrumento externo (timer 
no celular por exemplo);

**3/3**
- Até 3 pontos (Contempla/Contempla parcialmente/Não contempla) - O código 
implementa corretamente as fases do semáforo (vermelho, amarelo, verde) e as 
transições entre elas seguem a ordem correta. Além disso, o código tem boa estrutura, 
nomes representativos de variáveis e uso de comentários explicativos

**Observação: Montagem física bem organizada**
&nbsp;&nbsp;&nbsp;&nbsp;Levando em consideração a questão dos jumpers de tamanho irregulares, as cores dos fios deixou a montagem física bem intuitiva.

<br><br><br>

### Avaliação 2 - Gustavo Gonçalves da Costa
**4/4**
- Até 4 pontos (Contempla/Contempla parcialmente/Não contempla) - Montagem física 
realizada com as cores corretas, boa disposição dos fios e uso adequado de resistores 
para proteção;

**3/3**
- Até 3 pontos (Contempla/Contempla parcialmente/Não contempla) - Temporização 
adequada conforme tempos medidos com auxílio de algum instrumento externo (timer 
no celular por exemplo);

**3/3**
- Até 3 pontos (Contempla/Contempla parcialmente/Não contempla) - O código 
implementa corretamente as fases do semáforo (vermelho, amarelo, verde) e as 
transições entre elas seguem a ordem correta. Além disso, o código tem boa estrutura, 
nomes representativos de variáveis e uso de comentários explicativos
**Observação: Código com comentários bem explicativos**
&nbsp;&nbsp;&nbsp;&nbsp;Comentários bastante suscintos e intuitivos que demonstram o que cada linha faz.
<br><br><br>