import java.util.Arrays;
import java.util.Comparator;

class Hotel {
    String name;
    String address;
    int grade;
    float roomCharge;
    int numberOfRooms;

    Hotel(String name, String address, int grade, float roomCharge, int numberOfRooms) {
        this.name = name;
        this.address = address;
        this.grade = grade;
        this.roomCharge = roomCharge;
        this.numberOfRooms = numberOfRooms;
    }
}

public class struct1 {
    public static void printHotelsByGrade(Hotel[] hotels, int count, int grade) {
        Hotel[] sortedHotels = Arrays.stream(hotels)
                                     .filter(hotel -> hotel.grade == grade)
                                     .sorted(Comparator.comparingDouble(hotel -> hotel.roomCharge))
                                     .toArray(Hotel[]::new);

        // Print sorted hotels
        for (Hotel hotel : sortedHotels) {
            System.out.println("Name: " + hotel.name);
            System.out.println("Address: " + hotel.address);
            System.out.println("Grade: " + hotel.grade);
            System.out.println("Room Charge: " + hotel.roomCharge);
            System.out.println("Number of Rooms: " + hotel.numberOfRooms);
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Hotel[] hotels = {
            new Hotel("Hotel A", "123 Street", 3, 150.0f, 50),
            new Hotel("Hotel B", "456 Avenue", 3, 120.0f, 30),
            new Hotel("Hotel C", "789 Boulevard", 4, 200.0f, 40),
            new Hotel("Hotel D", "101 Road", 3, 180.0f, 20)
        };

        int gradeToPrint = 3;
        printHotelsByGrade(hotels, hotels.length, gradeToPrint);
    }
}