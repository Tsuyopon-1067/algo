package main
import "fmt"

func main() {
    var a, k, ans int
    fmt.Scanf("%d", &a)
    fmt.Scanf("%d", &k)
    ans = k * (a/k)
    if (ans < a) {
        ans += k
    }
    fmt.Println(ans)
}
