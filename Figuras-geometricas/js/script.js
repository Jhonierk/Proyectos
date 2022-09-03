//Agregando patron modular (Se realiza por medio de una function flecha): Lo cual sera codigo privado (para que nadie pueda acceder a las variables del programa)
//no se podra visualisar desde consola
//Se realiza de la siguiente manera...
/**************************
 *
 (()=>){
 Todo lo que va aqui a dentro queda privado
 })();
 */

//Ahora para exportar algunos elementos del patron modular que queremos acceder
const myModule = (() => {
  //El 'use strict' es un metodo que sirve para corregir errores de sintaxis
  "use strict";

  //Agregart una costante global del resultado
  const valorResult = document.getElementById("result");

  //Agregando la funcionalidad de los botones desde el patron modular
  const btnPerimetroCuadrado = document.querySelector("#btnPerimetroCuadrado"),
    btnAreaCuadrado = document.querySelector("#btnAreaCuadrado"),
    btnPerimetroTriangulo = document.querySelector("#btnPerimetroTriangulo"),
    btnAreaTriangulo = document.querySelector("#btnAreaTriangulo"),
    btnDiametroCirculo = document.querySelector("#btnDiametroCirculo"),
    btnPerimetroCirculo = document.querySelector("#btnPerimetroCirculo"),
    btnAreaCirculo = document.querySelector("#btnAreaCirculo");

  //fucnion que calcula el area y perimetro del cuadrado

  //usamos funcion flecha
  //funcion felcha para calcular el perimetro de un cuadrado
  const perimSquare = (lado) => lado * 4;
  //funcion flecha para encontrar el area de un cuadrado
  const area = (lado) => lado * lado;

  //funcion flecha para el boton perimeto
  btnPerimetroCuadrado.addEventListener('click', () => {
    //Con esto toma el valor ingresado en el input de la pagina
    let inputLado = document.getElementById("inputLado");
    //Con esto hace la conversion del valor a entero
    let valor = Number(inputLado.value);

    //con esto sobre escribe lo que va en el id result del html y muesta el valor ingresado
    const result = `El perimetro del cuadrado es: ${perimSquare(valor)} cm`;
    //document.getElementById('result').innerText = result;
    valorResult.innerText = result;
  });

  btnAreaCuadrado.addEventListener('click', () => {
    //Con esto toma el valor ingresado en el input de la pagina
    let inputLado = document.getElementById("inputLado");
    //Con esto hace la conversion del valor a entero
    let valor = Number(inputLado.value);

    //con esto sobre escribe lo que va en el id result del html y muesta el valor ingresado
    const result = `El Area del cuadrado es: ${area(valor)} cm^2`;
    //document.getElementById('result').innerText = result;
    valorResult.innerText = result;
  });

  //funcion del perimetro de un triangulo
  const perimTriangulo = (lado1, lado2, lado3) => lado1 + lado2 + lado3;

  //funcion para encontrar el area de un triangulo
  const areaTriangulo = (base, altura) => (base * altura) / 2;

  //funcion para el boton perimeto para encontrar el perimetro de un triangulo
  btnPerimetroTriangulo.addEventListener('click', () => {
    //con esto se toma el valor ingresado en el primer input de triangulo "lado"
    let inputLado1 = document.getElementById("lado1T");
    let inputLado2 = document.getElementById("lado2T");
    let inputLado3 = document.getElementById("lado3T");
    //Toma el valor ingresado y loTransformamos los valores ingresados a enteros para evitar error de sintaxis
    let valorL1 = Number(inputLado1.value);
    let valorL2 = Number(inputLado2.value);
    let valorL3 = Number(inputLado3.value);

    //sobre escritura del resultado en el DOM
    const result = `El perimetro del triangulo es de: ${perimTriangulo(
      valorL1,
      valorL2,
      valorL3
    )} cm`;
    valorResult.innerText = result;
  });

  //funcion para el boton area para encontrar el area de un cuadrado
  btnAreaTriangulo.addEventListener('click', () => {
    let inputBase = document.getElementById("base");
    let inputAltura = document.getElementById("altura");

    let baseT = Number(inputBase.value);
    let alturaT = Number(inputAltura.value);

    const result = `El area del triangulor es de: ${areaTriangulo(
      baseT,
      alturaT
    )}`;
    valorResult.innerText = result;
  });

  //Solucion para el circulo

  //funcion para encontrar el diametro de un cirtulo
  const diametroCirculo = (radio) => radio * 2;
  //funcion para encontrar el perimetro de un Circulo
  const perimetroCirculo = (radio) => diametroCirculo(radio) * Math.PI;
  //funcion flecha para encontrar el area de un Circulo
  const areaCirculo = (radio) => radio * radio * Math.PI;

  //funcion para boton Diametro para encontrar el Diametro del circulo
  btnDiametroCirculo.addEventListener('click', () => {
    let inputRadio = document.getElementById("radioC");
    let radio = Number(inputRadio.value);

    const result = `El diametro del circulo es: ${diametroCirculo(radio)}`;
    valorResult.innerText = result;
  });

  //funcion para boton Perimetro para encontrar el Perimetro del circulo
  btnPerimetroCirculo.addEventListener('click', () => {
    let inputRadio = document.getElementById("radioC");
    let radio = Number(inputRadio.value);

    const result = `El Perimetro del circulo es: ${perimetroCirculo(radio)}`;
    valorResult.innerText = result;
  });

  //funcion para boton Area para encontrar el Area del circulo
  btnAreaCirculo.addEventListener('click', () => {
    let inputRadio = document.getElementById("radioC");
    let radio = Number(inputRadio.value);

    const result = `El Area del circulo es: ${areaCirculo(radio)}`;
    valorResult.innerText = result;
  });

  //Con el retunr retorna todo lo que queremos que el patron modular muestre como un objeto
  /*return {
    calcularPC: calcularPerimetro,
    calcularAC: calcularArea,
  };
  */
})();
