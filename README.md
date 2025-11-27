# desafio-war
🗺️ Desafio WAR Estruturado – Conquista de Territórios
Bem-vindo ao Desafio WAR Estruturado! Inspirado no famoso jogo de estratégia, este desafio convida você a programar diferentes versões do jogo WAR, evoluindo seus conhecimentos em C à medida que avança pelos níveis Novato , Aventureiro e Mestre .

A empresa MateCheck contratou você para criar uma versão estruturada do WAR. Cada nível propõe novas funcionalidades, conceitos e desafios de programação. Você escolhe por onde começar!

🧩 Nível Novato: Cadastro Inicial dos Territórios

🎯 Objetivo
Criar uma structchamada Territorio.
Usar um vetor estático de 5 elementos para armazenar os territórios.
Cadastrar os dados de cada território: Nome , Cor do Exército , e Número de Tropas .
Exibir o estado atual do mapa.

⚙️ Funcionalidades
Leitura de dados pelo terminal ( fgetse scanf)
Impressão organizada dos dados de todos os territórios

💡 Conceitos abordados
struct
Vetor estático
Entrada/saída com scanf, fgets, eprintf

📥 Entrada
O usuário digita o nome do território, o corpo do exército dominante e o número de tropas para cada um dos 5 territórios .

📤 Saída

🧗‍♂️ Nível Aventureiro: Batalhas Estratégicas

🎯 Objetivo
Substituir o vetor estático por alocação dinâmica comcalloc
Criar uma função para simular ataques entre dois territórios
Utilizar números aleatórios para representar dados de batalha

🆕 Novidades em relação ao Nível Novato
Alocação dinâmica de memória comcalloc
Uso de gles
Laço interativo para o jogador escolher territórios para atacar e defender
Simulação de dados de ataque e defesa comrand()

⚙️ Funcionalidades
Cadastro dos territórios (como no Nível Novato)
Fase de ataque com:
Escolha de derrota e defensor
Dados de ataque/defesa
Lógica:
Se vencer → defensor perde 1 tropa
Se defensor perde todos → território é conquistado
Empates dem o asceta

💡 Conceitos abordados
Ponteiros
calloc/free
Aleatório com rand()/srand()
Funções para modularização
📥 Entrada
Território ( 1 a 5)
Território defensor (1 a 5)
📤 Saída
Exibição do resultado da batalha, dados sorteados e mudanças no mapa.

🧠 Nível Mestre: Missões e Modularização Total

🎯 Objetivo
Dividir o código em funções bem definidas
Implementar um sistema de missões
Verifique o cumprimento da missão
Aplicar boas práticas (uso de const, modularização, etc.)

🆕 Diferenças em relação ao Nível Aventureiro
Modularização total em funções
Missões entregues atribuídas:
Destruir o exército Verde
Conquistar 3 territórios
Menu interativo com opções

⚙️ Funcionalidades
Inicialização automática dos territórios
Menu principal com 3 opções:
Atácar
Verificador
Sair
Verificação de vitória da missão

💡 Conceitos abordados
Modularização
constcorreção
Estruturação em múltiplas funções
Passagem por referência

📥 Entrada
Ações do jogador via menu:
1- Atácar
2- Verificar
0- Sair
Escolha de territórios para ataque

📤 Saída
Mapa
Resultados das batalhas
Verificação da missão
Mensagem de vitória

🏁 Conclusão
Com este Desafio WAR Estruturado , você praticará os fundamentos essenciais da linguagem C de forma divertida e progressiva .

Cada nível foca em um conjunto de habilidades:

🟢 Novato : struct, vetor, entrada/saída
🔵 Aventureiro : ponteiros, memória dinâmica, lógica de jogo
🟣 Mestre : modularização, design limpo, sistema de missões
🚀Boa sorte! Avance nos níveis e torne-se um mestre da programação estratégica!
