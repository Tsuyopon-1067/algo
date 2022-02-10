package main
import "fmt"

func main() {
    var u, t, a int
    fmt.Scanf("%d", &u)
    fmt.Scanf("%d", &t)
    fmt.Scanf("%d", &a)
    for i := 0; 0 <= i; i++ {
        if a <= u + t*i {
            fmt.Println(u + t*i)
            break
        }
    }
}
