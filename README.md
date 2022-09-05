<h1>Exemplos Aula Arduino :robot: </h1>

<h3>Conteúdo pastas: :file_folder:</h3>

<p><strong>Exemplo buzzer:</strong>               Buzzer -> O buzzer é um componente eletrônico que converte um sinal elétrico em onda sonora.</p>
<p><strong>Exemplo sensor movimento:</strong>     Pir -> sensor detector de movimentos.</p>
<p><strong>Exemplo trigger e buzzer:</strong>     Exemplo de código acionando buzzer à medida que o sensor de distância recebe um sinal.</p>
<p><strong>Exemplo trigger/echo: </strong>        Sensor ultrassônico. obs: Porta de saida => digital/pwd.</p>
<p><strong>Exemplo servo-motor:</strong>          Exemplo de código servo motor. </p>
<p><strong>Exemplo servo-motor-com-for:</strong>  Exemplo de código servo motor utilizando o for para diminuir o dano à engrenagem. </p>
<p><strong>Exemplo servo-motor-abreFecha-Trigger:</strong>  Exemplo de código servo motor utilizando o trigger/echo para acionar o movimento do motor.</p>
<p><strong>Exemplo sensor-temperatura</strong>:   Exemplo de código com esquema do circuito para sensor de temperatura.</p>
<p><strong>Exemplo ldr:</strong> (resistor dependente de luz) É um resistor cuja resistência varia conforme a intensidade da luz que incide sobre ele.</p>
<br/>

<h3>Definições: :pencil2:</h3>
<p><strong>Sensores:</strong> Detectam dados do ambiente externo e enviam aos microcontroladores.</p>
<p><strong>Microcontroladores:</strong>Recebem dados, processam informações e acionam atuadores.</p>
<p><strong>Atuadores:</strong> Geram alguma ação no sistema</p>
<br/>

<h3>Conceitos base eletrônica: :pencil2: </h3>

<p><strong>Tensão:</strong> Diferença de pontecial entre dois pontos. Unidade de medida => (V) volts.</p>
<p><strong>Ampere:</strong> Representa a quantidade de elétrons que forma uma corrente elétrica num dado tempo. A corrente elétrica é o movimento ordenado dos elétrons num condutor. Unidade de medida => (A) ampere.</p>
<p><strong>Portas digitais:</strong> Lê tensões entre 0V e 5V.</p>
<p><strong>Portas analógicas:</strong> Lê tensões entre 0 e 1023.</p>
<p><strong>GND(Ground ou terra):</strong> Aterramento, ligado ao lado negativo.</p>
<p><strong>VCC(Tensão):</strong> Pino de alimentação, ligado ao lado positivo. Tensão máx = 5V. </p>

<h4>Padrão de cores para os fios: :pushpin:</h4>
<p><strong>Vermelho:</strong> Tensão.</p>
<p><strong>Preto:</strong> Terra(GND).</p>
<br/>


<h3>Leis de Kirchhoff - Teoria das malhas: A soma algébrica das diferenças de potencial (ddp ou tensão) é igual a zero. :zap: </h3>

<p><strong>Ligação em série:</strong> A tensão pode ser diferente no circuito em série.</p>
<p><strong>Ligação em paralelo:</strong>  A tensão será a mesma em todos os pontos do circuito em paralelo.</p>
<br/>

<h3>Constantes utilizadas: :memo: </h3>

<p><strong>Sensor ultrassônico(trigger/echo) :</strong> s=0.01715cm para 1segundo.</p>
<p><strong>Conversão de temperatura:</strong> float t = 125.0*( float(a) - 104.0) / 254.0; </p>
<br/>

