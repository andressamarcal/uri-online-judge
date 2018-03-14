import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;
 
public class Main {
 
     
    public static void main(String[] args) {
    Locale.setDefault(Locale.US); 
    DecimalFormat df = new DecimalFormat("0.00");
     
    Scanner ler = new Scanner(System.in);
     
    String nome;
    double salario, vendas;
     
    nome = ler.next();
     
    salario = Double.parseDouble(df.format(ler.nextDouble()));
    vendas = Double.parseDouble(df.format(ler.nextDouble()));
     
    System.out.println("TOTAL = R$ "+ df.format(salario + vendas*0.15));
    }
}