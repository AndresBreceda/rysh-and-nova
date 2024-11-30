/***********************/
/***********************/

//RYSH AND NOVA (INCLUDE SE USA EN AMBAS HISTORIAS)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>


#ifdef _WIN32
    #include <Windows.h>
    #define LIMPIAR_CONSOLA() system("cls")
#else
    #include <stdlib.h>
    #define LIMPIAR_CONSOLA() system("clear")
#endif


/***********************/
/***********************/

//RYSH AND NOVA (STRUCT SE USA EN AMBAS HISTORIAS)

typedef struct {
    int malo;
    int bueno;
    int decisionimportante;
    int cataclismo;
    int sabiduria;
} NovaValores;


/***********************/
/***********************/

//RYSH AND NOVA (FUNCION SE USA EN AMBAS HISTORIAS)

//Suma valores de la historia

// FunciÛn para incrementar Malo
void incrementarMalo(NovaValores *valores) {
    valores->malo++;
}

// FunciÛn para incrementar Bueno
void incrementarBueno(NovaValores *valores) {
    valores->bueno++;
}

// Funcion para incrementar Decision Importante 
void incrementarDesicionImportante(NovaValores *valores){
    valores->decisionimportante++;
}

// FunciÛn para incrementar Cataclismo
void incrementarCataclismo(NovaValores *valores) {
    valores->cataclismo++;
}

//Funcion para incrementar Sabiduria
void incrementarSabiduria(NovaValores *valores){
    valores->sabiduria++;
}


/***********************/
/***********************/

//RYSH AND NOVA (FUNCION SE USA EN AMBAS HISTORIAS)

void PresionarA() {
    printf("Presiona (a) y despuÈs Enter para continuar...\n");
    
    // Limpiar el b˙fer de entrada
    while (getchar() != 'a');

    printf("Limpiando la consola...\n");
    LIMPIAR_CONSOLA();

}


/***********************/
/***********************/

//AQUI ACABAN RECURSOS UTILIZADOS PARA AMBAS HISTORIAS






//AQUI COMIENZA LA SECCION DE FUNCIONES PARA LA HISTORIA

//oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo//
//oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo//

//MENU DE OPCIONES 



//oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo//
//oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo//

//RYSH AND NOVA (PROLOGO)




void prologoRyshYNova() {

    NovaValores misValores = {0, 0, 0, 0};

    int respuesta;

    
	
	printf("RYSH & NOVA\n\n");
	
	printf("En el vasto reino m·gico de Celestia, donde la magia y la tecnologÌa bailan en una armonÌa perfecta,"); 
	printf("la historia de dos almas entrelazadas comienza. Rysh, la ingeniera prodigiosa, y Nova, el trovador rom·ntico,");
	printf(" se embarcar·n en un viaje a travÈs de los hilos del tiempo, donde sus destinos est·n entrelazados por la magia y la pasiÛn.\n\n");

	printf("En la imponente torre de Rysh, una creaciÛn m·gica cobra vida con un resplandor que deslumbra incluso"); 
	printf("a las estrellas. La m·quina de alterar el tiempo, producto de la genialidad de Rysh, destila poder y posibilidades"); 
	printf("ilimitadas. Pero detr·s de la fascinaciÛn de la ingeniera se esconde una sombra que se cierne sobre el amor que comparte con Nova.\n\n");

	printf("Mientras el resplandor m·gico envuelve la habitaciÛn, Nova, el trovador preocupado por las consecuencias, intenta"); 
	printf("advertir a Rysh sobre los peligros de manipular el tejido del tiempo. Sin embargo, su voz se desvanece en el eco del viento"); 
	printf("m·gico que emana de la m·quina encantada.\n\n");
	PresionarA();
	
    int decision;

	do {
        printf("INTENTA CONVENCER A RYSH DE PARAR LA M¡QUINA\n\n");
        printf("1-Nova: (con preocupaciÛn en su voz) Rysh, debes detener esto. No puedes jugar con el tiempo como si fuera una melodÌa simple.\n");
        printf("   Las consecuencias podrÌan ser inimaginables.\n");
        printf("2-Nova: (preocupado) Rysh, sÈ que tienes buenas intenciones, pero manipular el tiempo es peligroso. øNo podrÌamos buscar maneras de\n");
        printf("   mejorar nuestro mundo sin poner en riesgo la estabilidad misma de la realidad?\n\n");

        printf("Elige una opciÛn (1 o 2): ");
        scanf("%d", &decision);

        if (decision != 1 && decision != 2) {
            printf("Nova nunca dijo eso. Por favor, elige una opciÛn v·lida.\n\n");
        }

    } while (decision != 1 && decision != 2);

    
    do {
        printf("INTENTA CONVENCER A RYSH DE PARAR LA M¡QUINA\n\n");
        printf("1-Nova: (con preocupaciÛn en su voz) Rysh, debes detener esto. No puedes jugar con el tiempo como si fuera una melodÌa simple.\n");
        printf("   Las consecuencias podrÌan ser inimaginables.\n");
        printf("2-Nova: (preocupado) Rysh, sÈ que tienes buenas intenciones, pero manipular el tiempo es peligroso. øNo podrÌamos buscar maneras de\n");
        printf("   mejorar nuestro mundo sin poner en riesgo la estabilidad misma de la realidad?\n\n");

        printf("Elige una opciÛn (1 o 2): ");
        scanf("%d", &decision);

        if (decision != 1 && decision != 2) {
            printf("Nova nunca dijo eso. Por favor, elige una opciÛn v·lida.\n\n");
        }

    } while (decision != 1 && decision != 2);
	

	printf("Rysh: (sonrÌe confiada) Nova, siempre has sido cauteloso, pero esta vez te aseguro que todo saldr· bien. Imagina las posibilidades,");
	printf("los secretos que podemos descubrir, los momentos que podemos cambiar.\n\n");
	PresionarA();

	printf("Rysh: (emocionada) Nova, no entiendes. Esta m·quina que he creado tiene el poder de abrir puertas a mundos desconocidos,\n");
    printf("de tejer y reescribir historias. °Es una maravilla!\n\n");
    PresionarA();

    do {
        printf("1-Nova: (frunciendo el ceÒo) Pero Rysh, øno ves el peligro? El tiempo es un rÌo delicado que se puede desbordar f·cilmente.\n");
        printf("   Alterar su curso podrÌa causar estragos en el tejido mismo de la realidad. øEst·s dispuesta a arriesgar todo por tu fascinaciÛn?\n");
        printf("2-Nova: (con semblante serio) Rysh, no subestimes la fragilidad del tiempo. Es como un delicado lienzo que puede rasgarse con \n");
        printf("   el menor de los toques. Modificar su curso puede desencadenar consecuencias impredecibles en la trama misma de la realidad.\n");
        printf("   øRealmente est·s dispuesta a apostar todo por tu fascinaciÛn?\n\n");

        printf("Elige una opciÛn (1 o 2): ");
        scanf("%d", &decision);

        if (decision != 1 && decision != 2) {
            printf("Nova nunca dijo eso. Por favor, elige una opciÛn v·lida.\n\n");
        }

    } while (decision != 1 && decision != 2);
	
	printf("Rysh: (entusiasmada) Pero Nova, øno ves cÛmo podemos mejorar el mundo, cÛmo podemos hacerlo mejor?\n\n");
	PresionarA();

	printf("1-Nova: (suspira) No es cuestiÛn de mejorar el mundo, sino de respetar sus leyes fundamentales. La magia y el tiempo son elementos");
    printf(" poderosos; manipularlos sin precauciÛn puede llevar a desastres inimaginables. Te ruego, detÈn esto antes de que sea demasiado tarde.\n");
    printf("2-Nova: (suspira) øNo puedo hacer nada para convencerte?, °øRysh por quÈ no me escuchas?!\n\n");

    do {
        printf("Elige una opciÛn (1 o 2): ");
        scanf("%d", &decision);

        if (decision != 1 && decision != 2) {
            printf("Nova nunca dijo eso. Por favor, elige una opciÛn v·lida.\n\n");
        }

    } while (decision != 1 && decision != 2);

	printf("Rysh: (ignorando las advertencias) Nova, confÌa en mÌ. Este es nuestro momento para brillar, para dejar una marca en la historia de ");
	printf("Celestia.\n\n");
	PresionarA();
	
	printf("En un instante, el viento se convierte en un vÛrtice temporal que atrapa a Nova, ");
	printf("separ·ndolo de Rysh y lanz·ndolo a travÈs de eras desconocidas.\n\n");

	printf("La torre, ahora envuelta en un silencio ominoso, testifica la disonancia entre el amor y la ambiciÛn, entre la magia y"); 
	printf("la advertencia no escuchada. Rysh, perdida en la maravilla de su creaciÛn, se da cuenta demasiado tarde de la ausencia de Nova.");
	printf("La distorsiÛn en el tiempo ha tejido su historia de amor en el tapiz del destino, pero la pregunta que flota en el aire es: ");
	printf("øpodr·n Rysh y Nova superar los desafÌos temporales que se avecinan y reunir sus corazones entrelazados una vez m·s?\n\n");
	PresionarA();

    printf("La historia comienza con Rysh......");

   //AQUI DEBERIA IR UNA DECISION IMPORTANTE **********

    //AQUI DEBERIA IR GUARDAR PARTIDA ************
}


//oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo//
//oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo//

//AQUI VA LA HISTORIA INDIVIDUAL DE RYSH


void Rysh(NovaValores *valores){
	
	
    int decision;
    int golpearContador = 0;
    int cantidadObjetos=0;
    


    printf("\nCapitulo 1:El camino de Rysh\n");
    printf("Me despertÈ despuÈs del gran golpe que explosiÛn de mi maquina sin Nova a mi lado\n");

    while (1) {   
    printf("øQuÈ deberÌas hacer?\n");
    printf("1-Golpear la m·quina\n");
    printf("2-Buscar entre las ruinas\n");
    
	if (scanf("%d", &decision) != 1) {
            printf("Como es que puedo hacer eso, deberÌa enfocarme y dejar de pensar otras cosas.\n");

            
            while (getchar() != '\n');
            
            continue; 
        }

        if (decision == 1) {
            golpearContador++;

            if (golpearContador == 1) {
                printf("Golpear la maquina no me va a servir de nada, aunque sigo enojada\n");
            } else if (golpearContador == 2) {
                printf("Mis intentos anteriores no sirvieron de nada, pero sigo frustrada\n");
                incrementarMalo(valores);
            } else {
                printf("Estoy cansada de golpear la m·quina, necesito encontrar a Nova\n");
                break; 
            }

            
        } else if (decision == 2) {
            printf("Todo es un desastre, tengo que saber donde est· Nova\n");
            break; 
        } else {
            printf("No se me ha ocurrido otra idea\n");
        }
    }

    printf("Buscando entre las ruinas encuentras un libro sobre el espacio tiempo, recuerdas que en tu apartamento tenÌas m·s libros sobre viajes entre dimensiones, por lo que decides dirigirte hacia ahÌ\n");

   PresionarA();
    
    printf("Caminando hacia al apartamento te topas a un viejo amigo cientifico\n");
    printf("Azriel: !Rysh° Cuanto tiempo, øa donde vas a tan agitada?\n");
    printf("Rysh: Azriel, no tengo tiempo una de mis maquinas de teletrasportaciones exploto y creo que transporto a nova a otra realidad y NECESITO ENCONTRARLO\n");
    printf("Azriel: Entiendo, de hecho creo que he estado investigando sobre eso, podrias acompaÒarme y podemos encontrar la soluciÛn juntos\n");
    
    decision=0;
    printf("øQuÈ deberÌas hacer?\n");
    printf("1-AcompaÒar a Azriel\n");
    printf("2-Ir a mi departamento\n");
    if (scanf("%d", &decision) != 1) {
            printf("Como es que puedo hacer eso, deberÌa enfocarme y dejar de pensar otras cosas.\n");

            
            while (getchar() != '\n');
            
        }
    
    if(decision==1){
    	printf("Sigue a Azriel hasta su taller a unos cuantas cuadras de donde estabamos \n");
    	incrementarBueno(valores);
    	//guardarPartida(&personajeValores); AQUI DEBERIA DE IR ********
	}else if(decision==2){
		printf("Rysh: Gracias Azriel! pero de verdad tengo que ir a mi apartamento tal vez ahÌ encuentre una soluciÛn\n");
	}else{
		printf("No tengo a donde m·s ir\n");
	}
	
	PresionarA();
	
	float respuestaX;
	if(decision==1){
		printf("Azriel: Mira Rysh, antes de dedicarme a estudiar sobre las galixias,");
		printf("estuve haciendo unos calculos sobre los viajes en el tiempo, logre simplificarla espresiÛn hasta esta simple divison");
		printf(" pero no soy capaz de responderla, saber la respuesta nos ayudara a calibrar una nueva maquina\n");
		
		printf("Encuentra el valor de X en la siguente operaciÛn");
		printf("(3/2x - 1/4 = 20/10) Respuesta: ");
		scanf("%f", &respuestaX);
		
		while(respuestaX != 1.5){
				respuestaX=0;
				printf("Azriel: Esa respuesta no parece hacer mucho sentido, intenta de nuevo\t");	
				scanf("%f", &respuestaX);
			
		
		if(respuestaX == 1.5){
				printf("Azriel: Genial Rysh, nunca desconfie de tu habilidad, eso es un gran paso\n");
				PresionarA();
				break;
			}
		}
	}else if(decision==2){
		int decision2;
		printf("Rysh llega a su departamento el cual esta lleno de notas y resalejado\n");
		printf("Rysh: Hola Wiskas, tamniÈn te extraÒe\n");
		printf("Wiskas: 'Meow'\n");
		printf("Rysh: Muy bien por donde deberÌa empezar a buscar\n");
		printf("1-Mi cuarto\n");
		printf("2-La cocina\n");
		printf("3-La sala\n");
		if (scanf("%d", &decision2) != 1) {
            printf("Como es que puedo hacer eso, deberÌa enfocarme y dejar de pensar otras cosas.\n");

            
            while (getchar() != '\n');
            
        }
        switch(decision2){
        	case 1:
        		printf("Aqui todo esta desorganizado pero encontre algunos calculos tal vez me ayude\n");
        		printf("Inventario de Rysh:\n");
			    printf("Notas\n");
			    cantidadObjetos++;
			    break;
        		
        	case 2: 
        		printf("Aqui cocinaba Nova...\n");
        		incrementarBueno(valores);
        		//guardarPartida(&personajeValores); AQUI DEBERIA IR ******
        		break;
        		
        	case 3:
        		printf("Rysh: No parece haber nada importante aqui, por lo menos no estoy sola...\n");
        		printf("Wiskas: 'Meow'\n");
        		break;
        		
        	default:
        		printf("No se me ha ocurrido ninguna otra opciÛn\n");
		}
		
		if(cantidadObjetos > 0){
			printf("Claro como no se me habÌa ocurrido\n");
			printf("Solo tengo que responder esta ecuaciÛn\n");
			printf("Encuentra el valor de X en la siguente operaciÛn");
			printf("(3/2x - 1/4 = 20/10) Respuesta: ");
			scanf("%f", &respuestaX);
			
			while(respuestaX != 1.5){
					respuestaX=0;
					printf("Esa respuesta no parece hacer mucho sentido, intentare de nuevo\t");	
					scanf("%f", &respuestaX);
				}
			
			if(respuestaX == 1.5){
					printf("Genial, nunca desconfie de mi habilidad, eso es un gran paso\n");
					printf("Wiskas: 'Meow'\n");
					PresionarA();
				}
		}else{
			printf("Tal vez deberÌa preguntarle a Azriel...");
			PresionarA();
			printf("Llamando a Azriel...\n");
			printf("Rysh: Azriel!!! Busque en mi departamento pero no encontre nada, tienes alguna informaciÛn que me pueda ayudar\n");
			printf("Azriel: Rysh, De hecho despuÈs de verte en la calle busque mius calculos anteriores y encontre una ecuaciÛn que tal vez te ayude");
			printf("a calibrar la maquina\n");
			printf("Encuentra el valor de X en la siguente operaciÛn\n");
			printf("(3/2x - 1/4 = 20/10) Respuesta: ");
			scanf("%f", &respuestaX);
			incrementarBueno(valores);
			//guardarPartida(&personajeValores); AQUI DEBERIA IR *******
			
			
			while(respuestaX != 1.5){
					respuestaX=0;
					printf("Esa respuesta no parece hacer mucho sentido, intentare de nuevo\t");	
					scanf("%f", &respuestaX);
				}
			
			if(respuestaX == 1.5){
					printf("Genial, nunca desconfie de mi habilidad, eso es un gran paso\n");
					printf("Wiskas: 'Meow'\n");
					PresionarA();
				}
		}
	}
		
	decision=0;	
	printf("\n");
	printf("Ya tengo la respuesta tengo que volver al laborotorio y reconstruir la maquina\n");
	printf("1-Detenerte y ir al parque\n");
	printf("2-Ir al laborotorio\n");
	 if (scanf("%d", &decision) != 1) {
            printf("Como es que puedo hacer eso, deberÌa enfocarme y dejar de pensar otras cosas.\n");

            
            while (getchar() != '\n');
            
        }
        
	if(decision==1){
		printf("Porque harÌa algo asÌ, siento como si alguien m·s tomara mis decisiones\n");
		incrementarMalo(valores);
	}else if(decision==2){
		printf("Si hire al laboratorio, necesito reencontrar a Nova\n");
		incrementarBueno(valores);
		//guardarPartida(&personajeValores); AQUI DEBERIA IR *********
		
	}else{
		printf("No se me ha ocurrido nada m·s...\n");
	}
	PresionarA();
	
	decision=0;	
	int RecogerPiezas=0;
	int click=0;
	if(golpearContador>0){
		printf("Al abrir la puerta del laboratorio, lo veo todo destruido tal como lo deje, tal vez un poco por haber dado de golpes a la maquina\n");
	}else{
		printf("Al abrir la puerta del laboratorio, lo veo desordenado tal como lo deje\n");
	}
	
	printf("Deberia recoger las piezas y recostruir la maquina\n");
	printf("Presiona 1 para recoger las partes destruidas\n");
	if (scanf("%d", &decision) != 1) {
            printf("Como es que puedo hacer eso, deberÌa enfocarme y dejar de pensar otras cosas.\n");

            
            while (getchar() != '\n');
            
        }
	do{
    if(decision==1){    
    printf("Recogiendo piezas\n");
		RecogerPiezas++;  
		scanf("%d", &click);
		} else{
			printf("Venga deberÌa recoger las piezas\n");
		}
	}while(RecogerPiezas<3);
	
	decision=0;
	int ArreglarMaquina=0;
	printf("Ahora tengo que arreglar la maquina\n");
	
	do{    
    	printf("Arreglando la maquina\n");
		ArreglarMaquina++;  
		scanf("%d", &click);
	}while(ArreglarMaquina<3);
	
	PresionarA();
	float respuesta;
	printf("La maquina empieza a funcionar, se escuchan ruidos y luz sale de la maquina solo falta calibrar la maquina---Resultado:\t");
	scanf("%f", &respuesta);
	
	if(respuesta==1.5){
		printf("El brillo se vuelve m·s y m·s intenso parece una luz y una forma emerger de el\n");
	}else{
		printf("Ahg!!!, trata de recordar, ya sabÌa la respuesta\n");
	}
	
	printf("El cuarto se ilumina y se agita, todo parece moverse, se siente una gran brisa de viento, cuando un destello irrumple, una explosiÛn saca a volar a los aires a Rysh\n ");
	printf("Nova camina lentamente...\n");
	printf("Rysh: Nova!!!\n");
	printf("Nova: Rysh!!!\n");
	    
	incrementarDesicionImportante(valores);
	

}


//oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo//
//oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo//





           //AQUI COMIENZA LA SECCION DE FUNCIONES PARA LA HISTORIA DE NOVA  

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//


//PROLOGO DE LA HISTORIA DE NOVA 

void Prologo() {

    printf("\nCapitulo 1: El Viaje Perdido En La Dimension de Maravillas\n");
    printf("\n");
    printf("En un rincÛn del multiverso, entre pliegues temporales y distorsiones dimensionales\n");
    printf("Un destello cegador envolviÛ a Nova mientras el vÛrtice temporal lo absorvÌa arrastr·ndolo hacia lo desconocido.\n");
    printf("Cuando la luz se desvaneciÛ, Nova emergiÛ en un Celestia alterado, donde las torres familiares se retorcÌan como sombras danzantes\n");
    printf("Las melodÌas familiares del reino resonaban ahora en armonÌas extraÒas, y la magia que antes lo agogÌa con calidez parpadeaba con caprichosa incertidumbre\n");
    printf("Nova, el trovador rom·ntico, se encontraba perdido en el tiempo, en una versiÛn distorsionada de su hogar\n");

    PresionarA();

    printf("\nCon ojos de determinaciÛn, Nova se enfrentÛ a este nuevo paisaje temporal, decidido a desentraÒar los secretos de la dislocaciÛn que lo separÛ de Rysh para poder llegar nuevamente a casa.");
    printf("\nEntre las ruinas de lo que alguna vez fue, el trovador iniciÛ su odisea, adentr·ndose en lo desconocido.\n");

    PresionarA();

    printf("\nMientras Nova se aventuraba por los reinos distorsionados, sus pasos lo llevaron a un rincÛn m·gico donde la realidad se entretejÌa con la fantasÌa. Fue allÌ, entre fragmentos de lo que una vez fue su hogar, que se encontrÛ con una criatura cÛsmica. Una entidad de energÌa destellante, como una constelaciÛn viva, pero que irradiaba una sabidurÌa palpable.\n");
    printf("\nEsta criatura, a pesar de su esencia cÛsmica, no carecÌa de conocimiento ni sentido com˙n. Sus palabras resonaban como melodÌas ancestrales, revelando fragmentos de la verdad entrelazada con las distorsiones temporales. Nova, asombrado y cautivado, se sumergiÛ en el di·logo con esta entidad, buscando respuestas entre sus misteriosas luminiscencias\n");

    PresionarA();

}


//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//


//øQue deberias hacer con la creatura cosmica?


void DecisionPrimera(NovaValores *valores) {
    int decision;

    printf("\nøQuÈ deberÌas hacer?\n");

    do {
        printf("1-Entablar amistad con la criatura\n");
        printf("2-Interrogar agresivamente a la criatura\n");
        scanf("%d", &decision);
        LIMPIAR_CONSOLA();
    } while (decision != 1 && decision != 2);

    if (decision == 1) {
        printf("Ganas la confianza de la criatura, quien te guÌa hacia unas antiguas ruinas temporales...\n");
        // aquÌ quiero aumentar la lealtad
        incrementarBueno(valores);
        PresionarA();
    } else if (decision == 2) {
        printf("La criatura empieza a crecer y crecer expulsando gas cÛsmico por todo su cuerpo...\n");
        PresionarA();

        printf("\nøQuieres interrogar a la criatura de nuevo? o Prefieres Entablar amistad con ella.\n");
        do {
            printf("\n1-Entablar amistad con la criatura\n");
            printf("\n2-INTERROGAR AGRESIVAMENTE A LA CRIATURA UNA VEZ M¡S!!!\n");
            scanf("%d", &decision);
            LIMPIAR_CONSOLA();
        } while (decision != 1 && decision != 2);

        if (decision == 1) {
            printf("\nEstuvo mal lo que hiciste, pero en tu corazÛn hay algo de redenciÛn\n");
            printf("\nAsÌ, con determinaciÛn y la esperanza de restaurar su esencia perdida, Nova se embarcÛ en un viaje interno hacia la redenciÛn, disculp·ndose y llevando consigo la posibilidad de que, quiz·s, a˙n quedara un poco de bondad en su ser.\n");
            incrementarMalo(valores);
            PresionarA();
        } else if (decision == 2) {
            printf("\nTe est·s convirtiendo en un monstruo....\n");
            PresionarA();
            printf("\nLa criatura cansada de tu comportamiento se prepara para lanzarte un rayo fulminante\n");
            PresionarA();
            printf("No tienes tiempo para dudar. Debes elegir entre las opciones 1 o 2.\n");
            do {
                printf("\n1-Borrar a la criatura de la existencia con un truco de magia\n");
                printf("\n2-Pedir perdÛn y hacer como que nada pasÛ\n");
                scanf("%d", &decision);
                LIMPIAR_CONSOLA();
            } while (decision != 1 && decision != 2);

            if (decision == 2) {
                incrementarMalo(valores);
                printf("\nTe vas....... con un muy mal sabor de boca\n");
                PresionarA();
            } else if (decision == 1) {
                printf("\nEn el inmenso lienzo del cosmos, un ser cÛsmico, impregnado de sabidurÌa ancestral, alcanzÛ el ocaso de su existencia. Su luz, que habÌa iluminado incontables galaxias, comenzÛ a desvanecerse, pero en lugar de extinguirse, se dispersÛ en una danza cÛsmica. Este ser, en su muerte, no desapareciÛ, sino que se entrelazÛ con el universo mismo.\n");
                PresionarA();
                printf("\nLas partÌculas de su esencia se fundieron con la materia estelar, las nebulosas y los confines del espacio infinito. Se convirtiÛ en una sinfonÌa de energÌa que resonaba en cada rincÛn del cosmos. Ahora, el ser cÛsmico era la esencia de las estrellas, la melodÌa de la creaciÛn, y su legado perduraba en la trama misma del universo, record·ndonos que, en la muerte, se habÌa vuelto uno con el tejido eterno del cosmos.\n");
                PresionarA();
                printf("\nLos ojos de Nova empiezan a tornarse de un oscuro rojo carmesÌ, como si de la luna de sangre se tratase....)\n");
                PresionarA();
                incrementarCataclismo(valores);
            }
        }
    }
}




//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//



//El jugador presiono A dentro de (Void Decision 1)


void EleccionA(NovaValores *valores) {
    int decision2;

    printf("\nEn la penumbra de las antiguas ruinas temporales, las paredes de piedra estaban adornadas con inscripciones de un lenguaje olvidado. La criatura cÛsmica guiaba a Nova, cada paso resonaba con ecos de la historia que se tejÌa en los rincones del tiempo. Entonces decides....\n");

    do {
        printf("\n1-Investigar dentro de la cueva por algo que crees podrÌa ser la clave para ir a casa.\n");
        printf("\n2-Armarse de valor, todavÌa no est·s listo para entrar.\n");
        scanf("%d", &decision2);
        LIMPIAR_CONSOLA();
    } while (decision2 != 1 && decision2 != 2);

    if (decision2 == 1) {
        printf("Entre las ruinas yacen misteriosos artefactos, Nova siente una resonancia en su ser mientras se acerca a ellos. Un instinto ancestral le susurra que estos objetos podrÌan ser la clave para restaurar el portal y regresar a Rysh. El brillo de cada artefacto parece contar una historia olvidada, y Nova, guiado por esa intuiciÛn cÛsmica, se prepara para desentraÒar los secretos que podrÌan tejer el regreso a su hogar a travÈs de las distorsiones temporales.\n");
        incrementarBueno(valores);
        PresionarA();
    } else if (decision2 == 2) {
        incrementarMalo(valores);
        printf("\nUna piedra m·gica, con una expresiÛn humana tallada en su superficie, susurra en un dialecto ancestral\n");
        printf("\nEl templo temporal es un lugar misterioso lleno de pruebas y desafÌos. No es un lugar para cobardes.\n");
        PresionarA();
        printf("\nDas un gran respiro de angustia y entras ....\n");
        PresionarA();
        printf("Entre las ruinas yacen misteriosos artefactos, Nova siente una resonancia en su ser mientras se acerca a ellos. Un instinto ancestral le susurra que estos objetos podrÌan ser la clave para restaurar el portal y regresar a Rysh. El brillo de cada artefacto parece contar una historia olvidada, y Nova, guiado por esa intuiciÛn cÛsmica, se prepara para desentraÒar los secretos que podrÌan tejer el regreso a su hogar a travÈs de las distorsiones temporales.\n");
        PresionarA();
    }
}


//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//


void Artefactos(NovaValores *valores) {
    int decisionTres;
    int susurro;

    printf("\nEntre todos esos objetos te percatas de uno en particular que emana un brillo m·s fuerte que 10 enanas gigantes juntas\n");
    PresionarA();
    printf("\nUna voz en tu cabeza est· dispuesta a contarte m·s acerca de cada objeto que hay por aquÌ\n");
    PresionarA();
    printf("\nøQuieres saber m·s de esta extraÒa dimensiÛn?\n");
    PresionarA();
    printf("\n1- SÌ, por quÈ no, A Rysh le encantar· saber m·s sobre estos artefactos m·gicos cuando llegue a casa\n");
    printf("\n(Si es que llego ....)\n");
    printf("\n2- No... Hora de marcharse de aquÌ\n");
    printf("\nEntonces.... øQuÈ quieres hacer?\n");

    do {
        scanf("%d", &decisionTres);
        LIMPIAR_CONSOLA();
    } while (decisionTres != 1 && decisionTres != 2);

    if (decisionTres == 1) {
        incrementarBueno(valores);
        printf("\nEntre los susurros de la penumbra, voces mÌsticas se alzan y te preguntan con susurros ancestrales: øQuÈ historia deseas que tejamos en el tapiz del tiempo para ti? La esencia del misterio danza en sus palabras, aguardando la elecciÛn que resonar· en el eco eterno de las narrativas celestiales.\n");
        PresionarA();

        do {
            printf("\nPresiona 1 para escuchar la historia de El Espejo de las Almas Entrelazadas:\n");
            printf("\nPresiona 2 para escuchar la historia de El C·liz de las L·grimas Celestiales\n");
            printf("\nPresiona 3 para escuchar la historia de La Pluma del Tiempo Olvidado\n");
            printf("\nPresiona 4 para escuchar la historia de El Orbe de los SueÒos Olvidados\n");
            printf("\nRealmente quiero encontrar la forma de llegar a casa... y encontrar a Rysh por supuesto (Nova pensÛ)\n");
            printf("\nPresiona 5 para continuar\n");
            printf("\n(Rysh habrÌa quedado a investigar 1 por 1, pero, yo no soy como ella, no me parezco en lo absoluto a ella)\n");
            scanf("%d", &susurro);
            LIMPIAR_CONSOLA();

            switch (susurro) {
                case 1:
                    printf("Entre las ruinas, Nova descubre un antiguo espejo que emana una luz tenue pero intrigante. Al mirarse en Èl, se da cuenta de que no refleja su propia imagen, sino las vivencias de seres de diferentes Èpocas y mundos. Cada figura atrapada en el espejo cuenta una historia ˙nica y olvidada: amores perdidos, hÈroes caÌdos y reinos que ya no existen. Nova se sumerge en la mirada de esas almas entrelazadas, buscando pistas para desentraÒar los secretos del portal.\n");
                    PresionarA();
                    incrementarSabiduria(valores);
                    break;

                case 2:
                    printf("En una esquina de la sala de reliquias, Nova encuentra un c·liz delicadamente tallado. Al tocarlo, experimenta visiones de deidades llorando l·grimas de esperanza y desesperaciÛn. Cada l·grima contiene la esencia de un mundo diferente, y Nova siente la carga emocional de aquellos que han sufrido y soÒado a lo largo de los siglos. Determinado, recoge el c·liz, sintiendo que las l·grimas celestiales pueden tener el poder de abrir un camino de regreso a su hogar.\n");
                    PresionarA();
                    incrementarSabiduria(valores);
                    break;

                case 3:
                    printf("Una pluma antigua descansa en un pedestal, sus destellos revelan una conexiÛn con el fluir del tiempo. Al sostenerla, Nova es inundado por historias de eventos pasados y futuros. Cada trazo de la pluma parece narrar momentos de grandeza y tragedia, eventos que han sido borrados de la memoria colectiva. Nova reflexiona sobre cÛmo este artefacto podrÌa ser clave para deshacer las distorsiones temporales y restaurar la continuidad perdida.\n");
                    PresionarA();
                    incrementarSabiduria(valores);
                    break;

                case 4:
                    printf("Un orbe mÌstico se revela entre los escombros, y al acercarse, Nova es envuelto por visiones onÌricas. Cada sueÒo atrapado en el orbe cuenta historias de ambiciones, miedos y esperanzas que se han desvanecido en el tiempo. Mientras Nova explora estos fragmentos de sueÒos olvidados, se da cuenta de que el orbe podrÌa ser la clave para entender las distorsiones dimensionales y encontrar el camino de regreso a casa. Con determinaciÛn, Nova recoge el orbe, listo para enfrentar los desafÌos que le depara el futuro.\n");
                    PresionarA();
                    incrementarSabiduria(valores);
                    break;

                case 5:
                    printf("\nPasas todos los secretos y sabidurÌa que podrÌas haber adquirido...., si los obtuviste bien por ti!\n");

                    PresionarA();

                    printf("\nTocas el objeto luminoso y ....\n");

                    PresionarA();

                    break;

                default:
                    printf("No creo que esa historia existe....");

                    PresionarA();

                    continue;

            }
        } while (susurro != 5 || (susurro < 1 || susurro > 5));
    } else {
        // CÛdigo para la opciÛn 2 (No explorar m·s)
    }
}




//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//


void epilogoFinal(){

    
    printf("\nNova, con valentÌa inquebrantable, extiende su mano hacia el objeto brillante m·gico.\n");

    PresionarA();

    printf("\nEn el momento en que sus dedos tocan la superficie resplandeciente, un vÛrtice de energÌa mÌstica se desencadena\n");

    PresionarA();

    printf("\nEl objeto es absorbido por una luz deslumbrante que lo eleva a los cielos, como si una fuerza cÛsmica lo hubiera reclamado.\n");

    PresionarA();

    printf("\nDe repente, el vÛrtice se retuerce y en su epicentro, Nova es atrapado por una fuerza invisible. La energÌa lo envuelve, y sus formas se desintegran en ·tomos, disolviÈndose en el mismo Èter celestial.\n");

    PresionarA();

    printf("\nEl silencio reina en los cielos antes de que el vÛrtice estalle en un estallido de luz, como un Big Bang m·gico que redefine la realidad.\n");



    PresionarA();

    printf("\nEn el instante siguiente, Nova se encuentra en el vacÌo del espacio, flotando solo en la inmensidad cÛsmica. No hay nada a su alrededor, solo la oscuridad infinita y estrellas distantes que parpadean como testigos silenciosos de su viaje a travÈs de dimensiones desconocidas. Sin un rastro del objeto brillante m·gico ni de su anterior realidad, Nova se enfrenta a un nuevo y desconcertante capÌtulo en su aventura.\n");

    PresionarA();

    printf("\nAsi, qUe, Essste.... es el......\n");

    PresionarA();

    printf("\nFii, fii, nal..... øNo es asi?....\n");

    PresionarA();

    printf("\nA travÈs de eones insondables, Nova quedÛ atrapado en un bucle existencial en el vasto espacio. Sin comprender cÛmo podÌa respirar en la ausencia de aire, parecÌa envuelto en una especie de m·quina criogÈnica cÛsmica, suspendido entre la realidad y la ilusiÛn. Los recuerdos de su pasado se desvanecÌan gradualmente, erosionados por el tiempo que transcurrÌa como un flujo eterno en el vacÌo interminable.\n");

    PresionarA();

    printf("\nEn medio de la nada, sin referencia alguna, solo persistÌa un eco lejano de su identidad: Rysh, un recuerdo que resistÌa la erosiÛn temporal. Como un faro dÈbil en la oscuridad de la eternidad, la presencia de Rysh se aferraba a las sinapsis de su mente, como si fuera un ancla en la realidad que una vez conociÛ.\n");

    PresionarA();

    printf("\nDe repente, la insondable nada que lo envolvÌa comenzÛ a brillar con una intensidad deslumbrante. El resplandor creciÛ hasta convertirse en una explosiÛn de luz que, de manera feroz y desafiante, lo expulsÛ de vuelta a la existencia tangible. Nova, confundido y aturdido, emergiÛ de entre las estrellas en el mismo lugar donde Rysh estaba, como si el tiempo y el espacio hubieran tejido sus destinos de nuevo en un intrigante patrÛn cÛsmico.\n");

    PresionarA();

    printf("\nRysh: Nova!!!\n");
	printf("\nNova: Rysh!!!\n");





};

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//

// Este es el camino que Nova toma si decide asesinar a la creatura
//Eventualmente se conectara con la historia principal 

void calaMidad(){

    printf("\nNova empezo a correr....\n");

    PresionarA();

    printf("\nBajo un cielo nocturno desconocido, sus pasos resonaban en un suelo extraÒo mientras corrÌa sin rumbo, llevando consigo el peso de un arrepentimiento que no se traducÌa en lamentos.\n");

    PresionarA();

    printf("\nCada paso era un laberinto que reflejaba su b˙squeda de redenciÛn, sin embargo, su mirada era firme, sin vacilaciÛn ni remordimiento por las elecciones que lo llevaron a ese lugar sin mapa.\n");

    PresionarA();

    printf("\nEn la penumbra, su carrera sin destino parecÌa ser el ˙nico camino hacia la liberaciÛn de un pasado del cual no huÌa, sino que abrazaba con aceptaciÛn serena.\n");

    PresionarA();

    printf("\nEncuentras unas ruinas temporales, pero con una oscuridad tremenda....\n");

    PresionarA();

    printf("\nEntras, a lo lejos ves un objeto luminoso, pero parece como si fuera un laberinto...\n");

    PresionarA();


    

};


//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//

// FunciÛn para imprimir descripciones
void imprimirDescripcion(int cercania) {
    if (cercania == 0) {
        printf("Est·s lejos de la luz\n");
        PresionarA();
    } else {
        printf("Est·s cerca de la luz\n");
        PresionarA();
    }
}


//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//


void explorarLaberinto() {
    int posicion = 0;
    int cercania = 0;

    printf("\nNo hay mucho tiempo que perder, corres y corres viendo las intersecciones que tienes por delante\n");

    // Aumenta el tamaÒo del laberinto
    while (1) {
        printf("\nTe encuentras en una intersecciÛn. øHacia dÛnde deseas ir? (1: Izquierda, 2: Derecha)\n");
        int eleccion;
        scanf("%d", &eleccion);

        switch (eleccion) {
            case 1:
                // Mover hacia la izquierda
                posicion--;
                break;
            case 2:
                // Mover hacia la derecha
                posicion++;
                break;
            
            default:
                printf("\nTienes miedo, la oscuridad te carcome\n \nPor favor, elige 1, 2\n");
                PresionarA();
                continue;  // Reiniciar el bucle
        }

        // Actualizar la cercanÌa seg˙n la posiciÛn actual
        cercania = (posicion >= -2 && posicion <= 2) ? 1 : 0;

        // Imprimir descripciÛn
        imprimirDescripcion(cercania);

        // Verificar si se ha alcanzado la salida (puedes cambiar esta condiciÛn)
        if (cercania && posicion == 0) {
            printf("\nLlegas a la luz, y ves artefactos luminecentes esparcidos por el suelo\n");

            PresionarA();
            break;
        }
    }
};






//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//


//AQUI TERMINA LA SECCION DE FUNCIONES PARA LA HISTORIA DE NOVA







//...........................................................................................//
//...........................................................................................//



int main () {

//--------------------------------------------------------------------------------------------------------

//                     MENU DE OPCIONES 
	setlocale(LC_CTYPE,"Spanish");

     NovaValores misValores = {0, 0, 0, 0};

	
	time_t inicio, fin;
	time(&inicio);

    int menu;
    char nombre[50];
	printf("MENU RYSH & NOVA\n\n");
	printf("1-Jugar\n");
	printf("2-Salir\n");
   do {
        printf("Ingrese un n˙mero (1 o 2): ");
        if (scanf("%d", &menu) != 1) {
            // Manejo de error si no se ingresa un n˙mero
            printf("Entrada no v·lida. Por favor, ingrese un n˙mero.\n");
            // Limpiar el b˙fer del teclado
            while (getchar() != '\n');
            continue;  // Volver al inicio del bucle
        }

        if (menu != 1 && menu != 2) {
            printf("N˙mero inv·lido. Por favor, ingrese 1 o 2.\n");
        }

    } while (menu != 1 && menu != 2);

	switch(menu){
		case 1:
		    printf("Dame tu nombre jugador\n");
		    scanf("%s", &nombre);
			prologoRyshYNova();
	
			printf("RYSH & NOVA\n\n");
	
			Rysh(&misValores);

            printf("\nDebido a la radiacion cosmica de Nova, activas los recuerdos que vivio en el portal.....\n");

            PresionarA();

            printf("\nVarios Eones en el pasado\n");

            PresionarA();

            //AQUI INICIA LA HISTORIA DE NOVA

            // 1
            Prologo();
            // 2
            DecisionPrimera(&misValores);
            // 3 
            if (misValores.cataclismo == 1){

                 calaMidad();

                if (misValores.cataclismo == 1){

                explorarLaberinto();


                    }
        

            //De aqui te lleva a void artefactos linea 269

            } else {
            EleccionA(&misValores);
             }
             // 4 prefinal
            Artefactos(&misValores);

             //Final 
             epilogoFinal();

             
    //AQUI INICIA EL FINAL DE LA HISTORIA 
    if(misValores.cataclismo == 1){

        printf("\nLa distorsiÛn temporal ha causado estragos en Celestia. Nova y Rysh deben actuar para restaurar la armonÌa.\n");

       PresionarA();

       printf("\nNova, con su profunda conexiÛn m·gica, descubre un hechizo antiguo que podrÌa restaurar la realidad.\n");

       PresionarA();

       printf("\n Pero.... ALGO ESTA MAL\n");

       printf("\nMUY MUY MAL\n");

       PresionarA();

       printf("\nAl querer realizar el hechizo los ojos de Nova empiezan a sangrar\n");

       PresionarA();

       printf("\n Voces cosmicas empiezan a susurrar....\n");

       printf("\nTU TE LO BUSCASTE, TU LO MATASTE\n");

       PresionarA();

       printf("\n Rysh: No entiendo Nova, que esta pasando??\n");

       printf("\nNova: Nn... No, no lo entenderias, tuve que hacerlo, no tuve opcion, mis instintos me llevaron a...\n");

       PresionarA();

       printf("\nUn estruendo sacude el cielo, es la creatura que antes habias matado con magia\n" );

       PresionarA();

       printf("\nDestruye todo celestia y a sus habitantes\n");

       PresionarA();

       printf("\nNova en un intento de redencion y con su ultimo aliento de magia salva a Rysh, sacrificandose en el proceso, dejando a Rysh varada en el tiempo, donde morira sola, sin nadie.......\n");

       PresionarA();

       printf("\n Gracias por jugar.........%s\n\n", nombre);




    } else{

    printf("\nLa distorsiÛn temporal ha causado estragos en Celestia. Nova y Rysh deben actuar para restaurar la armonÌa.\n");

    PresionarA();
  
    printf("\nNova, con su profunda conexiÛn m·gica, descubre un hechizo antiguo que podrÌa restaurar la realidad.\n");

    PresionarA();

    // Di·logo especial si Nova tiene +4 de sabidurÌa

    if (misValores.sabiduria >= 4) {
        printf("Nova: Rysh, mientras estaba atrapada en la Cueva Temporal, vi artefactos m·gicos asombrosos. "
               "Creo que esta sabidurÌa puede ayudarnos en nuestra misiÛn.\n");
    } else {
        printf("Nova: Rysh, entiendo tus dudas, pero este hechizo es nuestra mejor esperanza. ConfÌa en la magia.\n");
    }

    PresionarA();
    
    
    printf("Rysh: No estoy segura de que esto funcione, Nova. La tecnologÌa es m·s confiable.\n");

    
    PresionarA();



    // Verifica el resultado
    if (misValores.bueno > misValores.malo) {

        
        printf("\nDe alguna manera m·gica, las energÌas acumuladas a lo largo de las buenas acciones de Rysh y Nova resonaron con el hechizo. La luz dorada que emanaba de ellas parecÌa entrelazarse con los hilos del tiempo, tejiendo una nueva realidad.\n");

        PresionarA();

        printf("El hechizo, en lugar de desencadenar caos, revelÛ una visiÛn esperanzadora.");

        PresionarA();

        printf("\nRysh: (asombrada) Nova, Nuestras acciones, nuestras elecciones, han resonado en el tejido mismo del tiempo, no imagine que esto fuera posible, esto es algo incalculable.\n");

        PresionarA();

        printf("\nNova: (sonriendo) Parece que, de alguna manera, la magia del bien ha influido en el resultado. Nuestro viaje ha sido arduo, pero ahora tenemos la oportunidad de escribir un nuevo capÌtulo.\n");

        PresionarA();

        printf("\nEl portal resplandeciÛ con una luz c·lida y reconfortante, mostrando un camino de regreso a su hogar. Rysh y Nova, gracias a sus buenas acciones y nobleza de espÌritu, lograron desafiar las expectativas del destino y abrir una puerta hacia un futuro lleno de promesas.\n");

        PresionarA();

        printf("°Gracias por jugar! %s\n\n", nombre);

        PresionarA();

    } else {
        printf("A pesar de sus esfuerzos, el hechizo no tiene el impacto deseado y las distorsiones temporales persisten.\n");

        PresionarA();

        printf("\nCelestia es envuelta por penumbras cosmicas, y es absorvida a otra dimension donde la magia ya no existe y las matematicas son nulas");

        PresionarA();

        printf("\nRysh: (susurrando) Hemos perdido todo, Nova. El tiempo nos ha arrebatado el hogar que una vez conocimos.\n");

        PresionarA();

        printf("\nSe acabo....");

        PresionarA();

        printf("\n°Gracias por jugar! %s\n\n", nombre);


        PresionarA();
        }
        
    }






    // Mostrar los valores actualizados
    printf("Malo: %d, Bueno: %d, Cataclismo: %d, Sabiduria: %d\n", misValores.malo, misValores.bueno, misValores.cataclismo, misValores.sabiduria);




			break;
			
	
		case 2:
			printf("Saliendo de la consola...\n");
    		exit(0);
    		break;
    	default:
    		printf("Hecho por AndrÈs Esquivel y Rodrigo Juarez");
    		break;
			
        
	}


    time(&fin);
	double tiempo_pasado = difftime(fin, inicio);
    printf("El usuario pasÛ %.2f segundos en la consola.\n", tiempo_pasado);

    return 0;
}
