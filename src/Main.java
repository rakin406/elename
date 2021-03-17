import java.util.Scanner;
import java.util.ArrayList;

public class Main extends Elements {
    static void printElements(ArrayList<String> arr) {
        for (String elem : arr) {
            if (elem == arr.get(arr.size() - 1)) {
                System.out.print(elem + "\n");
            } else {
                System.out.print(elem + ", ");
            }
        }
    }

    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        ArrayList<String> elementsInWord = new ArrayList<>();

        while (true) {
            System.out.print(">> ");
            String word = reader.next();
            if (word.isEmpty()) {
                reader.close();
            }

            elements.entrySet().forEach(entry-> {
                if (word.toLowerCase().contains(entry.getKey())) {
                    elementsInWord.add(entry.getValue());
                }
            });

            elementsInWord.sort(String::compareToIgnoreCase);
            printElements(elementsInWord);
            elementsInWord.clear();
        }
    }
}
