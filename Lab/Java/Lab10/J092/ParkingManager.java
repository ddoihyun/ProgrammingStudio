import java.text.SimpleDateFormat;
import java.util.*;

public class ParkingManager {
    private HashMap<String, ParkingInfo> map = new HashMap<>();
    private Scanner sc = new Scanner(System.in);
    private SimpleDateFormat sdf = new SimpleDateFormat("yyyyMMdd HHmm");

    public void start() {
        while (true) {
            System.out.print("1) enter, 2) exit, 3) list 4) quit > ");
            String choice = sc.nextLine().trim();

            switch (choice) {
                case "1":  // enter
                    doEnter();
                    break;
                case "2":  // exit
                    doExit();
                    break;
                case "3":  // list
                    doList();
                    break;
                case "4":  // quit
                    // System.out.println("프로그램을 종료합니다.");
                    return;
                default:
                    System.out.println("잘못된 선택입니다. 1~4 중 하나를 입력하세요.");
            }
        }
    }

    private void doEnter() {
        System.out.print("Enter number, type > ");
        String line = sc.nextLine().trim();

        String[] parts = line.split("\\s+");
        if (parts.length < 2) {
            System.out.println("입력 형식이 잘못되었습니다. 예: 3131 avante");
            return;
        }
        String carNum = parts[0];
        String type = parts[1];

        // 이미 같은 차번이 있으면 중복 처리
        if (map.containsKey(carNum)) {
            System.out.println(carNum + " 차량은 이미 입차돼 있습니다.");
            return;
        }

        Date now = new Date();  // 현재 시각
        ParkingInfo info = new ParkingInfo(carNum, type, now);
        map.put(carNum, info);
    }

    private void doExit() {
        System.out.print("Enter car number to exit > ");
        String carNum = sc.nextLine().trim();

        ParkingInfo info = map.get(carNum);
        if (info == null) {
            System.out.println(carNum + " 차량이 주차장에 없습니다.");
            return;
        }

        Date now = new Date();
        Date entryTime = info.getEntryTime();

        long diffMillis = now.getTime() - entryTime.getTime();
        long diffMinutes = diffMillis / (1000 * 60);

        long fee;
        if (diffMinutes < 10) {
            fee = 0;
        } else {
            fee = (diffMinutes / 10) * 500;
        }
    
        String currentTimeStr = sdf.format(now);
        System.out.printf(
            "%s %s %dmin, Parking fee %d (current time %s)%n",
            info.getCarNum(),
            info.getType(),
            diffMinutes,
            fee,
            currentTimeStr
        );

        map.remove(carNum);
    }

    private void doList() {
        System.out.println("====================================");
        System.out.printf("%-5s %-8s %-13s%n", "num", "type", "time");

        int idx = 1;
        for (Map.Entry<String, ParkingInfo> entry : map.entrySet()) {
            ParkingInfo info = entry.getValue();
            String timeStr = sdf.format(info.getEntryTime());
            System.out.printf(
                "[%d] %-4s   %-7s %s%n",
                idx++,
                info.getCarNum(),
                info.getType(),
                timeStr
            );
        }
    }
}
