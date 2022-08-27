class Sort {

    public static void main(String[] args) {
        System.out.println("Sort");

        int arr[] = { 8, 7, 9, 3, 4, 1, 5 };

        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();

        int arr2[] = new int[arr.length];

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int k : arr) {
            System.out.print(k + " ");
        }
        System.out.println();
    }

}
