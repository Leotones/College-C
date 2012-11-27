int main()

{
    //real sera baseado na cotacao em euros para reais;

        float real[30];
        float euro[30];
        int max=0,min=0;
        float media=0,i=0;

    //periodo de cotacao do dia 15/10 a 23/11, periodo disponivel no site para completar 30 dias;
    //cotacao pode ser encontrada em http://economia.uol.com.br/cotacoes/cambio/euro-uniao-europeia-historico.jhtm;

        euro[30] = { 2,6995	, 2,7085 , 2,6906 , 2,6653 , 2,6636 , 2,6510 , 2,6368 ,	2,6324 , 2,6136 , 2,6071 , 2,6000 ,	\
        	2,6004 , 2,5953	, 2,6032 , 2,6020 ,	2,6049	, 2,6275 , 2,6304 ,	2,6305 , 2,6234 , 2,6213 , 2,6182 ,	\
        	2,6254 , 2,6304 , 2,6425 , 2,6388 ,	2,6466 , 2,6640	, 2,6623 , 2,6347 };

        max=euro[0];
        min=euro[0];
        media=euro[0];

         for ( i=0 ; i<30; i++)
    {
        max = max(max,euro[i]);
        min = min(min,euro[i]);
        media += euro[i];
    }

    media = (float(min)/5);
}
