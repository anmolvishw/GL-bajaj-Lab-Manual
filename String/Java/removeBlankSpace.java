public class removeBlankSpace {
    public static void main(String[] args) {
        String str = "Hello World";
        int count = 0;
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) != ' ') {
                result.append(str.charAt(i));
                count++;
            }
        }

        System.out.println(result.toString());
        System.out.println("No of characters: " + count);
    }
}