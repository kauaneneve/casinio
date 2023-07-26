#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <map>
using namespace std;
char escolha,m_saldo;
float d_saldo=0,s_saldo=0;
float saldo=100;

// Função para gerar um número aleatório entre minimo e maximo
int NumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Função para calcular o valor de uma carta
int ValorDaCarta(int carta) {
    if (carta > 10) {
        return 10;
    } else if (carta == 1) {
        return 11;  // Ás
    } else {
        return carta;
    }
}
 main() {
 	 do{
    system("chcp 65001");
    system("cls");
    //logo
    string line1 = "    \033[31m*\033[0m      \033[33m**************************************\033[0m      \033[90m*\033[0m     ";
    string line2 = "   \033[31m* *\033[0m     \033[33m*\033[0m    \033[1;31m•••••  •     •••••• •••••  •\033[0m    \033[33m*\033[0m     \033[90m* *\033[0m    ";
    string line3 = "  \033[31m*   *\033[0m    \033[33m*\033[0m    \033[1;31m•    • •     •         •    \033[0m    \033[33m*\033[0m    \033[90m*   *\033[0m   ";
    string line4 = " \033[31m*     *\033[0m   \033[33m*\033[0m    \033[1;31m•••••  •     ••••••   •    •\033[0m    \033[33m*\033[0m   \033[90m*     *\033[0m   ";
    string line5 = "  \033[31m*   *\033[0m    \033[33m*\033[0m    \033[1;31m•    • •     •       •     •\033[0m    \033[33m*\033[0m   \033[90m*******\033[0m   ";
    string line6 = "   \033[31m* *\033[0m     \033[33m*\033[0m    \033[1;31m•••••  ••••• •••••• •••••  •\033[0m    \033[33m*\033[0m      \033[90m*\033[0m      ";
    string line7 = "    \033[31m*\033[0m      \033[33m**************************************\033[0m     \033[90m***\033[0m     ";
    //botão do caça niquel
    string line8 =  "          \033[32;1m ************************************\033[0m";
    string line9 =  "  \033[38;5;188m*\033[0m       \033[32;1m *   \033[34;1m•••   •   •••   •      •   •\033[0m   \033[32;1m*\033[0m";
    string line10 =  " \033[38;5;188m**\033[0m       \033[32;1m *   \033[34;1m•    •••  •    •••     • • •\033[0m   \033[32;1m*\033[0m";
    string line11 =  "  \033[38;5;188m*\033[0m       \033[32;1m *   \033[34;1m••• •   • ••• •   •    •  ••\033[0m   \033[32;1m*\033[0m";
    string line12 =  " \033[38;5;188m***\033[0m      \033[32;1m *              \033[34;1m•\033[0m                   \033[32;1m*\033[0m";
    
    //botão 21
    string line13 =  "          \033[36;1m ************************************\033[0m";
    string line14 =  " \033[38;5;188m***\033[0m      \033[36;1m *\033[0m            \033[35;1m•••     •\033[0m             \033[36;1m*\033[0m";
    string line15 =  " \033[38;5;188m  *\033[0m      \033[36;1m *\033[0m              \033[35;1m•    ••\033[0m             \033[36;1m*\033[0m";
    string line16 =  " \033[38;5;188m***\033[0m      \033[36;1m *\033[0m            \033[35;1m•••     •\033[0m             \033[36;1m*\033[0m";
    string line17 =  " \033[38;5;188m***\033[0m      \033[36;1m *\033[0m            \033[35;1m•••    •••\033[0m            \033[36;1m*\033[0m";
    //botão do saldo 
    string line18 =  "          \033[34m ************************************\033[0m";
    string line19 =  "          \033[0m\033[34m *   \033[37;1m••••    •    •    •••   •••\033[0m    \033[34m*\033[0m";
    string line20 =  " \033[38;5;188m***      \033[0m\033[34m *   \033[37;1m•      • •   •    •  • •   •\033[0m   \033[34m*\033[0m";
    string line21 =  " \033[38;5;188m***      \033[0m\033[34m *   \033[37;1m••••  •••••  •    •  • •   •\033[0m   \033[34m*\033[0m";
    string line22 =  " \033[38;5;188m***      \033[0m\033[34m *   \033[37;1m•••• •     • •••• •••   •••\033[0m    \033[34m*\033[0m";
    
    //botão do creditos
    string line25 = "          \033[30;1m ************************************\033[0m";
    string line26 = "\033[38;5;188m* *\033[0m       \033[30;1m *\033[0m  \033[35m••• •••  ••• ••  • ••• •••  •• \033[0m \033[30;1m*\033[0m";
    string line27 = "\033[38;5;188m*** \033[0m      \033[30;1m *\033[0m  \033[35m•   • •  ••• • • •  •  • •  •  \033[0m \033[30;1m*\033[0m";
    string line28 = "\033[38;5;188m  *\033[0m       \033[30;1m *\033[0m  \033[35m••• •  • ••• ••  •  •  ••• ••  \033[0m \033[30;1m*\033[0m";
    string line29 = "\033[38;5;188m  *\033[0m       \033[30;1m *\033[0m                                  \033[30;1m*\033[0m";
   

    int consoleWidth = 80; // Largura do console (ajuste conforme necessário)
    int textWidth = line1.length(); // Largura do texto

    // Calcula a quantidade de espaços em branco antes do texto para centralizá-lo
    int padding = (consoleWidth - textWidth) / 2;

    // Imprime as linhas com espaços em branco adicionados para centralização
    cout << setw(5) << "" << line1 << endl;
    cout << setw(5) << "" << line2 << endl;
    cout << setw(5) << "" << line3 << endl;
    cout << setw(5) << "" << line4 << endl;
    cout << setw(5) << "" << line5 << endl;
    cout << setw(5) << "" << line6 << endl;
    cout << setw(5) << "" << line7 << endl;
    cout<<"\n\n\n";
    cout << setw(6) << "" << line8 << endl;
    cout << setw(6) << "" << line9 << endl;
    cout << setw(6) << "" << line10 << endl;
    cout << setw(6) << "" << line11 << endl;
    cout << setw(6) << "" << line12 << endl;
    cout << setw(6) << "" << line8 << endl;
    cout<<"\n";
    cout << setw(6) << "" << line13 << endl;
    cout << setw(6) << "" << line14 << endl;
    cout << setw(6) << "" << line15 << endl;
    cout << setw(6) << "" << line16 << endl;
    cout << setw(6) << "" << line17 << endl;
    cout << setw(6) << "" << line13 << endl;
    cout<<"\n";
    cout << setw(6) << "" << line18 << endl;
    cout << setw(6) << "" << line19 << endl;
    cout << setw(6) << "" << line20 << endl;
    cout << setw(6) << "" << line21 << endl;
    cout << setw(6) << "" << line22 << endl;
    cout << setw(6) << "" << line18 << endl;
    cout<<"\n";
    cout << setw(6) << "" << line25 << endl;
    cout << setw(6) << "" << line26 << endl;
    cout << setw(6) << "" << line27 << endl;
    cout << setw(6) << "" << line28 << endl;
    cout << setw(6) << "" << line29 << endl;
    cout << setw(6) << "" << line25 << endl;
    //---------------------------------------------------------------------------------------------//
    
    
   cout<<"\n escolha uma opção"<<endl;
   cin>>escolha;
   // Converter a letra para valor ASCII
    int asciiValue = static_cast<int>(escolha);
  switch (asciiValue)
  {
    case 49:{
              system("chcp 65001");
              system("cls");
    cout << "Bem-vindo ao Caça-níquel!" << endl;
    cout << "Regras do jogo: " << endl;
    cout << "- Cada rodada custa o valor apostado." << endl;
    cout << "- Se todas as bobinas mostrarem a mesma figura, você ganha o prêmio especial!" << endl;
    cout << "- Caso contrário, você ganha o dobro do valor apostado." << endl;
    cout << endl;
    srand(time(0)); // semente aleatória
    char simbolos[6] = {'B', 'C', 'L', 'O', 'U', 'S'};

    map<char, string> desenhos = {
        {'B', R"(
  ,--./,-.
 / #      \
|          |
 \        /
  `._,._,'
        )"
		},
        {'C', R"(
─▄█▀█▄──▄███▄─
▐█░██████████▌
─██▒█████████─
──▀████████▀──
─────▀██▀─────- `  
        )"
		},
        {'L', R"(
──────────▄██▄▄
─▄▄█████▄─██▀
▀█████████▄██▄
▒▒▀██████████▀▒
▒▒▒▒▒█▄█▄▄▒▒▒▒▒
        )"
		},
        {'O', R"(
  
░▄▄▄▄░
▀▀▄██►
▀▀███►
░▀███►░█►
▒▄████▀▀

   
        )"
		},
        {'U', R"(
──────▄▀▄─────▄▀▄
─────▄█░░▀▀▀▀▀░░█▄
─▄▄──█░░░░░░░░░░░█──▄▄
█▄▄█─█░░▀░░┬░░▀░░█─█▄▄█   
        )"
		},
        {'S', R"(
 ──────▄▀─
─█▀▀▀█▀█─
──▀▄░▄▀──
────█────
──▄▄█▄▄──
        )"
		},
    };

    cout << "Bem-vindo ao caça-níquel!\n\n";
    while (saldo > 0) {
        cout << "Saldo: $" << saldo << endl;

        char c_jogando;
        cout << "Deseja continuar jogando? (S/N): ";
        cin >> c_jogando;

        if (c_jogando == 'N' || c_jogando == 'n') {
            cout << "Obrigado por jogar! Seu saldo final é: $" << saldo << endl;
             getch(); //ou system("pause");
             break;
        }

        int v_aposta;
        cout << "Digite o valor da aposta: $";
        cin >> v_aposta;

        if (v_aposta <= 0 || v_aposta > saldo) {
            cout << "Aposta inválida. Por favor, insira um valor válido." << endl;
            continue;
        }

        char rolo1 = simbolos[rand() % 6];
        char rolo2 = simbolos[rand() % 6];
        char rolo3 = simbolos[rand() % 6];
        char rolo4 = simbolos[rand() % 6];

        cout << "\n" << desenhos[rolo1] << "\n" << desenhos[rolo2] << "\n" << desenhos[rolo3] << "\n" << desenhos[rolo4] << "\n\n";

        if (rolo1 == rolo2 && rolo2 == rolo3 && rolo3 == rolo4) {
            cout << "Jackpot! Você quintuplicou o seu valor apostado\n" << endl;
            saldo += v_aposta * 5;
        } else if (rolo1 == rolo2 || rolo2 == rolo3 || rolo1 == rolo3 || rolo1 == rolo4 || rolo2 == rolo4 || rolo3 == rolo4) {
            cout << "Par! Você dobrou o valor apostado\n" << endl;
            saldo += v_aposta * 2;
        } else {
            cout << "Perdeu! Tente novamente.\n" << endl;
            saldo -= v_aposta ;
        }
    }
     getch(); //ou system("pause");
             break;
}

    case 50:{
             system("chcp 65001");
	system("cls");
    srand(time(0));  //fazer os negocios aleatorios

   
    int suaPontuacao = 0;
    int PontuacaoDoPC = 0;

    cout << "Bem-vindo ao jogo de 21!" << endl;
    cout << "Regras do jogo: " << endl;
    cout << "- Cada rodada custa o valor apostado." << endl;
    cout << "- Você ganha 2 vezes o valor apostado inicialmente" << endl;

    // Loop principal do jogo
    while (saldo > 0) {
        cout << "Saldo: " << saldo << endl;
        // Verifica se o jogador deseja continuar jogando
        char continuar1;
        cout << "Deseja continuar jogando? (S/N): ";
        cin >> continuar1;
        system("cls");
        if (continuar1 == 'N' || continuar1 == 'n') {
            cout << "Obrigado por jogar! Seu saldo final é: $" << saldo << endl;
             getch(); //ou system("pause");
             break;
        }

        // Obter a aposta do jogador
        int aposta;
        cout << "Digite o valor da aposta: $";
        cin >> aposta;

        if (aposta <= 0 || aposta > saldo) {
            cout << "Aposta inválida. Por favor, insira um valor válido." << endl;
            continue;  // Reiniciar o loop para obter uma aposta válida
        }


        // Reseta a pontuação do jogador e do dealer
        suaPontuacao = 0;
        PontuacaoDoPC = 0;

        // Distribuir as duas primeiras cartas para o jogador
        suaPontuacao += ValorDaCarta(NumeroAleatorio(1, 10));

        // Distribuir uma carta para o dealer
        PontuacaoDoPC += ValorDaCarta(NumeroAleatorio(1, 10));

        // Loop do jogo atual
        while (true) {
            char continuar;
            cout << "Sua pontuação: " << suaPontuacao << endl;
            cout << "Deseja comprar mais uma carta? (s/n): ";
            cin >> continuar;

            if (continuar == 's' || continuar == 'S') {
                suaPontuacao += ValorDaCarta(NumeroAleatorio(1, 10));

                if (suaPontuacao > 21) {
                    cout << "Você estourou! Sua pontuação: " << suaPontuacao << endl;
                    saldo -= aposta;
                    break;
                }
            } else if (continuar == 'n' || continuar == 'N') {
                // O jogador parou de comprar cartas. É a vez do dealer.

                // O dealer deve comprar cartas até alcançar uma pontuação maior ou igual a 17.
                while (PontuacaoDoPC < 17) {
                    PontuacaoDoPC += ValorDaCarta(NumeroAleatorio(1, 10));
                }

                cout << "Pontuação do PC: " << PontuacaoDoPC << endl;

                if (PontuacaoDoPC > 21 || suaPontuacao > PontuacaoDoPC) {
                    cout << "Você ganhou!" << endl;
                    saldo += aposta;
                } else if (suaPontuacao == PontuacaoDoPC) {
                    cout << "Empate!" << endl;
                } else {
                    cout << "Você perdeu!" << endl;
                    saldo -= aposta;
                }

                break;
            } else {
                cout << "Opção inválida. Tente novamente." << endl;
            }
        }
    }

    cout << "O jogo acabou. Seu saldo final: " << saldo << endl;

     getch(); //ou system("pause");
             break;
            
           }
    case 51:{
    system("chcp 65001");
	system("cls");
            cout << "Aqui você pode inserir ou retirar o seu saldo "<<endl;
            cout << "oque você deseja fazer?"<<endl;
            cout << "*S=para sacar"<<endl;
            cout << "*D=para depositar "<<endl;
            cout << "escolha uma opção"<<endl;
            cin >> m_saldo;
            
            
            if(m_saldo=='d'||m_saldo=='D'||m_saldo=='+'){
            	cout << "qual o valor que você deseja adicionar"<<endl;
            	cin >> d_saldo;
            	saldo += d_saldo;
            	cout << "Seu saldo foi adicionado com sucesso, seu saldo atual é de: " << saldo << endl;
            }
            else if(m_saldo=='s'||m_saldo=='S'||m_saldo=='-'){
            	cout << "qual o valor que você deseja retirar"<<endl;
            	cin >> s_saldo;
            	saldo -= s_saldo;
            	cout << "Seu saldo foi retirado com sucesso, seu saldo atual é de: " << saldo << endl;

            }
            	else{
            		cout << "você informou a opção errada"<<endl;
				}
			getch(); //ou system("pause");
             break;
           }
    case 52:{
    	 string line30 = "__________________________________________________________________";
    	 string line31 = "|                                                                |";
    	 string line32 = "|     Criador:Kauã Neneve♣         Prof:craudinha♥               |";
    	 string line33 = "|                                                                |";
    	 string line34 = "|     Turma:Superior de Tecnologia em Análise e Desenvolvimento  |";
		 string line35 = "|            de Sistemas - 1ª Fase                               |";
		 string line36 = "|________________________________________________________________|";
    	 
         cout << setw(5) << "" << line30 << endl; 
		 cout << setw(5) << "" << line31 << endl;
		 cout << setw(5) << "" << line32 << endl;
		 cout << setw(5) << "" << line33 << endl;
		 cout << setw(5) << "" << line34 << endl; 
		 cout << setw(5) << "" << line35 << endl;
		 cout << setw(5) << "" << line36 << endl; 
         getch(); //ou system("pause");
         
             break;
           }
     case 115: // 's'
     case 83:  // 'S'
	       {
     cout<<"░░░░░▄▄▀▀▀▀▀▀▀▀▀▄▄░░░░░"<<endl;
     cout<<"░░░░█░░░░░░░░░░░░░█░░░░"<<endl;
     cout<<"░░░█░░░░░░░░░░▄▄▄░░█░░░"<<endl;
     cout<<"░░░█░░▄▄▄░░▄░░███░░█░░░"<<endl;
     cout<<"░░░▄█░▄░░░▀▀▀░░░▄░█▄░░░"<<endl;
     cout<<"░░░█░░▀█▀█▀█▀█▀█▀░░█░░░"<<endl;
     cout<<"░░░▄██▄▄▀▀▀▀▀▀▀▄▄██▄░░░"<<endl;
     cout<<"░▄█░█▀▀█▀▀▀█▀▀▀█▀▀█░█▄░"<<endl;
     cout<<"era só isso mesmo"<<endl;
             getch(); //ou system("pause");
             break;
           }
   
   default: {
               cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(escolha!=5);
cout<<"\n\n\n ";
return(0);
}


