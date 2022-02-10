package main
import "fmt"

func main() {
    var a, b, k, ans int
    fmt.Scanf("%d", &a)
    fmt.Scanf("%d", &b)
    fmt.Scanf("%d", &k)
    for i := a; i <= b; i++ {
        if i % k == 0 {
            ans++
        }
    }
    fmt.Println(ans)
}
