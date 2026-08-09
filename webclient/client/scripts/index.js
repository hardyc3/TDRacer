var TDRacerMain = (function() {
    
    var timerListeners = [];
   
    var initialize = function (canvasName) {
        
        var canvas = document.getElementById(canvasName);
        loadMap(canvas);
        loadCar(canvas);
        initializeKeyboard(canvas);
        displayMenu(canvas);
    };
    
    function loadMap(canvas) {
        
        if(canvas.getContext) {
            var ctx = canvas.getContext("2d");
            var img = new Image();
            img.onload = function() {
                ctx.drawImage(img, 0, 0, 1024, 1024, 0, 0, 250, 200);
                console.log("drawing image");
            };
            img.src = "Map copy.png";
        } else {
            
            console.log("Invalid canvas object");
        }
    }
    
    function loadCar(domObj) {
        
    }
    
    function initializeKeyboard(domObj) {
        
        domObj.addEventListener("keydown", keyDownListener);
        domObj.addEventListener("keyup", keyUpListener);
    }
    
    function keyDownListener(event) {
        
       
    }
    
    function keyUpListener(event) {
        
    }
    
    function displayMenu(domObj) {
        
    }
    
    function notifyListeners(listeners) {
        
        if(listeners !== null && listeners instanceof Array) {
            
            for(var listener in listeners) {
                
                listener.notify(state);
            }
        }
    }
    
    var startGame = function () {
        
        setInterval(notifyListeners(timerListeners), 17);
    };
    
    var addTimerListener = function(timerListener) {
        
        timerListeners.push(timerListener);
    };
    
    return {
      initialize: initialize,
      startGame: startGame,
      addTimerListener: addTimerListener
    };
})();

   
window.onload = TDRacerMain.initialize("tdracer-canvas");