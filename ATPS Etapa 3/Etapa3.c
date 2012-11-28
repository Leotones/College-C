#include <math.h>
#include <stdio.h>

int main()

{
    //real sera baseado na cotacao em euros para reais


        int i=0;
        float max=0,min=0,media=0;

    //periodo de cotacao do dia 15/10 a 23/11, periodo disponivel no site para completar 30 dias
    //cotacao pode ser encontrada em http://economia.uol.com.br/cotacoes/cambio/euro-uniao-europeia-historico.jhtm

        float euro [30] = { 2.6995 , 2.7085 , 2.6906 , 2.6653 , 2.6636 , 2.6510 , 2.6368 ,	2.6324 , 2.6136 , 2.6071 , 2.6000 ,	\
        	2.6004 , 2.5953	, 2.6032 , 2.6020 ,	2.6049	, 2.6275 , 2.6304 ,	2.6305 , 2.6234 , 2.6213 , 2.6182 ,	\
        	2.6254 , 2.6304 , 2.6425 , 2.6388 ,	2.6466 , 2.6640	, 2.6623 , 2.6347 };

        max=euro[0];
        min=euro[0];
        media=euro[0];

         for ( i=0 ; i<30; i++)
            {
                if (euro[i] > max)

                    {
                        max = euro[i];
                    }

                else if (euro[i] < min)

                    {
                        min = euro[i];
                    }

            }

        for (i=0 ; i<30; i++)
            {
                 media = (euro[i]+media);
            }

            media = media/30;

        printf ("Valor maximo do Euro : %f\n", max);
        printf ("Valor minimo do Euro : %f\n", min);
        printf ("Valor medio do Euro : %f\n\n",media);


    //inicializacao da cotacao do dolar
    //valores do dolar feita sobre a cotacao vista em http://economia.uol.com.br/cotacoes/cambio/dolar-comercial-estados-unidos-historico.jhtm
    //periodo de cotacao do dia 26/11 a 11/10

        float dolar [30] = { 2.0818 , 2.0812 , 2.0977 ,	2.0944 , 2.0805 , 2.0810 , 2.0811 , 2.0645 , 2.0685 , 2.0500 , 2.0464 , 2.0379 , 2.0331 , 2.0312 , 2.0335 , \
        	2.0306 , 2.0297 , 2.0295 , 2.0320 ,	2.0258 , 2.0240 , 2.0245 , 2.0265 , 2.0244 , 2.0272 , 2.0260 , 2.0300 , 2.0341 , 2.0340 , 2.0404 };

        max=dolar[0];
        min=dolar[0];
        media=dolar[0];

         for ( i=0 ; i<30; i++)
            {
                if (dolar[i] > max)

                    {
                        max = dolar[i];
                    }

                else if (dolar[i] < min)

                    {
                        min = dolar[i];
                    }

            media = (dolar[i]+media);
            }

        media = media/30;

        printf ("Valor maximo do Dolar : %f\n", max);
        printf ("Valor minimo do Dolar : %f\n", min);
        printf ("Valor medio do Dolar : %f\n\n",media);


        //inicializacao da cotacao de libras esterlinas
    //valores da libra feita sobre a cotacao vista em http://economia.uol.com.br/cotacoes/cambio/libra-esterlina-reino-unido-historico.jhtm
    //periodo de cotacao do dia 26/11 a 16/10

        float libra [30] = { 3.3324,3.3368,3.3534,3.3461,3.3114,3.3073,3.3080,3.2736,3.2741,3.2653,3.2565,3.2528,3.2602,3.2506,3.2497, \
        3.2501,3.2521,3.2738,3.2758,3.2622,3.2591,3.2608,3.2631,3.2471,3.2321,3.2397,3.2428,3.2495,3.2787,3.2823
 };

        max=libra[0];
        min=libra[0];
        media=libra[0];

         for ( i=0 ; i<30; i++)
            {
                if (libra[i] > max)

                    {
                        max = libra[i];
                    }

                else if (libra[i] < min)

                    {
                        min = libra[i];
                    }

            media = (libra[i]+media);
            }

        media = media/30;

        printf ("Valor maximo do Libra Esterlina : %f\n", max);
        printf ("Valor minimo do Libra Esterlina : %f\n", min);
        printf ("Valor medio do Libra Esterlina : %f\n",media);


return (0);


}
