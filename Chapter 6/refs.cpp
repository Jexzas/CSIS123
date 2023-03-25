int main () {
    int var1 = 14;
    timesTwo(var1);
}

int timesTwo(int &num) {
    num *= 2;
    return num;
}