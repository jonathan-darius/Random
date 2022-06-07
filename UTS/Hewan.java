package Com.UTS;

public class Hewan {
    String nama;
    String jenis;

    void setNama(String _nama){
        nama = _nama;
    }
    void setJenis(String _jenis){
        jenis = _jenis;
    }

    void BeriMakan(){
        System.out.println("\nMemberi makan "+jenis+" dengan nama "+nama);
    }
    void BeriMinum(){
        System.out.println("\nMemberi minum "+jenis+" dengan nama "+nama);
    }

}
