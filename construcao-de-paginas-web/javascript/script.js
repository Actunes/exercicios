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
btnPrompt.addEventListener("click", abrePrompt);