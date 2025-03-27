#include <stdio.h>

main(){

    printf("### Desafio Super Trunfo - Mestre! ###\n");
    
    //Atributos da cidade 1
        int populacao1 = 12325000;
        float area1 = 1521.11;
        float pib1 = 699.28;
        int npt1 = 50;
        char nome1[50] = "Sao Paulo";
        float DensidadePop1 = 8102.47;
        float PIBperCap1 = 56724.32;
    
    
    //Atributo cidade 2
        int populacao2 = 6748000;
        float area2 = 1200.25;
        float pib2 = 300.50;
        int npt2 = 30;
        char nome2[50] = "Rio de Janeiro";
        float DensidadePop2 = 5622.24;
        float PIBperCap2 = 44532.91;



    int opcao;
    printf("Selecione uma opcao\n");
    printf("1. Comparar 2 atributos\n");
    printf("2. Visualizar cartas\n");
    printf("3. Sair do jogo\n");
        scanf("%d", &opcao);

    switch (opcao){
        int atributo1, atributo2;
        case 1:

        
            printf("Selecione o primeiro atributo\n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. PIB\n");
            printf("4. Numero de pontos turisticos\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per capita\n");
                scanf("%d", &atributo1);

            printf("Selecione o segundo atributo\n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. PIB\n");
            printf("4. Numero de pontos turisticos\n");
            printf("5. Densidade populacional\n");
            printf("6. PIB per capita\n");
                scanf("%d", &atributo2);


            

            if(atributo1 == atributo2){

                printf("Atributos iguais. Por favor, selecione opcoes diferentes para os atributos\n");
            
            }else if((atributo1 < 1 || atributo1 > 6) || (atributo2 < 1 || atributo2 >6)){
                printf("Opcoes para atributos invalidos. Por favor, selecione opcoes validas para os atributos.\n");
            }else if(atributo1 == 1){
                printf("Atributo escolhido -> Populacao\n");
                printf("XXX Resultado da primeita disputa XXX\n");

                int luta1 = populacao1 > populacao2 ? 1 : 0;
                if(luta1 == 1){
                    printf("Carta 1 venceu!\n");
                } else if(luta1 == 0){
                    printf("Carta 2 venceu!\n");
                } else {
                    printf("Empate.\n");
                }

                if(atributo2 == 2){
                    printf("Atributo escolhido -> Area\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                   int luta1 = area1 > area2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if(atributo2 == 3){
                    printf("Atributo escolhido -> PIB\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = pib1 > pib2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if(atributo2 == 4){
                    printf("Atributo escolhido -> Numero de pontos turisticos\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = npt1 > npt2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if(atributo2 == 5){
                    printf("Atributo escolhido -> Densidade populacional\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = DensidadePop1 > DensidadePop2 ? 0 : 1;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }

                } else if(atributo2 == 6){
                    printf("Atributo escolhido -> PIB per capita\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = PIBperCap1 > PIBperCap2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else {
                    printf("Opcao de atributo invalida.");
                }
            } else if(atributo1 == 2){
                printf("Atributo escolhido -> Area\n");
                printf("XXX Resultado da primeira disputa XXX\n");

                int luta1 = area1 > area2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                if(atributo2 == 1){
                    printf("Atributo escolhido -> Populacao\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = populacao1 > populacao2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if(atributo2 == 3){
                    printf("Atributo escolhido -> PIB\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = pib1 > pib2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if(atributo2 == 4){
                    printf("Atributo escolhido -> Numero de pontos turisticos\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = npt1 > npt2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if(atributo2 == 5){
                    printf("Atributo escolhido -> Densidade populacional\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = DensidadePop1 > DensidadePop2 ? 0 : 1;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if(atributo2 == 6){
                    printf("Atributo escolhido -> PIB per capita\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = PIBperCap1 > PIBperCap2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                }      
            } else if(atributo1 == 3){
                printf("Atributo escolhido -> PIB\n");
                printf("XXX Resultado da segunda disputa XXX\n");

                int luta1 = pib1 > pib2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }

                if(atributo2 == 1){
                    printf("Atributo escolhido -> Populacao\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = populacao1 > populacao2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if(atributo2 == 2){
                    printf("Atributo escolhido -> Area\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                   int luta1 = area1 > area2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if (atributo2 == 4){
                    printf("Atributo escolhido -> Numero de pontos turisticos\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = npt1 > npt2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if (atributo2 == 5){
                    printf("Atributo escolhido -> Densidade populacional\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = DensidadePop1 > DensidadePop2 ? 0 : 1;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                } else if (atributo2 == 6){
                    printf("Atributo escolhido -> PIB per capita\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = PIBperCap1 > PIBperCap2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                }
            } else if(atributo1 == 4){
                printf("Atributo escolhido -> Numero de pontos turisticos\n");
                    printf("XXX Resultado da primeiro disputa XXX\n");

                    int luta1 = npt1 > npt2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }

                    if(atributo2 == 1){
                        printf("Atributo escolhido -> Populacao\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = populacao1 > populacao2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                    } else if (atributo2 == 2){
                        printf("Atributo escolhido -> Area\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                   int luta1 = area1 > area2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                    } else if (atributo2 == 3){
                        printf("Atributo escolhido -> PIB\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = pib1 > pib2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!");
                    } else {
                        printf("Empate.");
                    }
                    
                    } else if (atributo2 == 5){
                        printf("Atributo escolhido -> Densidade populacional\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = DensidadePop1 > DensidadePop2 ? 0 : 1;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!\n");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!\n");
                    } else {
                        printf("Empate.\n");
                    }
                    } else if (atributo2 == 6){
                        printf("Atributo escolhido -> PIB per capita\n");
                    printf("XXX Resultado da segunda disputa XXX\n");

                    int luta1 = PIBperCap1 > PIBperCap2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!\n");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!\n");
                    } else {
                        printf("Empate.\n");
                    }
                    }
            } else if (atributo1 == 5){
                printf("Atributo escolhido -> Densidade Populacional\n");
                    printf("XXX Resultado da primeiro disputa XXX\n");

                    int luta1 = DensidadePop1 > DensidadePop2 ? 1 : 0;
                    if(luta1 == 1){
                        printf("Carta 1 venceu!\n");
                    } else if(luta1 == 0){
                        printf("Carta 2 venceu!\n");
                    } else {
                        printf("Empate.\n");
                    }
                    if(atributo2 == 1){
                        printf("Atributo escolhido -> Populacao\n");
                        printf("XXX Resultado da segunda disputa XXX\n");

                        int luta1 = populacao1 > populacao2 ? 1 : 0;
                        if(luta1 == 1){
                            printf("Carta 1 venceu!\n");
                        } else if(luta1 == 0){
                            printf("Carta 2 venceu!\n");
                        } else {
                            printf("Empate.\n");
                        }
                    } else if (atributo2 == 2){
                        printf("Atributo escolhido -> Area\n");
                        printf("XXX Resultado da segunda disputa XXX\n");

                        int luta1 = area1 > area2 ? 1 : 0;
                        if(luta1 == 1){
                            printf("Carta 1 venceu!\n");
                        } else if(luta1 == 0){
                            printf("Carta 2 venceu!\n");
                        } else {
                            printf("Empate.\n");
                        }
                    } else if (atributo2 == 3){
                        printf("Atributo escolhido -> PIB\n");
                        printf("XXX Resultado da segunda disputa XXX\n");

                        int luta1 = pib1 > pib2 ? 1 : 0;
                        if(luta1 == 1){
                            printf("Carta 1 venceu!\n");
                        } else if(luta1 == 0){
                            printf("Carta 2 venceu!\n");
                        } else {
                            printf("Empate.\n");
                        }
                    } else if (atributo2 == 4){
                        printf("Atributo escolhido -> Numero de pontos turisticos\n");
                        printf("XXX Resultado da segunda disputa XXX\n");

                        int luta1 = npt1 > npt2 ? 1 : 0;
                        if(luta1 == 1){
                            printf("Carta 1 venceu!\n");
                        } else if(luta1 == 0){
                            printf("Carta 2 venceu!\n");
                        } else {
                            printf("Empate.\n");
                        }
                    } else if (atributo2 == 6){
                        printf("Atributo escolhido -> PIB per capita\n");
                        printf("XXX Resultado da segunda disputa XXX\n");

                        int luta1 = PIBperCap1 > PIBperCap2 ? 1 : 0;
                        if(luta1 == 1){
                            printf("Carta 1 venceu!\n");
                        } else if(luta1 == 0){
                            printf("Carta 2 venceu!\n");
                        } else {
                            printf("Empate.\n");
                        }
                    }
                    } else if (atributo1 == 6){
                        printf("Atributo escolhido -> PIB per capita\n");
                        printf("XXX Resultado da segunda disputa XXX\n");

                        int luta1 = PIBperCap1 > PIBperCap2 ? 1 : 0;
                        if(luta1 == 1){
                            printf("Carta 1 venceu!\n");
                        } else if(luta1 == 0){
                            printf("Carta 2 venceu!\n");
                        } else {
                            printf("Empate.\n");
                        }
                        if(atributo2 == 1){
                            printf("Atributo escolhido -> Populacao\n");
                            printf("XXX Resultado da segunda disputa XXX\n");

                            int luta1 = populacao1 > populacao2 ? 1 : 0;
                            if(luta1 == 1){
                                printf("Carta 1 venceu!\n");
                            } else if(luta1 == 0){
                                printf("Carta 2 venceu!\n");
                            } else {
                                printf("Empate.\n");
                            }
                        } else if (atributo2 == 2){
                            printf("Atributo escolhido -> Area\n");
                            printf("XXX Resultado da segunda disputa XXX\n");

                            int luta1 = area1 > area2 ? 1 : 0;
                            if(luta1 == 1){
                                printf("Carta 1 venceu!\n");
                            } else if(luta1 == 0){
                                printf("Carta 2 venceu!\n");
                            } else {
                                printf("Empate.\n");
                            }
                        } else if (atributo2 == 3){
                            printf("Atributo escolhido -> PIB\n");
                            printf("XXX Resultado da segunda disputa XXX\n");

                            int luta1 = pib1 > pib2 ? 1 : 0;
                            if(luta1 == 1){
                                printf("Carta 1 venceu!\n");
                            } else if(luta1 == 0){
                                printf("Carta 2 venceu!\n");
                            } else {
                                printf("Empate.\n");
                            }
                        } else if (atributo2 == 4){
                            printf("Atributo escolhido -> Numero de pontos turisticos\n");
                            printf("XXX Resultado da segunda disputa XXX\n");

                            int luta1 = npt1 > npt2 ? 1 : 0;
                            if(luta1 == 1){
                                printf("Carta 1 venceu!\n");
                            } else if(luta1 == 0){
                                printf("Carta 2 venceu!\n");
                            } else {
                                printf("Empate.\n");
                            }
                        } else if (atributo2 == 5){
                            printf("Atributo escolhido -> Densidade populacional\n");
                            printf("XXX Resultado da segunda disputa XXX\n");

                            int luta1 = DensidadePop1 > DensidadePop2 ? 0 : 1;
                            if(luta1 == 1){
                                printf("Carta 1 venceu!\n");
                            } else if(luta1 == 0){
                                printf("Carta 2 venceu!\n");
                            } else {
                                printf("Empate.\n");
                            }
                        }
                    }
            
            
            
                    break;
                    
                    case 2:
                    printf("Carta 1: \n");
                    printf("Estado: %s\n", estado1);
                    printf("Codigo da carta: %s\n", codCarta1);
                    printf("Nome da cidade: %s\n", nome1);
                    printf("Populacao da cidade: %d\n", populacao1);
                    printf("Area da cidade: %.3f km2\n", area1);
                    printf("PIB da cidade: %.3f bilhoes de reais\n", pib1);
                    printf("Numero de pontos turisticos da cidade: %d\n", npt1);
                    printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePop1);
                    printf("PIB per Capita: %.2f reais \n", PIBperCap1);
        
                    printf("----------------------------------------------------\n");
        
                    printf("Carta 2: \n");
                    printf("Estado: %s\n", estado2);
                    printf("Codigo da carta: %s\n", codCarta2);
                    printf("Nome da cidade: %s\n", nome2);
                    printf("Populacao da cidade: %d\n", populacao2);
                    printf("Area da cidade: %.3f km2\n", area2);
                    printf("PIB da cidade: %.3f bilhoes de reais\n", pib2);
                    printf("Numero de pontos turisticos da cidade: %d\n", npt2);
                    printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePop2);
                    printf("PIB per Capita: %.2f reais \n", PIBperCap2);
        
                    printf("----------------------------------------------------\n");
                    break;

                    case 3:
                        printf("Saindo do jogo...")
                    break;
                }
        
       


        
    
    return 0;
}