<h1>Exemplos Aula Arduino :robot: </h1>

<h3>Conteúdo pastas: :file_folder:</h3>

<p><strong style="color: red">Exemplo buzzer:</strong>               Buzzer -> O buzzer é um componente eletrônico que converte um sinal elétrico em onda sonora.</p>
<p><strong style="color: red">Exemplo sensor movimento:</strong>     Pir -> sensor detector de movimentos.</p>
<p><strong style="color: red">Exemplo trigger e buzzer:</strong>     Exemplo de código acionando buzzer à medida que o sensor de distância recebe um sinal.</p>
<p><strong style="color: red">Exemplo trigger/echo: </strong>        Sensor ultrassônico. obs: Porta de saida => digital/pwd.</p>
<p><strong style="color: red">Exemplo servo-motor:</strong>          Exemplo de código servo motor. </p>
<p><strong style="color: red">Exemplo servo-motor-com-for:</strong>  Exemplo de código servo motor utilizando o for para diminuir o dano à engrenagem. </p>
<p><strong style="color: red">Exemplo servo-motor-abreFecha-Trigger:</strong>  Exemplo de código servo motor utilizando o trigger/echo para acionar o movimento do motor.</p>
<p><strong style="color: red">Exemplo sensor-temperatura</strong>:   Exemplo de código com esquema do circuito para sensor de temperatura.</p>
<p><strong style="color: red">Exemplo ldr:</strong> (resistor dependente de luz) É um resistor cuja resistência varia conforme a intensidade da luz que incide sobre ele.</p>
<br/>

<h3>Definições: :pencil2:</h3>
<p>Sensores: Detectam dados do ambiente externo e enviam aos microcontroladores.</p>
<p>Microcontroladores:Recebem dados, processam informações e acionam atuadores.</p>
<p>Atuadores: Geram alguma ação no sistema</p>

<h3>Conceitos base eletrônica: :pencil2: </h3>

<p>Tensão: Diferença de pontecial entre dois pontos. Unidade de medida => (V) volts.</p>
<p>Ampere: Representa a quantidade de elétrons que forma uma corrente elétrica num dado tempo. A corrente elétrica é o movimento ordenado dos elétrons num condutor. Unidade de medida => (A) ampere.</p>
<p>Portas digitais: Lê tensões entre 0V e 5V.</p>
<p>Portas analógicas: Lê tensões entre 0 e 1023.</p>
<p>GND(Ground ou terra): Aterramento, ligado ao lado negativo.</p>
<p>VCC(Tensão): Pino de alimentação, ligado ao lado positivo. Tensão máx = 5V. </p>

<h4>Padrão de cores para os fios: :pushpin:</h4>
<p>Vermelho: Tensão.</p>
<p>Preto: Terra(GND).</p>
<br/>


<h3>Leis de Kirchhoff - Teoria das malhas: A soma algébrica das diferenças de potencial (ddp ou tensão) é igual a zero. :zap: </h3>

<p>Ligação em série: A tensão pode ser diferente no circuito em série.</p>
<p>Ligação em paralelo:  A tensão será a mesma em todos os pontos do circuito em paralelo.</p>
<br/>

<h3>Constantes utilizadas: :memo: </h3>

<p>Sensor ultrassônico(trigger/echo) : s=0.01715cm para 1segundo.</p>
<p>Conversão de temperatura: float t = 125.0*( float(a) - 104.0) / 254.0; </p>
<br/>

