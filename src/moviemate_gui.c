#include <windows.h>
#include <shellapi.h>
#include <stdio.h>

/*BUTTONS*/
#define BTN_START     1
#define BTN_ROMANCE   2
#define BTN_ADVENTURE 3
#define BTN_ANIMATED  4
#define BTN_SHORTFILM 5
#define BTN_ACTION    6
#define BTN_COMEDY    7
#define BTN_BACK      8
#define BTN_HOME      9
#define BTN_TRAILER   10
#define BTN_WATCH     11
#define LIST_MOVIES   100

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

/*MOVIE STRUCTURE*/
typedef struct {
    char name[60];
    char director[60];
    char runtime[20];
    char imdb[10];
    char rotten[10];
    char stars[150];
    char awards[200];
    char desc[700];
    char trailer[200];
    char watch[200];
    char image[200];
} Movie;
/*ROMANCE*/
Movie romance[5] = {
{
"96",
"C. Prem Kumar",
"2h 38m","8.6","92%",
"Vijay Sethupathi, Trisha",
"14 Wins and 11 Nominations",
"A nostalgic love story revisiting childhood memories and first love.\n"
"Two school sweethearts reconnect after decades.\n"
"Silence speaks louder than words.\n"
"A deeply emotional and soulful romance.",
"https://youtu.be/AW6E5vXSfXo?si=oK9GBfzanIA1i3RI",
"https://youtu.be/63F9Pv4k4wk?si=qpI9CMrlb1bGrL8z",
"images/96.bmp"
},
{
"Maari 2",
"Balaji Mohan",
"2h 30m","4.5","35%",
"Dhanush, Sai Pallavi",
"5 Wins and 11 Nominations",
"A quirky gangster finds love unexpectedly.\n"
"Music-driven romance mixed with action.\n"
"Colorful visuals and energetic dance numbers.\n"
"A light-hearted entertainer.",
"https://youtu.be/DH4sZsKlmrY?si=JxNeKNisiyv24MTK",
"https://youtu.be/HbEV2n65qD8?si=dEyNoXkgb5xG8KJI",
"images/maari2.bmp"
},
{
"Arya 2",
"Sukumar",
"2h 50m","7.6","78%",
"Allu Arjun, Kajal Aggarwal",
"2 Wins and 9 Nominations",
"An intense tale of obsessive love.\n"
"Psychological twists drive the narrative.\n"
"Stylish presentation and bold storytelling.\n"
"A cult romantic thriller.",
"https://youtu.be/TxjjeDYGCo4?si=Dv6IEKFCgIPKImpM",
"https://youtu.be/61XHHglH9V0?si=ZsQFknk1GV9TDYGt",
"images/arya2.bmp"
},
{
"Fidaa",
"Shekhar Kammula",
"2h 18m","7.5","85%",
"Varun Tej, Sai Pallavi",
"5 Wins and 10 Nominations",
"A strong-willed village girl meets an NRI groom.\n"
"Cultural clashes spark romance.\n"
"Natural performances steal the show.\n"
"A refreshing romantic drama.",
"https://youtu.be/9stDegqm9pQ?si=1IiEB7h8jLg5inQR",
"https://youtu.be/I3o-UeFZFKo?si=98q0-X3uX3vvh4Kv",
"images/fidaa.bmp"
},
{
"A Aa",
"Trivikram Srinivas",
"2h 32m","7.1","70%",
"Nithiin, Samantha",
"5 Wins and 10 Nominations",
"A pampered woman seeks independence.\n"
"Family values shape romance.\n"
"Light humor blended with emotions.\n"
"A feel-good romantic film.",
"https://youtu.be/JMMODt8qh-c?si=LcTlgfcka-InNyM9",
"https://youtu.be/R7aCOI4DuA0?si=ejtTnUW-4RH6WhCS",
"images/a.aa.bmp"
}
};

/*ADVENTURE*/
Movie adventure[5] = {
{
"Zindagi Na Milegi Dobara",
"Zoya Akhtar",
"2h 35m","8.2","91%",
"Hrithik Roshan, Farhan Akhtar, Abhay Deol",
"35 Wins and 38 Nominations",
"Three friends embark on a life-changing road trip.\n"
"Confronting fears and rediscovering joy.\n"
"Spain becomes a metaphor for freedom.\n"
"A celebration of friendship and life.",
"https://youtu.be/FJrpcDgC3zU?si=aEHnhMGuCRD4R7Nd",
"https://youtu.be/gQEUkqZ33IA?si=HTSyLnF727nGlAkg",
"images/znmd.bmp"
},
{
"Yeh Jawaani Hai Deewani",
"Ayan Mukerji",
"2h 40m","7.2","65%",
"Ranbir Kapoor, Deepika Padukone",
"24 Wins and 96 Nominations",
"A journey through youth, ambition, and love.\n"
"Dreams clash with relationships.\n"
"Music-driven storytelling.\n"
"A modern-day coming-of-age tale.",
"https://youtu.be/Rbp2XUSeUNE?si=gsLklKQ7Z7-jc7WO",
"https://youtu.be/TVB920h0u4g?si=GsKAxRTTBjfR3keh",
"images/yjhd.bmp"
},
{
"Dil Chahta Hai",
"Farhan Akhtar",
"2h 45m","8.1","88%",
"Aamir Khan, Saif Ali Khan, Akshaye Khanna",
"28 Wins and 40 Nominations",
"Friendship tested by love and time.\n"
"Urban storytelling redefined Bollywood.\n"
"Bold and realistic narrative.\n"
"A timeless classic.",
"https://youtu.be/OBAcYSSUf6o?si=qPW5ebQF2F2hanjg",
"https://youtu.be/XdE1nP3pfl4?si=WB-kir50kOMSrV_j",
"images/dch.bmp"
},
{
"Karwaan",
"Akarsh Khurana",
"1h 54m","7.5","88%",
"Irrfan Khan, Dulquer Salmaan",
"0 Wins and 2 Nominations",
"An unexpected road trip begins with strangers.\n"
"Conversations shape new bonds.\n"
"Life lessons unfold gently.\n"
"A soulful travel film.",
"https://youtu.be/IUCeN7kelXs?si=lHFsZObOMLO2JtDK",
"https://youtu.be/n__nBJW7RYs?si=onI7xdmU5RLad8hV",
"images/karwaan.bmp"
},
{
"Karthikeya 2",
"Chandoo Mondeti",
"2h 25m","7.9","85%",
"Nikhil Siddhartha, Anupama Parameswaran",
"3 Wins and 9 Nominations",
"A quest rooted in ancient Indian mythology.\n"
"Faith, mystery, and science collide.\n"
"Secrets hidden across continents.\n"
"A gripping spiritual adventure.",
"https://youtu.be/wpHgdmQo2n0?si=QZotr1dIQkLMe-W_",
"https://youtu.be/OMPVvmnI3to?si=h_blH3bF7g05i6GD",
"images/karthikeye2.bmp"
}
};

/*ANIMATED*/
Movie animated[5] = {
{
"The Return of Hanuman",
"Anurag Kashyap",
"1h 35m","6.8","70%",
"Kathleen Barr, Irfan Khan",
"",
"A modern animated take on Hanuman.\n"
"Mythology meets animation.\n"
"Spiritual lessons for kids.\n"
"Family-friendly adventure.",
"https://youtu.be/eqqGyFUbt9k?si=PRQSKsaMh33b0d5N",
"https://youtu.be/XCMqLa78SNM?si=lP-j8A3Ts4T-BOJg",
"images/roh.bmp"
},
{
"Delhi Safari",
"Nikhil Advani",
"1h 42m","5.8","55%",
"Akshaye Khanna, Urmila Matonkar, Govinda",
"1 Wins",
"Animals unite to save their habitat.\n"
"Environmental message.\n"
"Indian animated feature.\n"
"Lighthearted and fun.",
"https://trailer.link",
"https://watch.link",
"images/delhi_safari.bmp"
},
{
"Up",
"Pete Docter",
"1h 36m","8.3","98%",
"Ed Asner, Jordan Nagai",
"81 Wins and 88 Nominations",
"A widower sets off on an adventure.\n"
"Dreams tied to floating balloons.\n"
"Emotion and humor blended perfectly.\n"
"A Pixar masterpiece.",
"https://youtu.be/HWEW_qTLSEE?si=t5SBMHsHY6C2W5JZ",
"https://youtu.be/DEwZspcEMuM?si=LA3XUdIEKRs34Keb",
"images/up.bmp"
},
{
"Cinderella (1950)",
"Disney",
"1h 14m","7.3","95%",
"James MacDonald, Ilene Woods",
"6 Wins and 9 Nominations",
"A timeless fairy tale of hope.\n"
"Dreams triumph over hardship.\n"
"Iconic animation.\n"
"A Disney classic.",
"https://youtu.be/cL-RjWKtZrM?si=k_ivca07mfdHBUTg",
"https://youtu.be/OkcxcuteHcY?si=zBnz_dc9yK1vHI6e",
"images/cindrella.bmp"
},
{
"Gulliver's Travels",
"Dave Fleischer",
"1h 16m","6.9","72%",
"Lanny Ross, Pinto Colvig, Jessica Dragonette",
"2 Wins and 2 Nominations",
"A fantastical animated journey.\n"
"Imagination-driven storytelling.\n"
"Classic animation style.\n"
"Old-school charm.",
"https://youtu.be/7N81RK3IUkU?si=KM25AV0Y36ReTZeC",
"https://youtu.be/rehNT9wIjUg?si=GHtnMb8fSMqtrg3G",
"images/gulliver_travels.bmp"
}
};

/*SHORT FILMS*/
Movie shortfilm[5] = {
{
"One Minute Time Machine",
"Devon Avery",
"6 min","7.5","80%",
"Erinn Hayes, Brian Dietzen",
"8 Wins and 6 Nominations",
"A clever sci-fi short.\n"
"Time loop comedy.\n"
"Smart and rewatchable.\n"
"Highly creative concept.",
"https://youtu.be/BeNKxvi_YB4?si=szd-8T5sw0dJsLZb",
"https://youtu.be/CXhnPLMIET0?si=2iPa9mZBAEBEkNVu",
"images/time.bmp"
},
{
"Mentalese Express",
"Kai Wei Lee",
"10 min","7.6","78%",
"Koshi Mizukami, Joanne Missingham",
"1 Nominations",
"A surreal psychological ride.\n"
"Mind-bending visuals.\n"
"Experimental storytelling.\n"
"Abstract cinema.",
"https://youtu.be/aN8tu4Npri0?si=O66a89IEpB3hR4a6",
"https://youtu.be/wAciGWokkwY?si=4H_otq8K1UYiazQU",
"images/mentalese.bmp"
},
{
"In This Life",
"Shivam Jemini",
"24 min","7.0","75%",
"Anaika Soti, Shivam Jemini",
"Triloka Award, Tasveer Award",
"A touching human story.\n"
"Emotional depth.\n"
"Simple yet powerful.\n"
"Relatable theme.",
"https://youtu.be/xVu6JCuF-jI?si=7Fp2bR1Qxp0qartZ",
"https://youtu.be/DiTHml2rXwQ?si=73rYwA5UyrpqU5-7",
"images/life.bmp"
},
{
"The Bypass",
"Amit Kumar",
"15 min","7.4","82%",
"Nawazuddin Siddiqui, Irrfan Khan"
"1 Win and 1 Nomination",
"A suspense-driven short.\n"
"Tense atmosphere.\n"
"Strong climax.\n"
"Keeps you hooked.",
"https://youtu.be/PRBCuS_BzII?si=xgiPyQPISl5PnKZM",
"https://youtu.be/nq-I0aVPRcw?si=PpI7cWy150BaIN_1",
"images/bypass.bmp"
},
{
"Chaara",
"Adarsh Gupta",
"14 min","7.7","77%",
"Alam Khan, Yashi Singh",
"1 Win",
"A socially driven short.\n"
"Strong message.\n"
"Realistic portrayal.\n"
"Impactful ending.",
"https://trailer.link",
"https://watch.link",
"images/chaara.bmp"
}
};

/*ACTION*/
Movie action[5] = {
{
"Baahubali: The Beginning",
"S. S. Rajamouli",
"2h 39m","8.0","86%",
"Prabhas, Rana Daggubati, Anushka Shetty",
"55 Wins and 22 Nominations",
"A man raised in isolation discovers his royal lineage.\n"
"Epic battles define destiny.\n"
"Loyalty and betrayal collide.\n"
"A grand action spectacle.",
"https://youtu.be/VdafjyFK3ko?si=xGiW_tq4MAALrMaM",
"https://youtu.be/JPT2-Z_CVHw?si=TQHTjuI16Q1-LYwh",
"images/baahubali.bmp"
},
{
"KGF Chapter 1",
"Prashanth Neel",
"2h 36m","8.2","89%",
"Yash, Srinidhi Shetty",
"12 Wins and 3 Nominations",
"A rise from poverty to power.\n"
"Violence shapes destiny.\n"
"A dark gold mine empire.\n"
"Mass action drama.",
"https://youtu.be/-KfsY-qwBS0?si=6mwP8oZF5NpUOcvW",
"https://youtu.be/gKizDojsdvs?si=j2ZOuQfMjImBFXC9",
"images/kgf.bmp"
},
{
"Master",
"Lokesh Kanagaraj",
"2h 59m","7.3","75%",
"Vijay, Vijay Sethupathi",
"2 Wins and 10 Nominations",
"A professor battles juvenile crime.\n"
"Ideologies clash violently.\n"
"Stylish action sequences.\n"
"A mass entertainer.",
"https://youtu.be/Zi9ciWeJ3fg?si=fUnDb3k0DB1ut6ob",
"https://youtu.be/JrzK_jJsXho?si=CPbAIrtxE5KIr-d7",
"images/master.bmp"
},
{
"Baazigar",
"Abbas–Mustan",
"2h 55m","7.7","80%",
"Shah Rukh Khan, Kajol",
"Filmfare Best Actor",
"Revenge masked as romance.\n"
"Moral boundaries blur.\n"
"Thriller with emotional depth.\n"
"A bold classic.",
"https://youtu.be/OOklnNbA5vo?si=AhYDdxT1Pn6iOTCS",
"https://youtu.be/jlliV_Nit7I?si=H4ufxYAjizAhjfsh",
"images/baazigar.bmp"
},
{
"Vikram Vedha",
"Pushkar–Gayathri",
"2h 27m","8.4","92%",
"R. Madhavan, Vijay Sethupathi",
"12 Wins and 13 Nominations",
"A cop hunts a philosophical gangster.\n"
"Stories redefine good and evil.\n"
"Perspective alters truth.\n"
"A neo-noir masterpiece.",
"https://youtu.be/eLucCWmf6V4?si=1oIrp0W9b1yHtu9e",
"https://youtu.be/7_-fTlskezg?si=k3lZZ3ok_fg4R060",
"images/vikram_vedha.bmp"
}
};

/*COMEDY*/
Movie comedy[5] = {
{
"Hera Pheri",
"Priyadarshan",
"2h 36m","8.2","85%",
"Akshay Kumar, Paresh Rawal, Suniel Shetty",
"8 Wins and 6 Nominations",
"Three unemployed men chase quick money.\n"
"A kidnapping goes wrong.\n"
"Chaos everywhere.\n"
"Legendary comedy.",
"https://youtu.be/m1zMmVwWr-M?si=9ROgGRkEEMSVZA7c",
"https://youtu.be/TIQ5hrfermg?si=uBMyGVge34vO_k0C",
"images/herapheri.bmp"
},
{
"Dhol",
"Priyadarshan",
"2h 25m","7.0","70%",
"Sharman Joshi, Rajpal Yadav",
"1 Nomination",
"Four lazy men want rich wives.\n"
"Greed causes madness.\n"
"Plans collapse hilariously.\n"
"A mad ride.",
"https://youtu.be/vqH2cV1T9WE?si=BobtZiSKybnupzaE",
"https://youtu.be/CRzvimM6ZJk?si=jW6qKSw2ZZmUIliW",
"images/dhol.bmp"
},
{
"Garam Masala",
"Priyadarshan",
"2h 20m","7.3","78%",
"Akshay Kumar, John Abraham",
"3 Wins and 5 Nominations",
"Lies pile up uncontrollably.\n"
"Multiple girlfriends.\n"
"Situational chaos.\n"
"A laugh riot.",
"https://youtu.be/Xr58ORhxvvc?si=3iom5SS7U_91Mp6r",
"https://youtu.be/gxBERAhEU7w?si=Xx_l7-vjWBlLgHzj",
"images/garam_masala.bmp"
},
{
"Welcome",
"Anees Bazmee",
"2h 39m","7.0","75%",
"Anil Kapoor, Nana Patekar",
"2 Wins and 9 Nominations",
"Gangsters seek respectability.\n"
"Marriage chaos.\n"
"Crime meets comedy.\n"
"A fun entertainer.",
"https://youtu.be/QJCMdzuLG0I?si=FxSr2HEbjSZlwNcW",
"https://youtu.be/AKiynoClCaA?si=AJuCPXeodfriZZ4d",
"images/welcome.bmp"
},
{
"Bhagam Bhag",
"Priyadarshan",
"2h 35m","6.6","68%",
"Akshay Kumar, Govinda, Paresh Rawal",
"",
"Actors trapped in murder mystery.\n"
"Mistaken identities.\n"
"Comedy meets suspense.\n"
"Fast-paced fun.",
"https://youtu.be/ihCaohTJYCo?si=ahDiQns1_VgHdnCG",
"https://youtu.be/zloKjQXmwhE?si=8odejSLLSPc-uyJz",
"images/bhagam.bmp"
}
};
/*GLOBAL UI*/
HWND btnStart, btnRom, btnAdv, btnAni, btnShort;
HWND btnAction, btnComedy;
HWND btnBack, btnHome, btnTrailer, btnWatch;
HWND listBox, details, imgBox;

/*GLOBAL STATE*/
Movie *currentMovies = NULL;
char currentTrailer[200] = "";
char currentWatch[200]   = "";

/*HELPER FUNCTIONS*/

/* Hide everything */
void HideAll(void) {
    ShowWindow(btnStart, SW_HIDE);
    ShowWindow(btnRom, SW_HIDE);
    ShowWindow(btnAdv, SW_HIDE);
    ShowWindow(btnAni, SW_HIDE);
    ShowWindow(btnShort, SW_HIDE);
    ShowWindow(btnAction, SW_HIDE);
    ShowWindow(btnComedy, SW_HIDE);

    ShowWindow(listBox, SW_HIDE);
    ShowWindow(details, SW_HIDE);
    ShowWindow(imgBox, SW_HIDE);

    ShowWindow(btnBack, SW_HIDE);
    ShowWindow(btnHome, SW_HIDE);
    ShowWindow(btnTrailer, SW_HIDE);
    ShowWindow(btnWatch, SW_HIDE);
}
void ClearMovieSelection(void) {
    // Clear list selection
    SendMessage(listBox, LB_SETCURSEL, (WPARAM)-1, 0);

    // Clear text
    SetWindowText(details, "");

    // Clear image
    SendMessage(imgBox, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)NULL);

    // Reset pointers
    currentMovies = NULL;
    currentTrailer[0] = '\0';
    currentWatch[0]   = '\0';
}


/* Home screen */
void ShowHome(void) {
    HideAll();
    ClearMovieSelection();   

    ShowWindow(btnStart, SW_SHOW);
}


/* Genre selection screen */
void ShowGenres(void) {
    HideAll();
    ClearMovieSelection();  

    ShowWindow(btnRom, SW_SHOW);
    ShowWindow(btnAdv, SW_SHOW);
    ShowWindow(btnAni, SW_SHOW);
    ShowWindow(btnShort, SW_SHOW);
    ShowWindow(btnAction, SW_SHOW);
    ShowWindow(btnComedy, SW_SHOW);

    ShowWindow(btnBack, SW_SHOW);
    ShowWindow(btnHome, SW_SHOW);
}


/* Movie list + details screen */
void ShowMovies(Movie *movies, int count) {
    HideAll();
    ClearMovieSelection(); 

    currentMovies = movies;

    SendMessage(listBox, LB_RESETCONTENT, 0, 0);
    for (int i = 0; i < count; i++) {
        SendMessage(listBox, LB_ADDSTRING, 0,
            (LPARAM)movies[i].name);
    }

    ShowWindow(listBox, SW_SHOW);
    ShowWindow(details, SW_SHOW);
    ShowWindow(imgBox, SW_SHOW);
    ShowWindow(btnBack, SW_SHOW);
    ShowWindow(btnHome, SW_SHOW);
    ShowWindow(btnTrailer, SW_SHOW);
    ShowWindow(btnWatch, SW_SHOW);
}

/*WINMAIN*/
int WINAPI WinMain(
    HINSTANCE hInst,
    HINSTANCE hPrev,
    LPSTR lpCmd,
    int nCmdShow
) {
    WNDCLASS wc = {0};
    wc.lpfnWndProc   = WndProc;
    wc.hInstance     = hInst;
    wc.lpszClassName = "MovieMate";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClass(&wc);

    HWND hwnd = CreateWindow(
        "MovieMate",
        "Movie Mate",
        WS_OVERLAPPEDWINDOW,
        250, 120, 900, 550,
        NULL, NULL, hInst, NULL
    );

    ShowWindow(hwnd, nCmdShow);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

/*WNDPROC*/
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {

    static HBITMAP hBitmap = NULL;

    switch (msg) {

    /*CREATE CONTROLS*/
    case WM_CREATE:

        /* Title */
        CreateWindow(
            "STATIC", "Movie Mate",
            WS_CHILD | WS_VISIBLE | SS_CENTER,
            360, 20, 180, 25,
            hwnd, NULL, NULL, NULL
        );

        CreateWindow(
            "STATIC", "by prajwal-sameer",
            WS_CHILD | WS_VISIBLE | SS_CENTER,
            360, 45, 180, 18,
            hwnd, NULL, NULL, NULL
        );

        /* Start Button */
        btnStart = CreateWindow(
            "BUTTON", "Choose Your Genre",
            WS_CHILD | WS_VISIBLE,
            350, 220, 200, 40,
            hwnd, (HMENU)BTN_START, NULL, NULL
        );

        /* Genre Buttons */
        btnRom = CreateWindow("BUTTON","Romance",WS_CHILD,
            350,120,200,30,hwnd,(HMENU)BTN_ROMANCE,NULL,NULL);

        btnAdv = CreateWindow("BUTTON","Adventure",WS_CHILD,
            350,155,200,30,hwnd,(HMENU)BTN_ADVENTURE,NULL,NULL);

        btnAni = CreateWindow("BUTTON","Animated",WS_CHILD,
            350,190,200,30,hwnd,(HMENU)BTN_ANIMATED,NULL,NULL);

        btnShort = CreateWindow("BUTTON","Short Films",WS_CHILD,
            350,225,200,30,hwnd,(HMENU)BTN_SHORTFILM,NULL,NULL);

        btnAction = CreateWindow("BUTTON","Action",WS_CHILD,
            350,260,200,30,hwnd,(HMENU)BTN_ACTION,NULL,NULL);

        btnComedy = CreateWindow("BUTTON","Comedy",WS_CHILD,
            350,295,200,30,hwnd,(HMENU)BTN_COMEDY,NULL,NULL);

        /* Movie List */
        listBox = CreateWindow(
            "LISTBOX", NULL,
            WS_CHILD | WS_BORDER | LBS_NOTIFY,
            20, 90, 260, 360,
            hwnd, (HMENU)LIST_MOVIES, NULL, NULL
        );

        /* Movie Details */
        details = CreateWindow(
            "STATIC", "",
            WS_CHILD,
            300, 90, 380, 300,
            hwnd, NULL, NULL, NULL
        );

        /* Movie Image */
        imgBox = CreateWindow(
            "STATIC", NULL,
            WS_CHILD | SS_BITMAP,
            700, 90, 160, 220,
            hwnd, NULL, NULL, NULL
        );

        /* Navigation Buttons */
        btnBack = CreateWindow("BUTTON","Back",WS_CHILD,
            20,470,100,30,hwnd,(HMENU)BTN_BACK,NULL,NULL);

        btnHome = CreateWindow("BUTTON","Home",WS_CHILD,
            130,470,100,30,hwnd,(HMENU)BTN_HOME,NULL,NULL);

        btnTrailer = CreateWindow("BUTTON","Watch Trailer",WS_CHILD,
            450,470,120,30,hwnd,(HMENU)BTN_TRAILER,NULL,NULL);

        btnWatch = CreateWindow("BUTTON","Watch Movie",WS_CHILD,
            580,470,120,30,hwnd,(HMENU)BTN_WATCH,NULL,NULL);

        ShowHome();
        break;

    /*BUTTON HANDLING*/
    case WM_COMMAND:

        switch (LOWORD(wp)) {

        case BTN_START:
            ShowGenres();
            break;

        case BTN_ROMANCE:
            ShowMovies(romance, 5);
            break;

        case BTN_ADVENTURE:
            ShowMovies(adventure, 5);
            break;

        case BTN_ANIMATED:
            ShowMovies(animated, 5);
            break;

        case BTN_SHORTFILM:
            ShowMovies(shortfilm, 5);
            break;

        case BTN_ACTION:
            ShowMovies(action, 5);
            break;

        case BTN_COMEDY:
            ShowMovies(comedy, 5);
            break;

        case BTN_BACK:
          ClearMovieSelection();
          ShowGenres();
          break;

        case BTN_HOME:
            ClearMovieSelection();
            ShowHome();
            break;

        case LIST_MOVIES:
            if (HIWORD(wp) == LBN_SELCHANGE && currentMovies) {
                int i = SendMessage(listBox, LB_GETCURSEL, 0, 0);
                if (i >= 0) {

                    strcpy(currentTrailer, currentMovies[i].trailer);
                    strcpy(currentWatch, currentMovies[i].watch);

                    char buffer[1200];
                    sprintf(
                        buffer,
                        "%s\n\n"
                        "Director : %s\n"
                        "Runtime  : %s\n"
                        "IMDb     : %s\n"
                        "Rotten   : %s\n\n"
                        "Stars:\n%s\n\n"
                        "Awards:\n%s\n\n"
                        "%s",
                        currentMovies[i].name,
                        currentMovies[i].director,
                        currentMovies[i].runtime,
                        currentMovies[i].imdb,
                        currentMovies[i].rotten,
                        currentMovies[i].stars,
                        currentMovies[i].awards,
                        currentMovies[i].desc
                    );

                    SetWindowText(details, buffer);

                    if (hBitmap) DeleteObject(hBitmap);

                    hBitmap = (HBITMAP)LoadImage(
                        NULL,
                        currentMovies[i].image,
                        IMAGE_BITMAP,
                        160, 220,
                        LR_LOADFROMFILE
                    );

                    SendMessage(
                        imgBox,
                        STM_SETIMAGE,
                        IMAGE_BITMAP,
                        (LPARAM)hBitmap
                    );
                }
            }
            break;

        case BTN_TRAILER:
            if (currentTrailer[0])
                ShellExecute(NULL, "open", currentTrailer, NULL, NULL, SW_SHOWNORMAL);
            break;

        case BTN_WATCH:
            if (currentWatch[0])
                ShellExecute(NULL, "open", currentWatch, NULL, NULL, SW_SHOWNORMAL);
            break;
        }
        break;

    case WM_DESTROY:
        if (hBitmap) DeleteObject(hBitmap);
        PostQuitMessage(0);
        break;
    }

    return DefWindowProc(hwnd, msg, wp, lp);
}
