float problemSolution5(float x, float y, char operation) {
   float result;
   cin >> x;
   cin >> y;
   cin >> operation;
    switch (result) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y != 0) {
                return x / y;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        default:
            cout << "Error: Invalid operation!" << endl;
    }
    cout << "Result: " << result;


   return result;
}