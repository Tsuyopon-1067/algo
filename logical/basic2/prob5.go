package main
import "fmt"

func main(){
    var times, past, h, m int16
    times = 180 / 13
    if 180 % 13 > 0 {
        times += 1
    }
    past = times * 13
    h = past / 60 + 8
    m = past % 60
    fmt.Printf("%02d:%02d\n", h, m)
}
