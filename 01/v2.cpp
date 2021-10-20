int main(){
    for(int i = 0; i< 10; i++){
        // do something
    }

    for(int i = 0; i< N; i++){
        // do something
    }

    // O(n)

    // 0 1 2 3 4 5 6 7 8 9  => 10

    for(int i = 0; i< N; i++){
        for(int j = 0; j< N; j++){
            // do something
        }
    }

    // 0  --> 0 1 2 3 4 5 6 7 8 9  N
    // 1  --> 0 1 2 3 4 5 6 7 8 9  N
    // 2  --> 0 1 2 3 4 5 6 7 8 9  N

    // N  --> 0 1 2 3 4 5 6 7 8 9  N

    //1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + N   => n*(n+1)  => n^2 + n => n^2

    // Time Complexity  (yazdığımız kodun çalışma süresi)
    // T(n) = n^2 + n           O(n^2)      
    // T(n) = n^3 + n + 6       O(n^3)
    // T(n) = 5*n^2 + n + n^3   O(n^3)

    //[2,3,4,5,6]
}