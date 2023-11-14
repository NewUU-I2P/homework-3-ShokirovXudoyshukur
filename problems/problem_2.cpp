float problemSolution2(float i, float j, float k) {
    float result;
    cin >> i;
    cin >> j;
    cin >> k;
    result = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
    cout << "The highest is" << result;
    return result;
}