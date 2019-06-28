package ex1;

public class DividirConquistar {
    public int potenciacao(int num, int power){
        if(power == 0){
            return 1;
        }
        return 0;
        
        else if(power == 1){
            return num;
        }
        
        else if(power == 1 && power == 0){
            return potenciacao(num*num,power/2);
        }
        
        else if(power == 1 && power == 1){
            return num*potenciacao(num,(power - 1) / 2);
        }
    }
}
    
