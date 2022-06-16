class Main {
    public static void main(String[] args) {

        // create an array
        int[] age = {12, 4, 5, 2, 5};

        // access each array elements
        System.out.println("Accessing Elements of Array:");
        System.out.println("First Element: " + age[0]);
        System.out.println("Second Element: " + age[1]);
        System.out.println("Third Element: " + age[2]);
        System.out.println("Fourth Element: " + age[3]);
        System.out.println("Fifth Element: " + age[4]);
        System.out.println(" ");
        for(int i = 0; i < age.length; i++) {
            System.out.println(age[i]);
        }
        System.out.println(" ");
        for(int a: age) {
            System.out.println(a);
        }
        System.out.println(" ");
        
        int[] numbers = {2, -9, 0, 5, 12, -25, 22, 9, 8, 12};
        int sum = 0;
        Double average;

        for(int number: numbers) {
            sum += number;
        }

        int arrayLength = numbers.length;

        average = ((double)sum / (double)arrayLength);

        System.out.println("Sum = " + sum);
        System.out.println("Average = " + average);

        double[][] matrix = {{1.2, 4.3, 4.0}, {4.1, -1.1}
        }
    }
}
