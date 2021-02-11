using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SubScript : MonoBehaviour
{

    public GameObject textBox;
    public bool subDec = true;
    public Button switchSub;
    public GameObject BackgroundSub;

    Animator toggle_an;

    void Start()
    {
        toggle_an = switchSub.GetComponent<Animator>();
    }


    void Update()
    {
        if (subDec == false)
        {
            
        }
        if (subDec == true)
        {
            
        }

    }

    

    public void MyFunction()
    {
        StartCoroutine(TheSequence());
    }

    IEnumerator TheSequence()
    {
        yield return new WaitForSeconds(1);
        textBox.GetComponent<Text>().text = "Welkom bij het journaal, op dinsdag 19 februari werd het lichaam gevonden van auteur, columniste en activiste Maya Hendrickx";
        yield return new WaitForSeconds(8);
        textBox.GetComponent<Text>().text = "";
        yield return new WaitForSeconds(1);
        textBox.GetComponent<Text>().text = "schijnbaar vermoord, in een bushokje op vijftig meter van haar woning in Deurne.";
        yield return new WaitForSeconds(5);
        textBox.GetComponent<Text>().text = "Hendrickx stond erom bekend de blanke gemeenschap een geweten te willen schoppen";
        yield return new WaitForSeconds(5);
        textBox.GetComponent<Text>().text = "door in debatten en opiniestukken te hameren op het onrecht dat de zwarte medemens aangedaan wordt.";
        yield return new WaitForSeconds(6);
        textBox.GetComponent<Text>().text = "Voorlopig wordt Maarten V. aangehouden en in verdenking gesteld van moord";
        yield return new WaitForSeconds(5);
        textBox.GetComponent<Text>().text = "De man zou haar maandenlang belaagd hebben met berichten met racistische en seksitische ondertoon, bevestigt het parket.";
        yield return new WaitForSeconds(7);
        textBox.GetComponent<Text>().text = "";//Hier zijn de comments
        yield return new WaitForSeconds(17);
        textBox.GetComponent<Text>().text = "Hij sleurde haar mee in de struiken van het voetpad.";
        yield return new WaitForSeconds(3);
        textBox.GetComponent<Text>().text = "Ze keek hem aan met opengesperde ogen als een hert gevangen in het licht van koplampen.";
        yield return new WaitForSeconds(6);
        textBox.GetComponent<Text>().text = "Zijn handen omsloten haar nek. Ze spartelde tegen en klauwde met haar vingers naar zijn gezicht.";
        yield return new WaitForSeconds(6);
        textBox.GetComponent<Text>().text = "Hij zag haar vechten als een leeuwin, vechten voor haar leven, spartelend met de armen en benen.";
        yield return new WaitForSeconds(7);
        textBox.GetComponent<Text>().text = "Maar Maarten zijn lijf was sterker.";
        yield return new WaitForSeconds(3);
        textBox.GetComponent<Text>().text = ""; //Voetstappen
        yield return new WaitForSeconds(8);
        textBox.GetComponent<Text>().text = "In blinde paniek liep hij weg van het lichaam. Terug naar zijn huis."; 
        yield return new WaitForSeconds(5);
        textBox.GetComponent<Text>().text = "Hij zette de computer aan en werd rustig van het zoemende geluid.";
        yield return new WaitForSeconds(4);
        textBox.GetComponent<Text>().text = "Het felle licht van de drie schermen naast elkaar scheen de studio binnen.";
        yield return new WaitForSeconds(4);
        textBox.GetComponent<Text>().text = "Terwijl hij het slot van binnenuit dichtdeed,zoals hij altijd deed, wist hij al: dit is het einde.";
        yield return new WaitForSeconds(7);
        textBox.GetComponent<Text>().text = ""; //Video Dalilla
        yield return new WaitForSeconds(46);
        textBox.GetComponent<Text>().text = "Het duurde niet lang voor zijn deur opengestampt werd. Nog minder lang dan hij gedacht had.";
        yield return new WaitForSeconds(7);
        textBox.GetComponent<Text>().text = "De agenten die de handboeien omdeden waren niet eens onvriendelijk. Misschien omdat hij niet tegenstribbelde.";
        yield return new WaitForSeconds(7);
        textBox.GetComponent<Text>().text = ""; //Gevangenis deur slaat toe
        yield return new WaitForSeconds(3);
        textBox.GetComponent<Text>().text = "De cel was nieuw. Deze heldere ruimte, met een lamp die voldoende licht gaf en niet zoemde, leek te aangenaam.";
        yield return new WaitForSeconds(8);
        textBox.GetComponent<Text>().text = "In zijn fantasieen had het naar urine moeten ruiken en waren de muren beschimmeld.";
        yield return new WaitForSeconds(5);
        textBox.GetComponent<Text>().text = ""; //overgang naar protest
        yield return new WaitForSeconds(3);
        textBox.GetComponent<Text>().text = "Maya’s laatste gepubliceerde column had het gerechtelijke apparaat ertoe bewogen de zaak voorrang te geven op anderen.";
        yield return new WaitForSeconds(7);
        textBox.GetComponent<Text>().text = "Al was het maar om de maatschappelijke onrust te bedaren. Er waren marsen geweest, met tien duizenden mensen.";
        yield return new WaitForSeconds(7);
        textBox.GetComponent<Text>().text = "Haar moord bleek geen fait divers dat snel weer aandacht verloor. Het was eerder een katalysator geweest die sociale beweging in gang zette.";
        yield return new WaitForSeconds(10);
        textBox.GetComponent<Text>().text = "Black lives matter was niet langer een amerikaans fenomeen. ";
        yield return new WaitForSeconds(3);
        textBox.GetComponent<Text>().text = "Nee, de straten van Ninove, Ravels, Kemzeke, Brussel, Gent, Antwerpen en Hasselt werden overspoelt door protesteerders die zich schijnbaar niet lieten tegenhouden.";
        yield return new WaitForSeconds(13);
        textBox.GetComponent<Text>().text = "De zwarte gemeenschap leek nu echt wakker geschud.";
        yield return new WaitForSeconds(4);
        textBox.GetComponent<Text>().text = ""; //overgang naar zinnen
        yield return new WaitForSeconds(3);
        textBox.GetComponent<Text>().text = "Racisme is een probleem van witte mensen"; 
        yield return new WaitForSeconds(4);
        textBox.GetComponent<Text>().text = ""; //Pauze tussen zin
        yield return new WaitForSeconds(2);
        textBox.GetComponent<Text>().text = "Zolang blanken denken in termen van groepsrechten, spreken ze de taal van apartheid";
        yield return new WaitForSeconds(6);
        textBox.GetComponent<Text>().text = ""; //Pauze tussen zin
        yield return new WaitForSeconds(2);
        textBox.GetComponent<Text>().text = "Mijn witte huid geeft mij voordelen die ik als zelfsprekend ervaar";
        yield return new WaitForSeconds(5);
        textBox.GetComponent<Text>().text = ""; //Pauze tussen zin !
        yield return new WaitForSeconds(2);
        textBox.GetComponent<Text>().text = "Uit onderzoek blijkt dat politieagenten een donkere verdachte sneller mishandelen";
        yield return new WaitForSeconds(6);
        textBox.GetComponent<Text>().text = ""; //Pauze tussen zin
        yield return new WaitForSeconds(4);
        textBox.GetComponent<Text>().text = "Integreren gaat het makkelijkst als ik welkom ben";
        yield return new WaitForSeconds(3);
        textBox.GetComponent<Text>().text = ""; //Pauze tussen zin
        yield return new WaitForSeconds(2);
        textBox.GetComponent<Text>().text = "Bedankt om tot hier mee te kijken , mee te luisteren. Het is nu aan u. Dalilla Hermans";
        yield return new WaitForSeconds(4);
        textBox.GetComponent<Text>().text = ""; //Einde
        yield return new WaitForSeconds(2);

    }

    public void SwitchSubs()
    {
        if (subDec == false)
        {
            toggle_an.Play("toggle_on");

            BackgroundSub.GetComponent<CanvasGroup>().alpha = 1;
            subDec = true;
            Debug.Log("Terug aanzetten");
        }
        else
        {
            toggle_an.Play("toggle_off");
            BackgroundSub.GetComponent<CanvasGroup>().alpha = 0;
            subDec = false;
            Debug.Log("afzetten");
        }

    }

 
}
