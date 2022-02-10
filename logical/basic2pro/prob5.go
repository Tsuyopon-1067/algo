package main
import "fmt"

func main() {
    var m, k int
    fmt.Scanf("%d", &m)
    fmt.Scanf("%d", &k)
    for i := 0; 0 <= i; i++ {
        if m <= k*i {
            fmt.Println(i)
            break
        }
    }
}
