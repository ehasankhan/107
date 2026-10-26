import java.util.Scanner;

class RentalVehicle {
    int vehicleId;
    String brand;
    String vehicleType;
    double dailyRate;
    boolean available;

    int rentVehicle(int days) {
        if (available) {
            available = false;
            return days * (int) dailyRate;
        } else {
            System.out.println("Vehicle is not available for rent.");
            return 0;
        }
    }
    int returnVehicle() {
        if (!available) {
            available = true;
            return 0;
        } else {
            System.out.println("Vehicle was not rented.");
            return 0;
        }
    }

    int calculateRentalCost(int days) {
        return days * (int) dailyRate;
    }

    int applyDiscount(int cost, int discountPercentage) {
        return cost - (cost * discountPercentage / 100);
    }
    void displayVehicleInfo() {
        System.out.println("Vehicle ID: " + vehicleId);
        System.out.println("Brand: " + brand);
        System.out.println("Type: " + vehicleType);
        System.out.println("Daily Rate: $" + dailyRate);
        System.out.println("Available: " + available);
    }
}

public class Test {
    public static void main(String[] args) {

        RentalVehicle vehicle = new RentalVehicle();

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter vehicle ID: ");
        vehicle.vehicleId = scanner.nextInt();
        System.out.print("Enter vehicle brand: ");
        vehicle.brand = scanner.next();
        System.out.print("Enter vehicle type: ");
        vehicle.vehicleType = scanner.next();
        System.out.print("Enter daily rate: ");
        vehicle.dailyRate = scanner.nextDouble();
        System.out.print("Enter availability (true/false): ");
        vehicle.available = scanner.nextBoolean();

        vehicle.displayVehicleInfo();

    }
}