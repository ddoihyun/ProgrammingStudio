import java.util.Date;

public class ParkingInfo {
    private String carNum;
    private String type;
    private Date entryTime;

    public ParkingInfo(String carNum, String type, Date entryTime) {
        this.carNum = carNum;
        this.type = type;
        this.entryTime = entryTime;
    }

    public String getCarNum() {
        return carNum;
    }

    public String getType() {
        return type;
    }

    public Date getEntryTime() {
        return entryTime;
    }
}
