double mul = 1;
        if (n > 0) {
            for (int i = 0; i < n; i++) {
                mul *= x;
            }
        } else if (n == 0) {
            mul = 1;
        } else {
            for (int i = 0; i < -n; i++) {  
                mul /= x;
            }
        }
        return mul;