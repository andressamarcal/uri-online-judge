import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int a = leitor.nextInt();
        int b = leitor.nextInt();
        int c = leitor.nextInt();
        //ler os valores e após fazer testes para colocá-los em ordem crescente
        if ((a<b) && (b<c)){
            System.out.println("" + a);
            System.out.println("" + b);
            System.out.println("" + c);
            
        }else
            if ((a<c) && (c<b)){
                System.out.println("" + a);
                System.out.println("" + c);
                System.out.println("" + b);
            }else
                if ((b<a)&&(a<c)) {
                    System.out.println("" + b);
                    System.out.println("" + a);
                    System.out.println("" + c);
                }else
                    if ((b<c) && (c<a)) {
                        System.out.println(""+ b);
                        System.out.println("" + c);
                        System.out.println("" + a);
                    }else
                        if ((c<a)&&(a<b)) {
                            System.out.println("" + c);
                            System.out.println("" + a);
                            System.out.println("" + b);
                        }else
                            if ((c<b)&&(c<a)) {
                                System.out.println(""+ c);
                                System.out.println(""+ b);
                                System.out.println("" + a);
                            }System.out.println();
                //imprimir a linha em branco
                System.out.println("" + a);
                System.out.println("" + b);
                System.out.println("" + c);
                //imprimir os valores na ordem que foram lidos
    }
      
}