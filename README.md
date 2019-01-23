# **Clignotant Led**


Dans ce projet nous allons réaliser un Clignotant Led

# **Résultat Final** : 

[![video](https://img.youtube.com/vi/OF8e3JVgxyo/0.jpg)](https://www.youtube.com/watch?v=OF8e3JVgxyo)


## **Matériels utilisé** 

- [Arduino **Uno**](https://store.arduino.cc/arduino-uno-rev3) 

![Uno](https://store-cdn.arduino.cc/uni/catalog/product/cache/1/image/520x330/604a3538c15e081937dbfbd20aa60aad/a/0/a000066_featured_1_.jpg)  

- [Matrice Led](https://www.google.com/aclk?sa=L&ai=DChcSEwiSrYLOjoTgAhVJFtMKHShNB2QYABADGgJ3Yg&sig=AOD64_2CHBQWl-pxz3uC6rWnS-fuBa1apg&ctype=5&q=&ved=0ahUKEwjujvzNjoTgAhUS2BoKHb26Bm4Q9aACCEA&adurl)

![Matrice](https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcQQ265RlLMECgHAk1GJ8q16kRqEB2JS3BQpHyeu53h_BcRRiZQrg5THHSqA5Dp5BK9swwL2q6Cdbr0&usqp=CAc)

- [Planche à pain](https://www.amazon.fr/Hilitand-Planche-Prototype-Soudure-Plastique/dp/B07GZJBDCP/ref=sr_1_3?s=electronics&ie=UTF8&qid=1548253900&sr=1-3&keywords=arduino+planche+a+pain)

![PAP](http://french.arduinostarterskit.com/photo/pt16773220-arduino_830_point_solderless_bread_board_self_adhesive_electronic_breadboard.jpg)

- [Résistance **220w**](https://www.googleadservices.com/pagead/aclk?sa=L&ai=DChcSEwjvncnQj4TgAhXOQ9MKHcgwBr8YABADGgJ3Yg&ohost=www.google.com&cid=CAESEOD2XuofU8MZh0AuejmGKe0&sig=AOD64_2jNpuwC_T2HDPYNNYy928kD3dSrw&ctype=5&q=&ved=0ahUKEwiL3sHQj4TgAhUqzYUKHZzQD2oQ9aACCEE&adurl=) 

![Résistance](https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcR5CjpVDb9_UlxySNx5u_dtVJycmREpyyKO9FkIi3JKA4ABRQaCSs-TOz_FwRKrvKb7wAOVyUutIL0&usqp=CAc)

- [Bouton poussoir](https://www.googleadservices.com/pagead/aclk?sa=L&ai=DChcSEwilvK3zj4TgAhUkKNMKHQr1BjAYABABGgJ3Yg&ohost=www.google.com&cid=CAESEOD26o94trqQGF67pHSOCmQ&sig=AOD64_3QZPU7sdC5EdL17B2_UyMno5iPXg&ctype=5&q=&ved=0ahUKEwjqtKfzj4TgAhWLzYUKHZATD6cQwg8IMQ&adurl=)

![Bouton](https://encrypted-tbn0.gstatic.com/shopping?q=tbn:ANd9GcT08WhRouiCQ2Ra7-bVFVjK63CH5VgyiPHdVN-j1xTv6l7ssHkpgr8JvnWDD0PdqkUDXDD8pduQXQ&usqp=CAc) 

## **Bibliothèque utilisée** 

- LedControl

## **Branchements**

Voici le montage de notre clignotant Led :

![Brochure](https://image.noelshack.com/fichiers/2019/04/3/1548252248-montage-led-clignotant-bb.png)
 

## **Code**

On ajoute la bibliothèque **LedControl**, puis on crée l'objet "LedControl" :

``` c++
#include <LedControl.h>
LedControl matrix(12,11,10,1);
```

Il est obligatoire **d'initialiser la matrice** au démarrage.

``` c++
matrix.shutdown(0, false);
```

On initialise nos 3 boutons (dans "++setup++") : 

``` c++
 pinMode(7,INPUT);
 pinMode(4,INPUT);
 pinMode(2,INPUT);
```

On crée nos variables pour récupérer la position de nos boutons : 

``` c++ 
  int buttonLeft = digitalRead(7);
  int buttonRight = digitalRead(4);
  int buttonWarning = digitalRead(2);
```  

Nos modules sont initialisés nous pouvons donc programmer nos boutons et notre matrice Led

Tous d'abord, on doit éteindre nos Led pour qu'à chaque action la matrice Led se reset. 

On utilise la commande suivante : 

``` c++
matrix.clearDisplay(0);
```

On utilise une condition simple pour chaque bouton.

**Code pour le clignotant droit** : (on rajoute du "**delay**" a la fin pour crée un effet de clignotement  :

``` c++
 if(buttonLeft == 1) { 
    
    matrix.setLed(0, 0, 3, true);
    matrix.setLed(0, 1, 2, true);
    matrix.setLed(0, 1, 3, true);
    matrix.setLed(0, 2, 1, true);
    matrix.setLed(0, 2, 2, true);
    matrix.setLed(0, 2, 3, true);
    matrix.setLed(0, 3, 0, true);
    matrix.setLed(0, 3, 1, true);
    matrix.setLed(0, 3, 2, true);
    matrix.setLed(0, 3, 3, true);
    matrix.setLed(0, 3, 4, true);
    matrix.setLed(0, 3, 5, true);
    matrix.setLed(0, 3, 6, true);
    matrix.setLed(0, 4, 0, true);
    matrix.setLed(0, 4, 1, true);
    matrix.setLed(0, 4, 2, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 4, 4, true);
    matrix.setLed(0, 4, 5, true);
    matrix.setLed(0, 4, 6, true);
    matrix.setLed(0, 5, 1, true);
    matrix.setLed(0, 5, 2, true);
    matrix.setLed(0, 5, 3, true);
    matrix.setLed(0, 6, 2, true);
    matrix.setLed(0, 6, 3, true);
    matrix.setLed(0, 7, 3, true);

    delay(500);

    matrix.clearDisplay(0);
    

    delay(500);
}
```
 
**Code pour le clignotant gauche** : 
``` c++
if(buttonRight == 1) { 
    
    matrix.setLed(0, 0, 3, true);
    matrix.setLed(0, 1, 3, true);
    matrix.setLed(0, 1, 4, true);
    matrix.setLed(0, 2, 3, true);
    matrix.setLed(0, 2, 4, true);
    matrix.setLed(0, 2, 5, true);
    matrix.setLed(0, 3, 0, true);
    matrix.setLed(0, 3, 1, true);
    matrix.setLed(0, 3, 2, true);
    matrix.setLed(0, 3, 3, true);
    matrix.setLed(0, 3, 4, true);
    matrix.setLed(0, 3, 5, true);
    matrix.setLed(0, 3, 6, true); 
    matrix.setLed(0, 4, 0, true);
    matrix.setLed(0, 4, 1, true);
    matrix.setLed(0, 4, 2, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 4, 4, true);
    matrix.setLed(0, 4, 5, true);
    matrix.setLed(0, 4, 6, true);   
    matrix.setLed(0, 5, 3, true);
    matrix.setLed(0, 5, 4, true);
    matrix.setLed(0, 5, 5, true);
    matrix.setLed(0, 6, 3, true);
    matrix.setLed(0, 6, 4, true);
    matrix.setLed(0, 7, 3, true);

    delay(500);

    matrix.clearDisplay(0);
    

    delay(500);
   
}
```

**Code pour le Warning** : 
``` c++

 if(buttonWarning == 1) { 
    
    matrix.setLed(0, 1, 3, true);
    matrix.setLed(0, 1, 4, true);
    matrix.setLed(0, 2, 3, true);
    matrix.setLed(0, 2, 4, true);
    matrix.setLed(0, 3, 3, true);
    matrix.setLed(0, 3, 4, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 4, 4, true);
    matrix.setLed(0, 5, 3, true);
    matrix.setLed(0, 5, 4, true);    
   
    matrix.setLed(0, 7, 3, true);
    matrix.setLed(0, 7, 4, true);

    delay(1000);

    matrix.clearDisplay(0);
    

    delay(500);
   
}
```
