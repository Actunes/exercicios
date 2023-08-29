function abrePrompt (){
    valor1 = parseInt(prompt("Digite o valor 1:"))
    operador = prompt("Digite o operador:")
    valor2 = parseInt(prompt("Digite o valor 2:"))

    switch (operador) {
        case "+":
          valor3 = valor1 + valor2;
          break;
        case "-":
          valor3 = valor1 - valor2;
          break;
        case "*":
          valor3 = valor1 * valor2;
          break;
        case "/":
          valor3 = valor1 / valor2;
          break;
        default:
          valor3 = "Operador inválido";
      }
    document.getElementById("operacao").innerHTML = `${valor1} ${operador} ${valor2} = ${valor3}`

}
let btnPrompt = document.getElementById("botaoprompt")
// btnPrompt.onclick = abrePrompt
btnPrompt.addEventListener("click", abrePrompt)

function aplicaEx(){

  // document.getElementById("titulo").style.fontsize = "30pt"
  // document.getElementById("h1")[0].style.fontsize = "20pt"

  titulos = document.querySelectorAll("h1")
  divs = document.querySelectorAll("div")
  paragrafos = document.querySelectorAll("p")

  for (let i = 0 ; i < titulos.length; i++){
    titulos[i].style.fontSize = "30pt"
    titulos[i].style.textAlign = "center"
    titulos[i].style.fontFamily = "Verdana, sans serif"
  }

  for (let i = 0 ; i < divs.length; i++){
    divs[i].style.backgroundColor = "#44475a"
  }

  for (let i = 0 ; i < paragrafos.length; i++){
    paragrafos[i].style.borderBotton = "10px solid grey"
  }
}

botaoFuncao = document.getElementById("botaofuncao")
botaoFuncao.onclick = aplicaEx