package main
import "fmt"

func main(){
    var ans int16
    ans = 211 / 28
    if 211 % 28 > 0 {
        ans += 1
    }
    fmt.Printf("%d\n", ans)
}
