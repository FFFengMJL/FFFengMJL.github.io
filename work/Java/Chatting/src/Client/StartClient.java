package Client;

import java.io.IOException;

public class StartClient {
    public static void main(String[] args) throws IOException {
        Client test = new Client(2333);
        test.run();
    }
}