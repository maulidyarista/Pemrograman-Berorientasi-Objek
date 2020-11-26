package pbo_3_inherite;

public class main {

    public static void main(String[] args) {
        //Deklarasi Tim
        Tim Avengers = new Tim("Avengers");
        
        //Deklarasi Member
        Member orang_1 = new Member("Chris Evans", 20);
        Member orang_2 = new Member("Chris Hemsworth", 23);
        Member orang_3 = new Member("Robert Downey Jr", 22);
        
        //Deklarasi Trainee
        Member orang_4 = new Trainee("Mark Ruffalo", 26, 8);
        Member orang_5 = new Trainee("Tom Holland", 21, 10);
        Member orang_6 = new Trainee("Benedict Cumberbatch", 30, 12);
        
        //Menambahkan data pada ArrayList
        Avengers.addMember(orang_1);
        Avengers.addMember(orang_2);
        Avengers.addMember(orang_3);
        Avengers.addMember(orang_4);
        Avengers.addMember(orang_5);
        Avengers.addMember(orang_6);
        
        //Output
        Avengers.displayFullMember();
        Avengers.displayTrainee();
    }
    
}
