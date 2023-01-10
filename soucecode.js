let player = getObject("player")

const coin_01 = getObject("coin_01")
const coin_02 = getObject("coin_02")
const coin_03 = getObject("coin_03")
const coin_04 = getObject("coin_04")
const coin_05 = getObject("coin_05")

const showpoint = getObject("button_text_w_1(62e)")
let coinpoint = 0;
const message = getObject("board_au_k(e33)")

const spawnbox = getObject("BOX(3d4)")

message.show()
message.setText("🌍열쇠를 찾아라!🌍\n 우리는 오염된 지구를 지키기 위해\n 지구를 지킬 수 있는 팁이 담긴 열쇠🔑를 찾으러\n 다른 행성에 왔어요. 코인을 모두 모으면, \n 지구를 구할 수 있는 열쇠가 나타나요! \n열쇠에 어떤 내용이 있을지 코인을 모아볼까요?")

wait(20)

message.setText("")
message.hide()

// 코인모으기 설정

// coin_01.onCollide(player, function() {
//     coinpoint = coinpoint + 1
//     coin_01.kill()
//     showpoint.setText(`모은 코인의 개수 : ${coinpoint} / 5 `)
// })
// coin_02.onCollide(player, function() {
//     coinpoint = coinpoint + 1
//     coin_02.kill()
//     showpoint.setText(`모은 코인의 개수 : ${coinpoint} / 5 `)
// })
// coin_03.onCollide(player, function() {
//     coinpoint = coinpoint + 1
//     coin_03.kill()
//     showpoint.setText(`모은 코인의 개수 : ${coinpoint} / 5 `)
// })

// coin_04.onCollide(player, function() {
//     coinpoint = coinpoint + 1
//     coin_04.kill()
//     showpoint.setText(`모은 코인의 개수 : ${coinpoint} / 5 `)
// })

// coin_05.onCollide(player, function() {
//     coinpoint = coinpoint + 1
//     coin_05.kill()
//     showpoint.setText(`모은 코인의 개수 : ${coinpoint} / 5 `)
// })

// function Setup() {
//     showpoint.setText(`모은 코인의 개수 : ${coinpoint} / 5 `)
// }

// 떨어졌을 때 원래 위치로 초기화
spawnbox.onCollide(player, function() {
        player.spawn()
    })
    
// 밟으면 없어지는 징검다리
const falsebox01 = getObject("falsebox_01")
const falsebox02 = getObject("falsebox_02")
const falsebox =[];

for(let i = 0; i < 2; i++)
    falsebox[i] = getObject("falsebox_0" + (i + 1));

falsebox.forEach(boxes => {
    player.onCollide(boxes, function() {
        boxes.kill()
        wait(1)
        boxes.revive()
    })   
})

// 캐릭터 속도 증가

const speedbox = getObject("decoration_randombox_001(6df)")

speedbox.onCollide(player, function() {
    speedbox.kill()
    player.changePlayerSpeed(2)
})

// 문열리기

const fdoor = getObject("furniture_dgdoor_003(287)")
const dir1 = getObject("nature_gravebush_014(9bf)")
const dir2 = getObject("nature_gravebush_002(ee5)")
const dir3 = getObject("nature_gravebush_006(524)")

const coin = [];
for(let i = 0; i < 5; i++)
    coin[i] = getObject("coin_0" + (i + 1));
    
coin.forEach(coins => {
    player.onCollide(coins, function() {
        coins.kill()
        coinpoint = coinpoint + 1
        showpoint.setText(`모은 코인의 개수 : ${coinpoint} / 5 `)
        if(coinpoint == 5){
            fdoor.kill()
            dir1.kill()
            dir2.kill()
            dir3.kill()
                    }
    })
})

function Setup() {
    showpoint.setText(`모은 코인의 개수 : ${coinpoint} / 5 `)
}


const goldkey = getObject("goldkey_00")


const vehicle1 = getObject("vehicle_wagon_001(162)")
const vehicle2 = getObject("vehicle2")

vehicle1.moveZ(50, 10)
vehicle2.moveZ(50, 5)
