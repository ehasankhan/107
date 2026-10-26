import java.util.Scanner;

class MovieShow {
    String movieName;
    String showTime;
    double ticketPrice;
    int totalSeats;
    int bookedSeats;
    public  MovieShow(){
        movieName = "Salar";
        showTime = "6.30";
        ticketPrice = 20;
        totalSeats = 200 ;
        bookedSeats = 0;
    }
    public MovieShow(String movieName, String showTime, double ticketPrice, int totalSeats, int bookedSeats) {
        this.movieName = movieName;
        this.showTime = showTime;
        this.ticketPrice = ticketPrice;
        this.totalSeats = totalSeats;
        this.bookedSeats = bookedSeats;
    }

    void bookTickets(int quantity) {
        if (quantity >0 && quantity <= totalSeats-bookedSeats) {
            bookedSeats = bookedSeats + quantity;
        }
    }

    void cancleTicket(int quantity){
        if (quantity >0 && quantity < bookedSeats) {
            bookedSeats = bookedSeats - quantity;
        }
    }
    double calculateRevenue(){
        return bookedSeats * ticketPrice;
    }

    int calculateAvilableSeats(){
        return totalSeats -bookedSeats;
    }

    void display(){
            System.out.println("Movie Name " + movieName);
            System.out.println("Show Time " + showTime);
    }
}

public class lab_test {
    public static void main(String[] args) {
        MovieShow mshowDefults = new MovieShow();
        
        Scanner input = new Scanner(System.in);
        System.out.println("Enter The Movie Name :- ");
        String movieName = input.next(); 

        System.out.println("Enter The Movie Show Time :- ");
        String showTime = input.next();

        System.out.println("Enter The ticketPrice Price :- ");
        Double ticketPrice = input.nextDouble();

        System.out.println("Enter The Total Seats :- ");
        int totalSeats = input.nextInt();

        System.out.println("Enter The Total Book Seats :- ");
        int bookedSeats = input.nextInt();

        MovieShow mshow = new MovieShow(movieName, showTime, ticketPrice, totalSeats, bookedSeats);

        mshow.bookTickets(mshow.bookedSeats);
        mshow.cancleTicket(mshow.bookedSeats);
        mshow.calculateRevenue();
        mshow.calculateAvilableSeats();
        mshow.display();  
        mshowDefults.display();              
    }
}
