#include <stdio.h>

int main() {
    int op = 0;
    int exec = 0;

    // Variaveis de controle
    int equipe;
    int projeto;
    float tempo;
  

    // Variaveis Programação
    // Quantidade de tarefas
    int total_tarefas_prog = 0;
    int tarefas_proj1_prog = 0;
    int tarefas_proj2_prog = 0;
    int tarefas_proj3_prog = 0;
    
    // Variaveis
    int total_tarefas = 0;
    float tempo_total = 0;
    

    // Tempo
    float tempo_total_prog = 0;
    float tempo_total_tarefa_prog_proj1 = 0;
    float tempo_total_tarefa_prog_proj2 = 0;
    float tempo_total_tarefa_prog_proj3 = 0;

    // Variaveis design
    // Quantidades de tarefas
    int total_tarefas_design = 0;
    int tarefas_proj1_design = 0;
    int tarefas_proj2_design = 0;
    int tarefas_proj3_design = 0;
    // Tempo
    float tempo_total_design = 0;
    float tempo_total_tarefa_design_proj1 = 0;
    float tempo_total_tarefa_design_proj2 = 0;
    float tempo_total_tarefa_design_proj3 = 0;


     printf("\
===================================================================| LEIA COM MUITA ATENÇÃO!! :D |===================================================================\n\
                                                                                                                                                                     \n\
                                                 [ RESPONDA AS PERGUNTAS UTILIZANANDO  OS NUMEROS DADOS NA QUESTÃO ]                                                 \n\
                                                                                                                                                                     \
\n\n\n");                                                                                                                                                                   
                                                                                                                                                                   
    while (exec == 0) {
        // Escolha equipe prog
        printf("\
--------------------------------------------------------------------------[ 1° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                               QUAL DAS EQUIPES REALIZOU O PROJETO ?                                                                 \n\
                                                                                                                                                                     \n\
                                                    [ 1 ] EQUIPE DE PROGRAMAÇÃO          [ 2 ] EQUIPE DE DESIGN                                                      \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                                        RESPOSTA ==> ");   
        scanf("%i", &equipe);
        while (equipe != 1 && equipe != 2) {
            printf("Opção inválida, escolha 1 para Equipe de Programação ou 2 para Equipe de Design. => ");
            scanf("%i", &equipe);
        }

        switch (equipe) {
            // prog
            case 1:
                printf("\n\n\
--------------------------------------------------------------------------[ 2° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                                QUAL QUE FOI O  PROJETO REALIZADO ?                                                                  \n\                                                                                                                                                                     
                                                                                                                                                                     \n\
                                       [ 1 ] LIVROS DIGITAIS PARA CRIANÇAS               [ 2 ] LEITOR DE TEXTO PARA DEFÍCIENTES VISUAIS                              \n\
                                                                                                                                                                     \n\
                                                    [ 3 ] SISTEMA DE REGISTRO DE PARTICIPAÇÃO EM EVENTOS CULTURAIS                                                   \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\                                                                                                         
                                                                        RESPOSTA ==> ");   

                scanf("%i", &projeto);
                while(projeto < 1 || projeto > 3){
                    printf("Opção inválida, escolha o projeto com os valores 1, 2 ou 3. =>");
                    scanf("%i", &projeto);
                }
                // Escolha projeto
                switch (projeto) {
                    // (1) Livros Digitais para Crianças
                    case 1:
                        tarefas_proj1_prog++;
                        total_tarefas_prog++;
                        printf("\n\n\
--------------------------------------------------------------------------[ 3° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                     QUAL FOI O TEMPO NECESSARIO PARA A CONCLUSÃO DO PROJETO ?                                                       \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                             RESPOSTA ( EM MINUTOS ) ==> ");
                        scanf("%f", &tempo);
                        tempo_total_tarefa_prog_proj1 += tempo;
                        break;
                    // (2) Leitor de Textos para Defícientes Visuais
                    case 2:
                        tarefas_proj2_prog++;
                        total_tarefas_prog++;
                        printf("\n\n\
--------------------------------------------------------------------------[ 3° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                     QUAL FOI O TEMPO NECESSARIO PARA A CONCLUSÃO DO PROJETO ?                                                       \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                             RESPOSTA ( EM MINUTOS ) ==> ");
                        scanf("%f", &tempo);
                        tempo_total_tarefa_prog_proj2 += tempo;
                        break;
                    // (3) Sistema de Registro de Participação em Eventos Culturais
                    case 3:
                        tarefas_proj3_prog++;
                        total_tarefas_prog++;
                        printf("\n\n\
--------------------------------------------------------------------------[ 3° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                     QUAL FOI O TEMPO NECESSARIO PARA A CONCLUSÃO DO PROJETO ?                                                       \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                             RESPOSTA ( EM MINUTOS ) ==> ");
                        scanf("%f", &tempo);
                        tempo_total_tarefa_prog_proj3 += tempo;
                        break;
                    default:
                        printf("Opcao invalida escolha o projeto com os valores 1, 2 ou 3.");
                        break;
                }
                break;
                
            // design
            case 2:
                printf("\n\n\
--------------------------------------------------------------------------[ 2° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                                QUAL QUE FOI O  PROJETO REALIZADO ?                                                                  \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                       [ 1 ] LIVROS DIGITAIS PARA CRIANÇAS               [ 2 ] LEITOR DE TEXTO PARA DEFÍCIENTES VISUAIS                              \n\
                                                                                                                                                                     \n\
                                                    [ 3 ] SISTEMA DE REGISTRO DE PARTICIPAÇÃO EM EVENTOS CULTURAIS                                                   \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\                                                                                                         
                                                                        RESPOSTA ==> "); 
                scanf("%i", &projeto);
                while(projeto < 1 || projeto > 3){
                                    printf("Opção inválida, escolha o projeto com os valores 1, 2 ou 3. =>");
                                    scanf("%i", &projeto);
                }
                switch (projeto) {
                    // (1) Livros Digitais para Crianças
                    case 1:
                        tarefas_proj1_design++;
                        total_tarefas_design++;
                        printf("\n\n\
--------------------------------------------------------------------------[ 3° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                     QUAL FOI O TEMPO NECESSARIO PARA A CONCLUSÃO DO PROJETO ?                                                       \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                             RESPOSTA ( EM MINUTOS ) ==> ");
                        scanf("%f", &tempo);
                        tempo_total_tarefa_design_proj1 += tempo;
                        break;
                    // (2) Leitor de Textos para Defícientes Visuais
                    case 2:
                        tarefas_proj2_design++;
                        total_tarefas_design++;
                        printf("\n\n\
--------------------------------------------------------------------------[ 3° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                     QUAL FOI O TEMPO NECESSARIO PARA A CONCLUSÃO DO PROJETO ?                                                       \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                             RESPOSTA ( EM MINUTOS ) ==> ");
                        scanf("%f", &tempo);
                        tempo_total_tarefa_design_proj2 += tempo;
                        break;
                    // (3) Sistema de Registro de Participação em Eventos Culturais
                    case 3:
                        tarefas_proj3_design++;
                        total_tarefas_design++;
                        printf("\n\n\
--------------------------------------------------------------------------[ 3° PERGUNTA ]----------------------------------------------------------------------------\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                     QUAL FOI O TEMPO NECESSARIO PARA A CONCLUSÃO DO PROJETO ?                                                       \n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                             RESPOSTA ( EM MINUTOS ) ==> ");
                        scanf("%f", &tempo);
                        tempo_total_tarefa_design_proj3 += tempo;
                        break;
                    default:
                        printf("Opcao inválida escolha o projeto com os valores 1, 2 ou 3.");
                        break;
                }
                break;
            default:
                printf("Opção inválida.");
                break;
        }

        printf("\n\nDESEJA ADICIONAR MAIS DADOS ??.... [ 1 ] SIM |  [ 2 ] NÃO\n=> ");
        scanf("%i", &op);
        while (op != 1 && op != 2){
            printf("Opção inválida, o valor deve ser 1 ou 2 => ");
            scanf("%i", &op);
        }
        switch (op) {
            case 1:
                exec = 0;
                break;
            case 2:
                exec = 1;
                break;
            default:
                printf("Opcao invalida, o valor deve ser 1 ou 2");
        }
    }
    

    
    
    // Calculando estatísticas

    total_tarefas = total_tarefas_prog + total_tarefas_design;
    
    tempo_total = tempo_total_tarefa_prog_proj1 + tempo_total_tarefa_prog_proj2 + tempo_total_tarefa_prog_proj3 + tempo_total_tarefa_design_proj1 + tempo_total_tarefa_design_proj2 + tempo_total_tarefa_design_proj3;
    

    
    

    int prog_tempo_total = tempo_total_tarefa_prog_proj1 + tempo_total_tarefa_prog_proj2 + tempo_total_tarefa_prog_proj3;
    int design_tempo_total = tempo_total_tarefa_design_proj1 + tempo_total_tarefa_design_proj2 + tempo_total_tarefa_design_proj3;
    
    //DESING
    
    //Media tarefas
    int horas_medio_tarefa_design_proj1 = ( tempo_total_tarefa_design_proj1 / tarefas_proj1_design ) / 60;
    int minutos_medio_tarefa_design_proj1 =  ( tempo_total_tarefa_design_proj1 / tarefas_proj1_design ) - ( horas_medio_tarefa_design_proj1 * 60 );
    
    int horas_medio_tarefa_design_proj2 = ( tempo_total_tarefa_design_proj2 / tarefas_proj2_design ) / 60;
    int minutos_medio_tarefa_design_proj2 =  ( tempo_total_tarefa_design_proj2 / tarefas_proj2_design ) - ( horas_medio_tarefa_design_proj2 * 60 );
    
    int horas_medio_tarefa_design_proj3 = ( tempo_total_tarefa_design_proj3 / tarefas_proj3_design ) / 60;
    int minutos_medio_tarefa_design_proj3 =  ( tempo_total_tarefa_design_proj3 / tarefas_proj3_design ) - ( horas_medio_tarefa_design_proj3 * 60 );
    
    int horas_medio_tarefas_design = ( tempo_total_tarefa_design_proj1 +  tempo_total_tarefa_design_proj2 +  tempo_total_tarefa_design_proj3 ) / (tarefas_proj1_design + tarefas_proj2_design + tarefas_proj3_design) / 60;
    
    //Media horas
    int horas_tarefas_design_proj1 =  tempo_total_tarefa_design_proj1 / 60;
    int minutos_tarefas_design_proj1 = tempo_total_tarefa_design_proj1 - ( horas_tarefas_design_proj1 * 60);
    
    int horas_tarefas_design_proj2 =  tempo_total_tarefa_design_proj2 / 60;
    int minutos_tarefas_design_proj2 = tempo_total_tarefa_design_proj2 - ( horas_tarefas_design_proj2 * 60);
    
    int horas_tarefas_design_proj3 =  tempo_total_tarefa_design_proj3 / 60;
    int minutos_tarefas_design_proj3 = tempo_total_tarefa_design_proj3 - ( horas_tarefas_design_proj3 * 60);
    
    int horas_total_tarefas_design = ( tempo_total_tarefa_design_proj1 +  tempo_total_tarefa_design_proj2 +  tempo_total_tarefa_design_proj3 ) / 60;
    int minutos_total_tarefas_design = ( tempo_total_tarefa_design_proj1 +  tempo_total_tarefa_design_proj2 +  tempo_total_tarefa_design_proj3 ) - ( horas_total_tarefas_design * 60 );
    
    //Porcentagem tarefas
    float porct_tarefas_proj1_design = (float)((float)tarefas_proj1_design/(float)total_tarefas_design) *100.00;
    float porct_tarefas_proj2_design = (float)((float)tarefas_proj2_design/(float)total_tarefas_design) *100.00; 
    float porct_tarefas_proj3_design = (float)((float)tarefas_proj3_design/(float)total_tarefas_design) *100.00;  
    float total_porct_tarefas_desing = (float)((float)total_tarefas_design/(float)total_tarefas_design) *100.00; //IF
    
    
    //Porcetagem tempo
    float porct_tempo_proj1_design = (tempo_total_tarefa_design_proj1 / design_tempo_total) * 100.00;
    float porct_tempo_proj2_design = (tempo_total_tarefa_design_proj2 / design_tempo_total) * 100.00;
    float porct_tempo_proj3_design = (tempo_total_tarefa_design_proj3 / design_tempo_total) * 100.00;
    
    //Desing verificacao
    if(tempo_total_tarefa_design_proj1 == 0){
        horas_medio_tarefa_design_proj1 = 0;
        minutos_medio_tarefa_design_proj1 = 0;
        porct_tempo_proj1_design = 0;
        porct_tarefas_proj1_design = 0;
    }
    if(tempo_total_tarefa_design_proj2 == 0){
        horas_medio_tarefa_design_proj2= 0;
        minutos_medio_tarefa_design_proj2 = 0;
        porct_tempo_proj2_design = 0;
        porct_tarefas_proj2_design = 0;
    }
    if(tempo_total_tarefa_design_proj3 == 0){
        horas_medio_tarefa_design_proj3 = 0;
        minutos_medio_tarefa_design_proj3 = 0;
        porct_tarefas_proj3_design = 0;
        porct_tempo_proj3_design = 0;
    }
    if (total_tarefas_design > 0){
        total_porct_tarefas_desing = 100.00;
    }else{
        total_porct_tarefas_desing = 0.00;
    }
    
    //PROGRAMAÇÃO
    
    //Media tarefas
    int horas_medio_tarefa_prog_proj1 = ( tempo_total_tarefa_prog_proj1 / tarefas_proj1_prog) / 60;
    int minutos_medio_tarefa_prog_proj1 =  ( tempo_total_tarefa_prog_proj1 / tarefas_proj1_prog) - ( horas_medio_tarefa_prog_proj1 * 60 );
    
    int horas_medio_tarefa_prog_proj2 = ( tempo_total_tarefa_prog_proj2 / tarefas_proj2_prog) / 60;
    int minutos_medio_tarefa_prog_proj2 =  ( tempo_total_tarefa_prog_proj2 / tarefas_proj2_prog) - ( horas_medio_tarefa_prog_proj2 * 60 );
    
    int horas_medio_tarefa_prog_proj3 = ( tempo_total_tarefa_prog_proj3 / tarefas_proj3_prog) / 60;
    int minutos_medio_tarefa_prog_proj3 =  ( tempo_total_tarefa_prog_proj3 / tarefas_proj3_prog) - ( horas_medio_tarefa_prog_proj3 * 60 );
    
    int horas_medio_tarefas_prog= ( tempo_total_tarefa_prog_proj1 +  tempo_total_tarefa_prog_proj2 +  tempo_total_tarefa_prog_proj3 ) / (tarefas_proj1_prog+ tarefas_proj2_prog+ tarefas_proj3_prog) / 60;
    
    //Media horas
    int horas_tarefas_prog_proj1 =  tempo_total_tarefa_prog_proj1 / 60;
    int minutos_tarefas_prog_proj1 = tempo_total_tarefa_prog_proj1 - ( horas_tarefas_prog_proj1 * 60);
    
    int horas_tarefas_prog_proj2 =  tempo_total_tarefa_prog_proj2 / 60;
    int minutos_tarefas_prog_proj2 = tempo_total_tarefa_prog_proj2 - ( horas_tarefas_prog_proj2 * 60);
    
    int horas_tarefas_prog_proj3 =  tempo_total_tarefa_prog_proj3 / 60;
    int minutos_tarefas_prog_proj3 = tempo_total_tarefa_prog_proj3 - ( horas_tarefas_prog_proj3 * 60);
    
    //Porcetagem tarefas
    float porct_tarefas_proj1_prog = ((float)tarefas_proj1_prog/(float)total_tarefas_prog) *100.00;
    float porct_tarefas_proj2_prog = ((float)tarefas_proj2_prog/(float)total_tarefas_prog) *100.00;
    float porct_tarefas_proj3_prog = ((float)tarefas_proj3_prog/(float)total_tarefas_prog) *100.00;
    float total_porct_tarefas_prog = ((float)total_tarefas_design/(float)total_tarefas_design) *100.00; //IF
    
    
    //Porcetagem tempo
    float porct_tempo_proj1_prog = (tempo_total_tarefa_prog_proj1 / prog_tempo_total) * 100.00;
    float porct_tempo_proj2_prog = (tempo_total_tarefa_prog_proj2 / prog_tempo_total) * 100.00;
    float porct_tempo_proj3_prog = (tempo_total_tarefa_prog_proj3 / prog_tempo_total) * 100.00;
    
     
    //Programacao verificacao
    if(tempo_total_tarefa_prog_proj1 == 0){
        horas_medio_tarefa_prog_proj1 = 0;
        minutos_medio_tarefa_prog_proj1 = 0;
        porct_tarefas_proj1_prog = 0;
        porct_tempo_proj1_prog = 0;
        tempo_total_tarefa_prog_proj1 = 0;
        
    }
    if(tempo_total_tarefa_prog_proj2 == 0){
        horas_medio_tarefa_prog_proj2 = 0;
        minutos_medio_tarefa_prog_proj2 = 0;
        porct_tarefas_proj2_prog = 0;
        porct_tempo_proj2_prog = 0;
        tempo_total_tarefa_prog_proj2 = 0;
        
    }
    if(tempo_total_tarefa_prog_proj3 == 0){
        horas_medio_tarefa_prog_proj3 = 0;
        minutos_medio_tarefa_prog_proj3 = 0;
        porct_tarefas_proj3_prog = 0;
        porct_tempo_proj3_prog = 0;
        tempo_total_tarefa_prog_proj3=0;
    }
    
    int horas_total_tarefas_prog = ( tempo_total_tarefa_prog_proj1 +  tempo_total_tarefa_prog_proj2 +  tempo_total_tarefa_prog_proj3 ) / 60;
    int minutos_total_tarefas_prog = ( tempo_total_tarefa_prog_proj1 +  tempo_total_tarefa_prog_proj2 +  tempo_total_tarefa_prog_proj3 ) - ( horas_total_tarefas_prog * 60 );
    
    int minutos_medio_tarefas_prog = ( horas_medio_tarefas_prog * 60) - (tempo_total_tarefa_prog_proj1 + tempo_total_tarefa_prog_proj2 + tempo_total_tarefa_prog_proj3 ) / (total_tarefas_prog);

    int minutos_medio_tarefas_design = ( horas_medio_tarefas_design * 60) - (tempo_total_tarefa_design_proj1 + tempo_total_tarefa_design_proj2 + tempo_total_tarefa_design_proj3 ) / (total_tarefas_design);
    
    int horas_tempo_total = tempo_total / 60;
    
    //GERAL
    
    int minutos_tempo_total = tempo_total - ( 60 * horas_tempo_total);
    
    
    int horas_tempo_total_proj1 = ( tempo_total_tarefa_prog_proj1 + tempo_total_tarefa_design_proj1) /60;
    
    int horas_tempo_total_proj2 = ( tempo_total_tarefa_prog_proj2 + tempo_total_tarefa_design_proj2) /60;
    
    int horas_tempo_total_proj3 = ( tempo_total_tarefa_prog_proj3 + tempo_total_tarefa_design_proj3) /60;
    
    int minutos_tempo_total_proj1 = ( tempo_total_tarefa_prog_proj1 + tempo_total_tarefa_design_proj1) - ( 60 * horas_tempo_total_proj1 );
    
    int minutos_tempo_total_proj2 = ( tempo_total_tarefa_prog_proj2 + tempo_total_tarefa_design_proj2) - ( 60 * horas_tempo_total_proj2 );
    
    int minutos_tempo_total_proj3 = ( tempo_total_tarefa_prog_proj3 + tempo_total_tarefa_design_proj3) - ( 60 * horas_tempo_total_proj3 );
    
    int total_tarefas_prog_design_proj1 = tarefas_proj1_prog + tarefas_proj1_design;
    
    int total_tarefas_prog_design_proj2 = tarefas_proj2_prog + tarefas_proj2_design;
    
    int total_tarefas_prog_design_proj3 = tarefas_proj3_prog + tarefas_proj3_design;
    
    //Geral verificacao
    
    float porct_tp1pd = (float)((float)tarefas_proj1_prog/(float)total_tarefas_prog_design_proj1) *100.00;
    float porct_tp1dp = (float)((float)tarefas_proj1_design/(float)total_tarefas_prog_design_proj1) *100.00;
    float porct_tp1_total = (float)((float)total_tarefas_prog_design_proj1/(float)total_tarefas_prog_design_proj1) *100.00; //IF
    
    float porct_tp2pd = (float)((float)tarefas_proj2_prog/(float)total_tarefas_prog_design_proj2) *100.00;
    float porct_tp2dp = (float)((float)tarefas_proj2_design/(float)total_tarefas_prog_design_proj2) *100.00;
    float porct_tp2_total = (float)((float)total_tarefas_prog_design_proj2/(float)total_tarefas_prog_design_proj2) *100.00; //IF
    
    float porct_tp3pd = (float)((float)tarefas_proj3_prog/(float)total_tarefas_prog_design_proj3) *100.00;
    float porct_tp3dp = (float)((float)tarefas_proj2_design/(float)total_tarefas_prog_design_proj3) *100.00;
    float porct_tp3_total = (float)((float)total_tarefas_prog_design_proj3/(float)total_tarefas_prog_design_proj3) *100.00; //IF
    
    float porct_tppd_total = (float)((float)total_tarefas_prog/(float)total_tarefas) *100.00;
    float porct_tpdp_total = (float)((float)total_tarefas_design/(float)total_tarefas) *100.00;
    float porct_tp_total = (float)((float)total_tarefas/(float)total_tarefas) *100.00; // IF
    
    if(tarefas_proj1_prog == 0 && tarefas_proj1_design == 0){
        porct_tp1pd = 0;
        porct_tp1dp = 0;
    }
    if(tarefas_proj2_prog == 0 && tarefas_proj2_design == 0){
        porct_tp2pd = 0;
        porct_tp2dp = 0;
    }
    if(tarefas_proj3_prog == 0 && tarefas_proj3_design == 0){
        porct_tp3pd = 0;
        porct_tp3dp = 0;
    }
    
        //Verificacao totais
    
    if(total_tarefas_prog > 0){
        total_porct_tarefas_prog = 100.00;
    }else{
        total_porct_tarefas_prog = 0.00;
        horas_medio_tarefas_prog = 0;
        minutos_medio_tarefas_design = 0;
    }
    if(total_tarefas_design > 0){
        total_porct_tarefas_desing = 100.00;
    }else{
        total_porct_tarefas_desing = 0.00;
        horas_medio_tarefas_design = 0;
        minutos_medio_tarefas_design = 0;
    }
    if(porct_tp1_total > 0){
        porct_tp1_total = 100.00; 
    }else{
        porct_tp1_total = 0.00;
    }
    if(porct_tp2_total > 0){
        porct_tp2_total = 100.00;
    }else{
        porct_tp2_total = 0.00;
    }
    if(porct_tp3_total > 0){
        porct_tp3_total = 100.00;
    }else{
        porct_tp3_total = 0.00;
    }
   




    printf("\n\n\n\n\
=========================================================| TABELA DE ESTATÍSTICA DA  EQUIPE DE PROGRAMAÇÃO |=========================================================\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                           EQUIPE DE        |  LIVROS  DIGITAIS  |  LEITOR DE TEXTO PARA  |      SISTEMA  DE REGISTRO DE       |                  \n\
                          PROGRAMAÇÃO       |   PARA  CRIANÇAS   |  DEFICIENTES VISUAIS   | PARTICIPAÇÃO EM EVENTOS  CULTURAIS |      TOTAL       \n\
                                            |    ( PROJETO 1 )   |     ( PROJETO 2 )      |            ( PROJETO 3 )           |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                                            |                    |                        |                                    |                  \n\
                      TAREFAS REALIZADAS    |         %.2d                     %.2d                             %.2d                          %.2d \n\
                                            |                    |                        |                                    |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                    PORCENTUAL DAS TAREFAS  |                    |                        |                                    |                  \n\
                           EM CADA          |         %.f%%                    %.f%%                            %.f%%                        %.f%% \n\
                      PROJETO  REALIZADO    |                    |                        |                                    |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                         TEMPO TOTAL        |                    |                        |                                    |                  \n\
                       UTILIZADO  PARA      |        %dh%.2d                   %dh%.2d                           %dh%.2d                        %dh%.2d \n\ 
                        CADA  PROJETO       |                    |                        |                                    |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                         TEMPO MÉDIO        |                    |                        |                                    |                  \n\
                           DE CADA          |        %dh%.2d                   %dh%.2d                           %dh%.2d                        %dh%.2d \n\
                      TAREFA  REALIZADA     |                    |                        |                                    |                  \n\ 
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                        PORCENTUAL DO       |                    |                        |                                    |                  \n\
                    TEMPO TOTAL UTILIZADO   |         %.f%%                    %.f%%                            %.f%%                        %.f%% \n\
                       EM CADA PROJETO      |                    |                        |                                    |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\n", 
              tarefas_proj1_prog, tarefas_proj2_prog, tarefas_proj3_prog, total_tarefas_prog, 
              
              porct_tarefas_proj1_prog, porct_tarefas_proj2_prog, porct_tarefas_proj3_prog, total_porct_tarefas_prog,
              
              horas_tarefas_prog_proj1, minutos_tarefas_prog_proj1,
              horas_tarefas_prog_proj2, minutos_tarefas_prog_proj2,
              horas_tarefas_prog_proj3, minutos_tarefas_prog_proj3,
              horas_total_tarefas_prog, minutos_total_tarefas_prog,
                
              horas_medio_tarefa_prog_proj1, minutos_medio_tarefa_prog_proj1,
              horas_medio_tarefa_prog_proj2, minutos_medio_tarefa_prog_proj2,
              horas_medio_tarefa_prog_proj3, minutos_medio_tarefa_prog_proj3,
              horas_medio_tarefas_prog, (minutos_medio_tarefas_prog * -1),
                
              porct_tempo_proj1_prog, porct_tempo_proj2_prog, porct_tempo_proj3_prog,(tempo_total/ tempo_total) * 100);
    
    printf("\n\n\n\n\
============================================================| TABELA DE ESTATÍSTICA DA  EQUIPE DE DESIGN |===========================================================\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                          EQUIPE  DE        |  LIVROS  DIGITAIS  |  LEITOR DE TEXTO PARA  |      SISTEMA  DE REGISTRO DE       |                  \n\
                            DESIGN          |   PARA  CRIANÇAS   |  DEFICIENTES VISUAIS   | PARTICIPAÇÃO EM EVENTOS  CULTURAIS |      TOTAL       \n\
                                            |    ( PROJETO 1 )   |     ( PROJETO 2 )      |            ( PROJETO 3 )           |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                                            |                    |                        |                                    |                  \n\
                      TAREFAS REALIZADAS    |         %.2d                     %.2d                             %.2d                          %.2d \n\
                                            |                    |                        |                                    |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                    PORCENTUAL DAS TAREFAS  |                    |                        |                                    |                  \n\
                           EM CADA          |         %.f%%                    %.f%%                            %.f%%                        %.f%% \n\
                      PROJETO  REALIZADO    |                    |                        |                                    |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                         TEMPO TOTAL        |                    |                        |                                    |                  \n\
                       UTILIZADO  PARA      |        %dh%.2d                   %dh%.2d                           %dh%.2d                        %dh%.2d \n\ 
                        CADA  PROJETO       |                    |                        |                                    |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                         TEMPO MÉDIO        |                    |                        |                                    |                  \n\
                           DE CADA          |        %dh%.2d                   %dh%.2d                           %dh%.2d                        %dh%.2d \n\
                      TAREFA  REALIZADA     |                    |                        |                                    |                  \n\ 
                   -------------------------------------------------------------------------------------------------------------------------------\n\
                        PORCENTUAL DO       |                    |                        |                                    |                  \n\
                    TEMPO TOTAL UTILIZADO   |         %.f%%                    %.f%%                            %.f%%                        %.f%% \n\
                       EM CADA PROJETO      |                    |                        |                                    |                  \n\
                   -------------------------------------------------------------------------------------------------------------------------------\n\n",
              tarefas_proj1_design, tarefas_proj2_design, tarefas_proj3_design, total_tarefas_design, 
              
              porct_tarefas_proj1_design, porct_tarefas_proj2_design, porct_tarefas_proj3_design, total_porct_tarefas_desing,
              
              horas_tarefas_design_proj1, minutos_tarefas_design_proj1,
              horas_tarefas_design_proj2, minutos_tarefas_design_proj2,
              horas_tarefas_design_proj3, minutos_tarefas_design_proj3,
              horas_total_tarefas_design, minutos_total_tarefas_design,
              
              horas_medio_tarefa_design_proj1, minutos_medio_tarefa_design_proj1,
              horas_medio_tarefa_design_proj2, minutos_medio_tarefa_design_proj2,
              horas_medio_tarefa_design_proj3, minutos_medio_tarefa_design_proj3,
              horas_medio_tarefas_design, (minutos_medio_tarefas_design * -1),
              
              porct_tempo_proj1_design, porct_tempo_proj2_design, porct_tempo_proj3_design, (tempo_total/ tempo_total) * 100); 

printf("\n\n\n\n\
====================================================================| TABELA DE ESTATÍSTICA GERAIS |=================================================================\n\
                                                                                                                                                                     \n\
                                                                                                                                                                     \n\
                                                    ESTATÍSTICAS    |   EQUIPE DE   |  EQUIPE  DE  |   TOTAL  DAS   |\n\
                                                       GERAIS       |  PROGRAMAÇÃO  |    DESIGN    |  DUAS EQUIPES  |\n\ 
                                                ---------------------------------------------------------------------\n\ 
                                                     TEMPO TOTAL    |               |              |                |\n\
                                                    UTILIZADO  NO   |     %.2dh%.2d          %.2dh%.2d            %.2dh%.2d \n\
                                                    ( PROJETO 1 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                     TEMPO TOTAL    |               |              |                |\n\
                                                    UTILIZADO  NO   |     %.2dh%.2d          %.2dh%.2d            %.2dh%.2d \n\
                                                    ( PROJETO 2 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                     TEMPO TOTAL    |               |              |                |\n\
                                                    UTILIZADO  NO   |     %.2dh%.2d          %.2dh%.2d            %.2dh%.2d \n\
                                                    ( PROJETO 3 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                     TEMPO  TOTAL   |               |              |                |\n\
                                                     UTILIZADO EM   |     %.2dh%.2d          %.2dh%.2d            %.2dh%.2d \n\
                                                    TODOS PROJETOS  |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                      TOTAL DE      |               |              |                |\n\
                                                 TAREFAS REALIZADAS |      %.2d              %.2d              %.2d \n\
                                                   ( PROJETO  1 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                      TOTAL DE      |               |              |                |\n\
                                                 TAREFAS REALIZADAS |      %.2d              %.2d              %.2d \n\
                                                   ( PROJETO  2 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                      TOTAL DE      |               |              |                |\n\
                                                 TAREFAS REALIZADAS |      %.2d              %.2d              %.2d \n\
                                                   ( PROJETO  3 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                      TOTAL DE      |               |              |                |\n\
                                                 TAREFAS REALIZADAS |      %.2d              %.2d              %.2d \n\
                                                 EM  TODOS PROJETOS |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                   PORCENTUAL  DAS  |               |              |                |\n\
                                                     TAREFAS  NO    |      %.f%%            %.f%%             %.f%% \n\
                                                    ( PROJETO 1 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                   PORCENTUAL  DAS  |               |              |                |\n\
                                                     TAREFAS  NO    |      %.f%%            %.f%%             %.f%% \n\
                                                    ( PROJETO 2 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                   PORCENTUAL  DAS  |               |              |                |\n\
                                                     TAREFAS  NO    |      %.f%%            %.f%%             %.f%% \n\
                                                    ( PROJETO 3 )   |               |              |                |\n\
                                                ---------------------------------------------------------------------\n\
                                                  PORCENTUAL TOTAL  |               |              |                |\n\
                                                    DAS  TAREFAS    |      %.f%%            %.f%%             %.f%% \n\
                                                     REALIZADAS     |               |              |                |\n\
                                                ---------------------------------------------------------------------",
        horas_tarefas_prog_proj1, minutos_tarefas_prog_proj1,horas_tarefas_design_proj1, minutos_tarefas_design_proj1, horas_tempo_total_proj1, minutos_tempo_total_proj1,
        horas_tarefas_prog_proj2, minutos_tarefas_prog_proj2,horas_tarefas_design_proj2, minutos_tarefas_design_proj2, horas_tempo_total_proj2, minutos_tempo_total_proj2,
        horas_tarefas_prog_proj3, minutos_tarefas_prog_proj3,horas_tarefas_design_proj3, minutos_tarefas_design_proj3, horas_tempo_total_proj3, minutos_tempo_total_proj3,
        horas_total_tarefas_prog, minutos_total_tarefas_prog,horas_total_tarefas_design, minutos_total_tarefas_design, horas_tempo_total, minutos_tempo_total,
        
        tarefas_proj1_prog, tarefas_proj1_design, (tarefas_proj1_prog + tarefas_proj1_design),
        tarefas_proj2_prog, tarefas_proj2_design, (tarefas_proj2_prog + tarefas_proj2_design),
        tarefas_proj3_prog, tarefas_proj3_design, (tarefas_proj3_prog + tarefas_proj3_design),
        total_tarefas_prog, total_tarefas_design, total_tarefas,
        
        porct_tp1pd, porct_tp1dp, porct_tp1_total,
        porct_tp2pd, porct_tp2dp, porct_tp2_total,
        porct_tp3pd, porct_tp3dp, porct_tp3_total,
        porct_tppd_total, porct_tpdp_total, porct_tp_total
        
        );

        printf("\n\n\n                                          _.oo.\n");
        printf("                 _.u[[/;:,.         .odMMMMMM'\n");
        printf("              .o888UU[[[/;:-.  .o@P^    MMM^\n");
        printf("             oN88888UU[[[/;::-.        dP^\n");
        printf("            dNMMNN888UU[[[/;:--.   .o@P^                      End of Code! ;) \n");
        printf("           ,MMMMMMN888UU[[/;::-. o@^\n");
        printf("           NNMMMNN888UU[[[/~.o@P^\n");
        printf("           888888888UU[[[/o@^-..\n");
        printf("          oI8888UU[[[/o@P^:--..\n");
        printf("       .@^  YUU[[[/o@^;::---..\n");
        printf("     oMP     ^/o@P^;:::---..\n");
        printf("  .dMMM    .o@^ ^;::---...\n");
        printf(" dMMMMMMM@^`       `^^^^\n");
        printf("YMMMUP^\n");
        printf(" ^^\n");
        
        printf("\n\tAutores: Eric Napoleao, Gustavo Faria de Oliveira, Eduardo Rodrigues.\n\n");


    return 0;
}
