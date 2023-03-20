int Solution::solve(int a, int b, int c) {
    a=a%b;
    return (c+a-1)%b;
}
