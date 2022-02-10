package main
import "fmt"

func main(){
    var ans int16
    ans = 250 / 8
    if 250 % 8 > 0 {
        ans += 1
    }
    fmt.Printf("%d\n", ans)
}
