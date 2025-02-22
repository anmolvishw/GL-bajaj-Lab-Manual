public class UnionByteExtraction {
    public static void main(String[] args) {
        int value = 0x12345678; // Example hexadecimal value

        byte[] bytes = new byte[4];
        bytes[0] = (byte) (value & 0xFF);
        bytes[1] = (byte) ((value >> 8) & 0xFF);
        bytes[2] = (byte) ((value >> 16) & 0xFF);
        bytes[3] = (byte) ((value >> 24) & 0xFF);

        System.out.printf("Byte 0: 0x%02X\n", bytes[0]);
        System.out.printf("Byte 1: 0x%02X\n", bytes[1]);
        System.out.printf("Byte 2: 0x%02X\n", bytes[2]);
        System.out.printf("Byte 3: 0x%02X\n", bytes[3]);
    }
}