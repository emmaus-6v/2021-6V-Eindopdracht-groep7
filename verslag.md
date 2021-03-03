# Verslag eindopdracht 6V
### gemaakt door Anass, Bryan, Moos, Wessel, Stan, Sem, Koen

---

## Inleiding
Hieronder willen we uitleggen hoe we dit project hebben aangepakt. Eerst leggen we uit met welke ideeën we zijn gekomen in de
eerste paar lessen en hoe we dat in de praktijk hebben gemaakt. Daarna geven we de uitvoering in de vorm van sprints. 
Vervolgens vertellen zien hoe de technische kant van de knikkerbaan in zijn werk gaat. Als laatste doen we per persoon de reflectie.


## Idee
Ons idee was om een knikkerbaan te maken waarbij de knikkers verschillende paden kunnen volgen. Daarom splitst de baan al 
in het begin op en in het midden weer. We kwamen ook op het idee een ronde 'trechter' te maken zoals je die in waterparken
vaak ziet. Dat hebben we nagemaakt met de bovenkant van een fles. We wilden daarnaast ook elektronische apparaten integreren
in ons project. We hebben gekozen voor 3 infraroodsensoren die kijken of er een knikker langskomt en 3 motortjes die openingen
open of dicht kunnen maken.


## Planning en daadwerkelijke uitvoering
Onze opdracht is als volgt gepland: 

### sprint 3
Hier wilden we een begin hebben gemaakt aan de Arduino en de widget

### sprint 4
Sprint 4 was dat de baan af moest zijn, exclusief de elektronische apparaten. De Arduino moest al gevorderd zijn om de apparaten te kunnen aansturen.
De widget moest gegevens kunnen weergeven. Ook wilden we aan de server beginnen, maar dat bleek moeilijker dan gedacht: er viel veel uit te zoeken.

### sprint 5
Hier wilden we beginenn aan de databse om de server te kunnen ondersteunen. De Arduino moest af zijn om de apparaten afzonderlijk te kunnen testen.
De widget moet volmaakt zijn. 

### sprint 6
De baan moest af zijn, inclusief elektronische apparaten. De Arduino moest kunnen communiceren met de server en de server met de widget.
De database moest ook af zijn.


## Technische verantwoording
Ons communicatieprotocol werkt zo:
- De knikker komt van boven en een motortje beweegt een houten plank met een random tick wat bepaalt of het balletje naar links of naar rechts gaat.
- Vervolgens valt het balletje naar een van de zijkanten waar weer een motortje een houten plankje draait met een random tick. Gaat de knikker naar binnen, dan komt het bij de trechter en valt het door het gat.
- Gaat de knikker links (vanaf het vooraanzicht), dan gaat deze via een slalom naar beneden. 
- Gaat de knikker naar rechts (vanaf het vooraanzicht), dan komt de knikker in een vrije val waar zijn gemiddelde snelheid wordt gemeten tussen twee infrarood sensoren.
- Vanaf de buitenkant komen de knikker weer naar het midden.



## Reflectie
#### Anass
Ik vond dat de communicatie in een groep een positief effect heeft gehad op ons eindproject van informatica. Door de groepsapp konden we gemakkelijk met elkaar onze taken verdelen en verder communiceren. Verder vond ik dat de planning redelijk goed ging, behalve af en toe wat stroefheden met het inplannen van het coderen en de toetsen tussendoor. Toch is het wel degelijk gelukt om er wat nuttigs van te maken en heeft iedereen een eerlijke bijdrage geleverd aan het project. Verder was er ook onderlinge samenwerking en hielpen we elkaar met elkaars taken, zo had ik bijvoorbeeld meegeholpen aan het snijden van de plankjes en het maken van de knikkerbaan tijdens mijn vrije tussenuur en had Bryan mij en Wessel ook op een effectieve manier geholpen met arduino.

#### Bryan
<<<<<<< HEAD
Het traject die we hebben afgelegd om de deadline te halen, verliep niet zoals ik het had gewild. Ik vond de groepsopdracht zelf erg lastig maar door de hulp van Wessel, Koen en Anass kwam ik uiteindelijk toch wel uit. Ik heb ook echt mijn best gedaan en veel tijd erin gestopt om het uiterste uit mezelf te halen. Gelukkig verliep door middel van communicatie via onze Whatsapp groepsapp de onderlinge samenwerking wel goed in ons groepje. Koen, wessel en ik gingen bijvoorbeeld vaak facetimen hiervoor. Ook verdeelden we In die groepsapp  bijvoorbeeld de taken over wie wat deed. Zo ben ik een paar keer speciaal naar school gegaan om te werken aan het informatica project en ook tijdens de tussenuren. Ik heb toen onder andere samen met Anass, Sem en Moos de knikkberbaan geschetst op de plank en vervolgens gebouwd met de materialen van het ht-lokaal. We kwamen echter later erachter dat de knikkerbaan niet helemaal juist was. Hierom besloten Wessel en ik vóór de herfstvakakntie de knikkberbaan te herbouwen naar behoren. Daarnaast heb ik Anass geholpen met de code van arduino en vaak gecommuniceerd met Wessel en Koen over het maken van de widget en server. We kwamen hier echter niet helemaal uit en vonden het lastig om dat te coderen ondanks wij uitlegfilmpjes hadden bekeken van u. Wat ik erg jammer vond, was dat sommige mensen uit ons groepje niet meedachten met het verzinnen van ideeën en niet hielpen met het maken van de code, waardoor ik en een paar andere mensen meer last hadden en meer moesten doen. kortom, naar mijn mening was dit een lastige groepsopdracht, lag de moeilijkheidsgraad hoog en waren de taken niet eerlijk verdeeld. Desondanks hebben wij door middel van samenwerking ons best gedaan en geprobeerd om toch iets moois van te maken.
=======
Het traject dat we hebben afgelegd om de deadline te halen, verliep redelijk. We hebben het uiterste uit onszelf gehaald en door middel van communicatie via onze Whatsapp groepsapp verliep de onderlinge samenwerking goed in ons groepje. In die groepsapp verdeelden we bijvoorbeeld de taken over wie wat deed. Zo ben ik een paar keer speciaal naar school gegaan om te werken aan het informatica project en ook tijdens de tussenuren. Ik heb toen onder andere samen met Anass, Sem en Moos de knikkberbaan geschetst op de plank en vervolgens gebouwd met de materialen van het ht-lokaal. We kwamen echter later erachter dat de knikkerbaan niet helemaal juist was. Hierom besloten Wessel en ik vóór de herfstvakakntie de knikkberbaan te herbouwen naar behoren. Daarnaast heb ik Anass geholpen met de code van arduino en vaak gecommuniceerd met Koen over de widget en server. We kwamen hier echter niet helemaal uit en vonden het lastig om dat te coderen ondanks wij uitlegfilmpjes hadden bekeken van u. Kortom, naar mijn mening was dit een lastige groepsopdracht en lag de moeilijkheidsgraad hoog. Desondanks hebben wij door middel van samenwerking ons best gedaan en geprobeerd om toch iets moois van te maken.
>>>>>>> 83bde40b292c31f35ff3a9f79d0e7515da7bd8d5

#### Moos

#### Wessel
Ik ben zelf niet tevreden met het eindresultaat. Door verschillende omstandigheden is het niet goed gegaan en is het eindresultaat zeker niet goed. We hadden een leuk idee, maar de uitvoering was er niet of nauwelijk. Het lukte niet iedereen om zijn taak (soms moedwillig) uit te voeren waardoor de verhoudingen in wie wat deed scheef liepen, zonde. Iets om van te leren...

#### Stan

#### Sem
In dit project hebben wij aan een knikkerbaan gewerkt. Er was veel samenwerking tussen alle personen. Ook hadden wij een persoon in ond groepje die in een andere klas zit. Dit zorgde ervoor dat het iets lastiger was om met die gene te communiceren, maar door middel van een groepsapp hebben wij veel en goed gecommuniceerd met elkaar en konden we dit zo oplossen. We hebben elkaar erg geholpen waar er moeilijkheden waren en hebben elkaars vragen beantwoord. Het was lastig om genoeg tijd te besteden aan het bouwen in het handvaardigheid lokaal. Doordat er niet heel veel momenten waren wanneer je in dit lokaal kon werken en niet iedereen op elk moment kon was dit lastig. We hebben dit alleen wel weten op te lossen doordat er ook andere mensen in het groepje een beetje aan de baan konden werken als iemand niet aanwezig kon zijn. Ik had zelf de taak om de knikkerbaan te bouwen. Samen met hulp van Bryan, Moos en Anass heb ik een aardige tijd in het handvaardigheid lokaal gespendeerd om de plankjes in de juiste formaten te zagen en ze goed te plaatsen. Achteraf bleek het nog niet helemaal goed te zijn en hebben Wessel en Bryan dit aangepast. De samenwerking tussen iedereen is eigenlijk erg goed verlopen door de groepsapp. Iedereen heeft goed zijn best gedaan en zijn eigen taak uitgevoerd.

#### Koen
De samenwerking vond ik redelijk gaan. De groepsapp hielp in de communicatie, maar eigenlijk zaten we niet allemaal op dezelfde 'golflengte'. 
Ik denk dat dit vooral komt door corona, waardoor we elkaar niet met zijn allen tegelijk konden spreken. Het werd op deze manier moeilijk om de verschillende takken waaraan we werkten te synchroniseren. 
Het feit dat Moos in de andere klas zit hielp ook niet echt. Een voorbeeld van de matige communicatie is dat de knikkerbaan eerst verkeerd is gemaakt. Dat komt doordat de schets niet duidelijk was, maar ook
doordat er niet goed is meegeluisterd door degenen die dat moesten maken. Dat was jammer en kostte tijd. De reden voor deze fout is volgens mij een gebrek aan inzet. De opdracht zelf vond ik wel enrom leuk. 
In zo'n opdracht kan je echt laten zien wat je de afgelopen jaren geleerd hebt, ondanks dat het een redelijk groot en moeilijke opdracht was. Het concept van een knikkerbaan vond ik ook origineel en het zorgde 
ervoor dat je je ideeën de vrije loop kon laten gaan en leuke constructies kon maken. 

## Slot
Het is helaas niet geworden wat we gehoopt hadden toen we hier aan begonnen. Het idee was er, de uitvoering wat minder.