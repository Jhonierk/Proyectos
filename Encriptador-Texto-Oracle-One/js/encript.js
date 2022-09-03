const ask = document.querySelector(".box-encriptor");
const texto = document.querySelector("#input-texto");


//funcion flecha para sobre escribir sobre los elementos y mostrar el resultado del texto de encriptado
const hideImg = (item) => {
  ask.innerHTML = `
  <textarea class="text-input-salida" id="msg">${item}</textarea>
  <input onclick="copiarTexto();" class="btn" type="button" value="copiar" id="btn-copy">

  `
}

//Funcion para encriptar el texto ingresado
function encriptar(){
  if (texto.value == '') {
    Swal.fire({
    icon: 'error',
    title: 'Oops...',
    text: 'No has ingresado ningún texto!',
  })} 
  else{
      ask.innerHTML = ''
      const miniTexto = texto.value.toLowerCase()
      let textoCifrado = miniTexto.replace(/e/gim, "enter")
      textoCifrado = textoCifrado.replace(/i/gim, "imes")
      textoCifrado = textoCifrado.replace(/a/gim, "ai")
      textoCifrado = textoCifrado.replace(/o/gim, "ober")
      textoCifrado = textoCifrado.replace(/u/gim, "ufat")
      hideImg(textoCifrado)
      texto.value = ''
  }
}
//Agregar funcionalidad al boton encriptar
let boton1 = document.querySelector("#btn-encriptar");
boton1.onclick = encriptar;


//Funcion para desencriptar el texto
function desencriptar() {
  if (texto.value == '') {
    Swal.fire({
    icon: 'error',
    title: 'Oops...',
    text: 'No has ingresado ningún texto!',
  })} 
  else{
      ask.innerHTML = ''
      const miniTexto = texto.value.toLowerCase()
      let textoCifrado = miniTexto.replace(/enter/gi, "e")
      textoCifrado = textoCifrado.replace(/imes/gi, "i")
      textoCifrado = textoCifrado.replace(/ai/gi, "a")
      textoCifrado = textoCifrado.replace(/ober/gi, "o")
      textoCifrado = textoCifrado.replace(/ufat/gi, "u")
      hideImg(textoCifrado)
      texto.value = ''
  }
}

//Agregando funcionalidad al boton desencriptar
let boton2 = document.querySelector("#btn-desencriptar");
boton2.onclick = desencriptar;
