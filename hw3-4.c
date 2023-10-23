
#include <stdio.h>
main()
{
    int Answer[4],Guess[4] , game=1, An, G, A=0, B=0;
    scanf("%d", &An);
    for(int i=3; i>=0; i--){
    Answer[i]=An%10;
    An/=10;
    }
    while (game==1){
        scanf("%d", &G);
        if (G==0){
            game=0;
            break;
        }
        else{
        for(int i=3; i>=0; i--){
            Guess[i]=G%10;
            G/=10;
        }

        for (int i=0; i<4; i++){
            for (int j=0; j<4; j++){
                if(Guess[i]==Answer[j])
                if (i==j)
                    A++;
                else
                    B++;
        }
        }
        printf("%dA%dB \n", A,B);
        }
    }
}
