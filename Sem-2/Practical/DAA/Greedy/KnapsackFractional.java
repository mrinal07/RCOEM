
// Java program to solve fractional Knapsack Problem
import java.util.Arrays;
import java.util.Comparator;

public class KnapsackFractional {

    private static double getMaxValue(int[] wt, int[] val,
            int capacity) {

        ItemValue[] iVal = new ItemValue[wt.length];

        for (int i = 0; i < wt.length; i++) {
            iVal[i] = new ItemValue(wt[i], val[i], i);
        }
        System.out.println();

        // sorting items by value;
        Arrays.sort(iVal, new Comparator<ItemValue>() {
            @Override
            public int compare(ItemValue o1, ItemValue o2) {

                // System.out.println((o2.cost - o1.cost));

                if ((o2.cost - o1.cost) > 0) {
                    return 1;
                } else {
                    return -1;
                }
            }
        });

        double totalValue = 0d;

        for (ItemValue i : iVal) {

            int curWt = (int) i.wt;
            int curVal = (int) i.val;

            if (capacity - curWt >= 0) {
                // this weight can be picked whole

                capacity = capacity - curWt;
                totalValue += curVal;

                // System.out.println("if" + totalValue + " ## " + capacity);

            } else {

                // item can't be picked whole

                double fraction = ((double) capacity / (double) curWt);

                totalValue += (curVal * fraction);

                System.out.println("fraction " + fraction + "| cap " + capacity + "| wt " + curWt + "| val " + curVal
                        + "| (curVal * fraction) " + (curVal * fraction));
                capacity = (int) (capacity - (curWt * fraction));
                

                break;
            }
        }

        return totalValue;
    }

    // item value class
    static class ItemValue {
        double wt, val, ind, cost;

        // item value function

        public ItemValue(int wt, int val, int ind) {
            this.wt = wt;
            this.val = val;
            this.ind = ind;
            this.cost = (double) (((double) val / (double) wt));

            System.out.print("COST " + cost + " ");
        }
    }

    // Driver code

    public static void main(String[] args) {
        System.out.println("Fractional Knapsack Problem\n");
        // int[] wt = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
        // int[] val = { 20, 30, 66, 40, 60, 20, 70, 10, 90, 50 };
        // int capacity = 200;

        int[] wt = { 10, 20, 30, 40, 50 };
        int[] val = { 20, 30, 66, 40, 60 };
        int capacity = 100;

        double maxValue = getMaxValue(wt, val, capacity);

        // Function call
        System.out.println("\n\nMaximum value we can obtain = "
                + maxValue + "\n");
    }

}
