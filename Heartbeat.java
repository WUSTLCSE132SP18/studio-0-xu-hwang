
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int sec = 0;
		while(true) {
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			sec++;
			System.out.println(sec + " sec has elapsed.");
		}
	}

}
