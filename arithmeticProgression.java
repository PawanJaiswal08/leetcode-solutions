// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

class arithmeticProgression {
    public boolean canMakeArithmeticProgression(int[] arr) {
        Arrays.sort(arr);
        int difference = arr[1] - arr[0];
        for (int i = 2 ; i <= arr.length - 1 ; i++) {
            if ((arr[i] - arr[i - 1]) != difference)
                return false;
        }
        return true;
    }
}
