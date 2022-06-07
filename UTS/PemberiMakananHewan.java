package Com.UTS;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class PemberiMakananHewan {
    public static void menu(){
        System.out.println("Program pemberi makan hewan");
        System.out.println("1. Menambahkan Hewan");
        System.out.println("2. Memberi Makan");
        System.out.println("3. Memberi Minum");
        System.out.println("4. Exit");
    }
    public static void main(String[] args){
        List<Hewan> Peliharaan = new ArrayList<>();
        Scanner input = new Scanner(System.in);
        while(true){
            menu();
            System.out.print("Masukan Pilihan Menu = ");
            int user_input = input.nextInt();
            if(user_input == 1){
                Hewan Name =  new Hewan();
                input.nextLine();
                System.out.print("Masukan Nama Hewan =");
                Name.setNama(input.nextLine());
                System.out.print("Masukan Jenis Hewan =");
                Name.setJenis(input.nextLine());
                Peliharaan.add(Name);
            }
            else if(user_input == 2){
                Integer count = 1;
                System.out.println("Peliharaan Yang Terdaftar:");
                for(Object obj: Peliharaan){
                    Hewan Check = (Hewan) obj;
                    System.out.println(count.toString() +". " +Check.nama);
                    count++;
                }
                System.out.println("Masukan Nomor Peliharaan yang ingin diberi makan:");
                int id = input.nextInt();
                if(id>=count || count<0){
                    System.out.println("\nData Hewan Tidak Valid");
                }
                else {
                    Peliharaan.get(id - 1).BeriMakan();
                }
            }
            else if(user_input == 3){
                Integer count = 1;
                System.out.println("Peliharaan Yang Terdaftar:");
                for(Object obj: Peliharaan){
                    Hewan Check = (Hewan) obj;
                    System.out.println(count.toString() +". " +Check.nama);
                    count++;
                }
                System.out.println("Masukan Nomor Peliharaan yang ingin diberi minum:");
                int id = input.nextInt();
                if(id>=count || count<0){
                    System.out.println("\nData Hewan Tidak Valid");
                }
                else {
                    Peliharaan.get(id - 1).BeriMinum();
                }
            }
            else if(user_input == 4){
                break;
            }
            else{
                System.out.println("Masukan Tidak Valid");
            }
            System.out.println("");
        }

    }
}
