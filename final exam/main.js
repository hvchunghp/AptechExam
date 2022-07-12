function submit() {
    let x = document.getElementById("cardNum").value;
    let text;
    //   Có 2 loại thẻ: 12 số và 19 số
    if (isNaN(x) || x < 100000000000 || x > 9999999999999999999) {
        text = "Input not valid";
    } else {
        text = "Input OK";
    }
    document.getElementById("checkNumberCard").innerHTML = text;
}