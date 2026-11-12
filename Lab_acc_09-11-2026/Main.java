class SmartDevice{
    private String device_name;
    private int deviceId;
    private boolean isOn;

    public void setter(){
        device_name = "Light";
        deviceId = 10;
        isOn = false;
    }

    public void getter(){
        System.out.println("Device Name: " + device_name);
        System.out.println("Device ID: " + deviceId);
    }

    public void turnOn() {
        isOn = true;
    }
    public void turnOff() {
        isOn = false;
    }
    public void displayStatus(){
        if (isOn) {
            System.out.println("Device is on.");
        } else {
            System.out.println("Device is off.");
        }
    }
}

class SmartLight extends SmartDevice {
    private int brightness = 100;


    public void setBrightness(int brightness, boolean isOn) {
        this.brightness = brightness;
        this.isOn = isOn;
        if (isOn) {
            System.out.println("Brightness set to " + brightness);
        }else {
            System.out.println("Light is off. Brightness cannot be set.");
        }    
    }

    public int getBrightness() {
        return brightness;
    }

    @Override
    public void displayInfo() { 
        System.out.println("Brightness: " + brightness);
    }
}

public class Main {
    public static void main(String[] args) {
    SmartLight sd = new SmartLight();
    sd.displayStatus();
    sd.displayInfo();
    }
}



