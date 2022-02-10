package main
import "fmt"

func main(){
    var ans int16
    ans = 331 / 6
    if 331 % 6 > 0 {
        ans += 1
    }
    fmt.Printf("%d\n", ans)
}
