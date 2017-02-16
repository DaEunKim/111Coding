//: Playground - noun: a place where people can play

import UIKit

func f1()->Int{
    print("f1!");
    return 10;
}


print(f1())
puts("")

func plus(param1:Int, param2:Int){
    print(param1+param2)
}
plus(param1:3, param2:7)
plus(param1:param2:)(3,7)

puts("")

func plus2(x:Int, y:Int) -> (s:String, i:Int){//튜플로 바꿔서 값을 고정.
    return("Plus", x+y)
}
print(plus2(x: 3, y: 7))

var (a,b) = plus2(x: 3, y: 7)
print(a)
print(b)
puts("")
var (c, _) = plus2(x: 3, y: 7)
print(c)

puts("")
var result = plus2(x: 3, y: 7)
print(result)
print(result.0)
print(result.1)
puts("")
print(result.s)
print(result.i)

puts("")
typealias _ret = (s:String, i:Int)

func plus3(x:Int, y:Int) -> _ret{
    return ("Plus", x+y)
}

var result2 = plus3(x:3, y:7)
print(result2)
print(result2.i)
print(result2.0)

func f(to name:String, welcomemsg msg:String){
    print("Hello \(name)! \(msg)")
}
f(to:"D", welcomemsg:"Welcome to hell")

func c(_ str:String, _ num:Int){
    print("\(str) \(num)")
}
c("DaEun", 20135179)
puts("")

func avg(score:Int ...) -> Double{
    var sum = 0
    for i in score{
        sum += i
    }
    return Double(sum) / Double(score.count)
}
print(avg(score:10,20,30,40,100,50,60,70,80,90))

var glob = 13

func f9(num:inout Int){
    num += 4
}

f9(num:&glob)
print(glob)


func callBack(TF:Bool, success:()->(), fail:()->()){
    if(TF == true){
        success()
    }
    else{
        fail()
    }
}

func s(){
    print("success")
}
func f(){
    print("fail")
}
callBack(TF:false, success:s, fail:f)
callBack(TF:false, success:{print("success!")},fail: {print("fail...")})


var arr = [1,7,3,5,9,2,8]

arr.sort()

func comp(a:Int, b:Int)->Bool{
    return a > b
}

arr.sort(by:{(a:Int, b:Int) in return a > b})
print(arr)

arr.sort(by:{return $0 > $1})
print(arr)
arr.sort(by:<)//점점 간단해지는 문법 ㅋㅋㅋㅋㅋ
print(arr)












