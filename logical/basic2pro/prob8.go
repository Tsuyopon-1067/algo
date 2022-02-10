package main
import "fmt"

func main() {
    var n, k, ans int
    fmt.Scanf("%d", &n)
    fmt.Scanf("%d", &k)
    for i := 1; i <= n; i++ {
        if i % k == 0 {
            ans++
        }
    }
    fmt.Println(ans)
}
