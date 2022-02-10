package main
import "fmt"

func main(){
    var hp, ans int16
    hp = 679
    ans = hp / 18
    if hp % 18 > 0 {
        ans += 1
    }
    fmt.Printf("%d\n", ans)
}
