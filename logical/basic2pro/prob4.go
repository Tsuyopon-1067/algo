package main
import "fmt"

func main() {
    var n, a, ans int
    fmt.Scanf("%d", &n)
    fmt.Scanf("%d", &a)
    ans = n / a
    if n % a > 0 {
        ans ++
    }
    fmt.Println(ans)
}
