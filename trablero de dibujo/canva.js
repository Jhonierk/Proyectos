//Guarda el elemento por el id y el contexto
const elCanvas =  document.getElementById("lienzo");
const context = elCanvas.getContext("2d");

//Coordenadas del lienzo digitadas en mouse solo si se oprime el contexto
//Coordenadas del cursor:
 let coorX, coorY;

 const dibujar = (cursorX, cursorY) => {
    //Inicia un nuevo trazo
    context.beginPath();
    //Mueve el pincel en las coordenadas dictadas en las variables
    context.moveTo(coorX, coorY);
    //El grosor de la linea del pincel
    context.lineWidth = 20;
    //Color del trazo del pincel
    context.strokeStyle = "#000"; //"black"\
    //forma del pincel 
     context.lineCap = "round";
     context.lineJoin = "round";
     //mueve el trazo del pincel a las coordenadas indicadas almacenadas en los parametros de la funcion dibujar
     context.lineTo(cursorX, cursorY);
     //dibuja el trazo final
     context.stroke();

     //Actualizacion de cada coordenada de cada trazo digitado
    coorX = cursorX;
    coorY = cursorY;
 }

 //Obtengo las cooordenadas cuando haga click
 const pinClick = (event) => {
    coorX = event.offsetX;
    coorY = event.offsetY;
    dibujar(coorX, coorY);
    //Cuando se presiona un click se llama el evento
    elCanvas.addEventListener("mousemove", mouseMoving);
 }; 

 //Para que continue dibujando
 const mouseMoving = (event) => {
   //Se pasan las coordenadas actualizadas del moause mientras se mueve
   dibujar(event.offsetX, event.offsetY);

 }

//funcion para dejar de trazar apenas suelta el click
const sinClick = () => {
   elCanvas.removeEventListener("mousemove", mouseMoving);
}

 elCanvas.addEventListener("mousedown", pinClick);
 elCanvas.addEventListener("mouseup", sinClick);