package main
import "fmt"

func main(){
    var ans int16
    for i := 1; i <= 100; i++ {
        if i % 2 != 0 {
            ans += 1
        }
    }
    fmt.Println(ans)
}
