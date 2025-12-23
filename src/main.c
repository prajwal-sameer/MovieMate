#include <stdio.h>

/*MOVIE STRUCT*/
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
} Movie;

/*ROMANCE*/
Movie romance[5] = {
{
"96","C. Prem Kumar","2h 38m","8.6","92%",
"Vijay Sethupathi, Trisha",
"14 Wins and 11 Nominations",
"A nostalgic love story revisiting childhood memories.\n"
"Two lovers reunite after decades.\n"
"Silence speaks louder than words.\n"
"A deeply emotional romance.",
"https://youtu.be/AW6E5vXSfXo",
"https://youtu.be/63F9Pv4k4wk"
},
{
"Maari 2","Balaji Mohan","2h 30m","4.5","35%",
"Dhanush, Sai Pallavi",
"5 Wins and 11 Nominations",
"A quirky gangster romance.\n"
"Music-driven narrative.\n"
"Colorful visuals.\n"
"Light entertainer.",
"https://youtu.be/DH4sZsKlmrY",
"https://youtu.be/HbEV2n65qD8"
},
{
"Arya 2","Sukumar","2h 50m","7.6","78%",
"Allu Arjun, Kajal Aggarwal",
"2 Wins and 9 Nominations",
"Obsessive one-sided love.\n"
"Psychological twists.\n"
"Stylish presentation.\n"
"Cult classic.",
"https://youtu.be/TxjjeDYGCo4",
"https://youtu.be/61XHHglH9V0"
},
{
"Fidaa","Shekhar Kammula","2h 18m","7.5","85%",
"Varun Tej, Sai Pallavi",
"5 Wins and 10 Nominations",
"Village girl meets NRI groom.\n"
"Cultural clash.\n"
"Natural performances.\n"
"Refreshing romance.",
"https://youtu.be/9stDegqm9pQ",
"https://youtu.be/I3o-UeFZFKo"
},
{
"A Aa","Trivikram Srinivas","2h 32m","7.1","70%",
"Nithiin, Samantha",
"5 Wins and 10 Nominations",
"Pampered woman seeks independence.\n"
"Family emotions.\n"
"Light humor.\n"
"Feel-good film.",
"https://youtu.be/JMMODt8qh-c",
"https://youtu.be/R7aCOI4DuA0"
}
};

/*ADVENTURE*/
Movie adventure[5] = {
{
"Zindagi Na Milegi Dobara","Zoya Akhtar","2h 35m","8.2","91%",
"Hrithik Roshan, Farhan Akhtar, Abhay Deol",
"35 Wins and 38 Nominations",
"Friends take a life-changing road trip.\n"
"Facing fears.\n"
"Freedom and joy.\n"
"Celebration of life.",
"https://youtu.be/FJrpcDgC3zU",
"https://youtu.be/gQEUkqZ33IA"
},
{
"Yeh Jawaani Hai Deewani","Ayan Mukerji","2h 40m","7.2","65%",
"Ranbir Kapoor, Deepika Padukone",
"24 Wins and 96 Nominations",
"Youth, dreams, and love.\n"
"Ambition vs relationships.\n"
"Music-driven story.\n"
"Modern romance.",
"https://youtu.be/Rbp2XUSeUNE",
"https://youtu.be/TVB920h0u4g"
},
{
"Dil Chahta Hai","Farhan Akhtar","2h 45m","8.1","88%",
"Aamir Khan, Saif Ali Khan, Akshaye Khanna",
"28 Wins and 40 Nominations",
"Friendship tested by time.\n"
"Urban realism.\n"
"Bold storytelling.\n"
"Timeless classic.",
"https://youtu.be/OBAcYSSUf6o",
"https://youtu.be/XdE1nP3pfl4"
},
{
"Karwaan","Akarsh Khurana","1h 54m","7.5","88%",
"Irrfan Khan, Dulquer Salmaan",
"0 Wins and 2 Nominations",
"Unexpected road trip.\n"
"Strangers bond.\n"
"Life lessons.\n"
"Soulful journey.",
"https://youtu.be/IUCeN7kelXs",
"https://youtu.be/n__nBJW7RYs"
},
{
"Karthikeya 2","Chandoo Mondeti","2h 25m","7.9","85%",
"Nikhil Siddhartha, Anupama Parameswaran",
"3 Wins and 9 Nominations",
"Mythology meets mystery.\n"
"Faith and science.\n"
"Global quest.\n"
"Spiritual adventure.",
"https://youtu.be/wpHgdmQo2n0",
"https://youtu.be/OMPVvmnI3to"
}
};
/* ===== ANIMATED ===== */
Movie animated[5] = {
{
"The Return of Hanuman","Anurag Kashyap","1h 35m","6.8","70%",
"Voice Cast",
"Kids awards",
"A modern animated take on Hanuman.\n"
"Mythology meets animation.\n"
"Spiritual lessons.\n"
"Family-friendly adventure.",
"https://youtu.be/eqqGyFUbt9k",
"https://youtu.be/XCMqLa78SNM"
},
{
"Delhi Safari","Nikhil Advani","1h 42m","5.8","55%",
"Akshaye Khanna, Urmila Matondkar",
"Kids nominations",
"Animals unite to save their habitat.\n"
"Environmental message.\n"
"Indian animation.\n"
"Lighthearted fun.",
"https://youtu.be/7_s8GgkN9Fk",
"https://youtu.be/delhisafari"
},
{
"Up","Pete Docter","1h 36m","8.3","98%",
"Ed Asner, Jordan Nagai",
"81 Wins and 88 Nominations",
"A widower sets off on an adventure.\n"
"Balloons lift a house.\n"
"Emotion and humor.\n"
"Pixar classic.",
"https://youtu.be/HWEW_qTLSEE",
"https://youtu.be/DEwZspcEMuM"
},
{
"Cinderella (1950)","Disney","1h 14m","7.3","95%",
"Ilene Woods",
"6 Wins and 9 Nominations",
"A timeless fairy tale.\n"
"Dreams triumph over hardship.\n"
"Iconic animation.\n"
"Disney classic.",
"https://youtu.be/cL-RjWKtZrM",
"https://youtu.be/OkcxcuteHcY"
},
{
"Gulliver's Travels","Dave Fleischer","1h 16m","6.9","72%",
"Lanny Ross",
"2 Wins and 2 Nominations",
"A fantastical animated journey.\n"
"Imagination-driven.\n"
"Classic style.\n"
"Old-school charm.",
"https://youtu.be/7N81RK3IUkU",
"https://youtu.be/rehNT9wIjUg"
}
};

/*SHORT FILMS*/
Movie shortfilm[5] = {
{
"One Minute Time Machine","Devon Avery","6 min","7.5","80%",
"Erinn Hayes, Brian Dietzen",
"8 Wins and 6 Nominations",
"A clever sci-fi short.\n"
"Time loop comedy.\n"
"Smart and funny.\n"
"Highly rewatchable.",
"https://youtu.be/BeNKxvi_YB4",
"https://youtu.be/CXhnPLMIET0"
},
{
"Mentalese Express","Kai Wei Lee","10 min","7.6","78%",
"Koshi Mizukami",
"Festival Nominations",
"A surreal psychological ride.\n"
"Mind-bending visuals.\n"
"Experimental cinema.\n"
"Abstract storytelling.",
"https://youtu.be/aN8tu4Npri0",
"https://youtu.be/wAciGWokkwY"
},
{
"In This Life","Shivam Jemini","24 min","7.0","75%",
"Anaika Soti",
"Triloka Award",
"A touching human story.\n"
"Emotional depth.\n"
"Simple narrative.\n"
"Relatable theme.",
"https://youtu.be/xVu6JCuF-jI",
"https://youtu.be/DiTHml2rXwQ"
},
{
"The Bypass","Amit Kumar","15 min","7.4","82%",
"Nawazuddin Siddiqui, Irrfan Khan",
"1 Win and 1 Nomination",
"A suspense-driven short.\n"
"Tense atmosphere.\n"
"Strong climax.\n"
"Keeps you hooked.",
"https://youtu.be/PRBCuS_BzII",
"https://youtu.be/nq-I0aVPRcw"
},
{
"Chaara","Adarsh Gupta","14 min","7.7","77%",
"Alam Khan",
"1 Win",
"A socially driven short.\n"
"Strong message.\n"
"Realistic portrayal.\n"
"Impactful ending.",
"https://youtu.be/chaara",
"https://youtu.be/chaara_watch"
}
};

/* ===== ACTION ===== */
Movie action[5] = {
{
"Baahubali: The Beginning","S. S. Rajamouli","2h 39m","8.0","86%",
"Prabhas, Rana Daggubati",
"55 Wins and 22 Nominations",
"A man discovers royal lineage.\n"
"Epic battles.\n"
"Loyalty and betrayal.\n"
"Grand spectacle.",
"https://youtu.be/VdafjyFK3ko",
"https://youtu.be/JPT2-Z_CVHw"
},
{
"KGF Chapter 1","Prashanth Neel","2h 36m","8.2","89%",
"Yash, Srinidhi Shetty",
"12 Wins and 3 Nominations",
"Rise from poverty to power.\n"
"Violent underworld.\n"
"Gold mine empire.\n"
"Mass action drama.",
"https://youtu.be/-KfsY-qwBS0",
"https://youtu.be/gKizDojsdvs"
},
{
"Master","Lokesh Kanagaraj","2h 59m","7.3","75%",
"Vijay, Vijay Sethupathi",
"2 Wins and 10 Nominations",
"A professor battles crime.\n"
"Ideological clash.\n"
"Stylish action.\n"
"Mass entertainer.",
"https://youtu.be/Zi9ciWeJ3fg",
"https://youtu.be/JrzK_jJsXho"
},
{
"Baazigar","Abbas–Mustan","2h 55m","7.7","80%",
"Shah Rukh Khan, Kajol",
"Filmfare Best Actor",
"Revenge masked as romance.\n"
"Moral ambiguity.\n"
"Thrilling plot.\n"
"Bold classic.",
"https://youtu.be/OOklnNbA5vo",
"https://youtu.be/jlliV_Nit7I"
},
{
"Vikram Vedha","Pushkar–Gayathri","2h 27m","8.4","92%",
"R. Madhavan, Vijay Sethupathi",
"12 Wins and 13 Nominations",
"A cop hunts a gangster.\n"
"Good vs evil blurred.\n"
"Perspective shifts truth.\n"
"Neo-noir masterpiece.",
"https://youtu.be/eLucCWmf6V4",
"https://youtu.be/7_-fTlskezg"
}
};

/*COMEDY*/
Movie comedy[5] = {
{
"Hera Pheri","Priyadarshan","2h 36m","8.2","85%",
"Akshay Kumar, Paresh Rawal",
"8 Wins and 6 Nominations",
"Three men chase money.\n"
"Kidnapping gone wrong.\n"
"Pure chaos.\n"
"Legendary comedy.",
"https://youtu.be/m1zMmVwWr-M",
"https://youtu.be/TIQ5hrfermg"
},
{
"Dhol","Priyadarshan","2h 25m","7.0","70%",
"Sharman Joshi, Rajpal Yadav",
"1 Nomination",
"Four lazy men seek riches.\n"
"Greed causes madness.\n"
"Plans collapse.\n"
"Mad comedy ride.",
"https://youtu.be/vqH2cV1T9WE",
"https://youtu.be/CRzvimM6ZJk"
},
{
"Garam Masala","Priyadarshan","2h 20m","7.3","78%",
"Akshay Kumar, John Abraham",
"3 Wins and 5 Nominations",
"Multiple girlfriends.\n"
"Lies pile up.\n"
"Situational chaos.\n"
"Laugh riot.",
"https://youtu.be/Xr58ORhxvvc",
"https://youtu.be/gxBERAhEU7w"
},
{
"Welcome","Anees Bazmee","2h 39m","7.0","75%",
"Anil Kapoor, Nana Patekar",
"2 Wins and 9 Nominations",
"Gangsters want respect.\n"
"Marriage confusion.\n"
"Crime meets comedy.\n"
"Fun entertainer.",
"https://youtu.be/QJCMdzuLG0I",
"https://youtu.be/AKiynoClCaA"
},
{
"Bhagam Bhag","Priyadarshan","2h 35m","6.6","68%",
"Akshay Kumar, Govinda",
"Commercial success",
"Murder mystery comedy.\n"
"Mistaken identities.\n"
"Fast pace.\n"
"Comedy suspense.",
"https://youtu.be/ihCaohTJYCo",
"https://youtu.be/zloKjQXmwhE"
}
};
/*GLOBAL STATE */

int currentGenre = -1;
int currentIndex = -1;

/* genre IDs */
#define GEN_ROMANCE   0
#define GEN_ADVENTURE 1
#define GEN_ANIMATED  2
#define GEN_SHORT     3
#define GEN_ACTION    4
#define GEN_COMEDY    5

/* ========= HELPER FUNCTIONS ========= */

void printLine() {
    printf("--------------------------------------------------\n");
}

/* Print one movie */
void printMovie(Movie m) {
    printLine();
    printf("Title      : %s\n", m.name);
    printf("Director   : %s\n", m.director);
    printf("Runtime    : %s\n", m.runtime);
    printf("IMDb       : %s\n", m.imdb);
    printf("RottenTom. : %s\n\n", m.rotten);

    printf("Stars:\n%s\n\n", m.stars);
    printf("Awards:\n%s\n\n", m.awards);
    printf("Description:\n%s\n\n", m.desc);

    printf("Trailer Link : %s\n", m.trailer);
    printf("Watch Link   : %s\n", m.watch);
    printLine();
}

/*Print movie list for a genre*/
void printMovieList(Movie movies[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, movies[i].name);
    }
}

/* Handle movie selection */
void selectMovie(Movie movies[], int count) {
    int choice;
    printf("\nSelect movie number (0 to go back): ");
    scanf("%d", &choice);

    if (choice == 0) return;

    if (choice < 1 || choice > count) {
        printf("Invalid choice!\n");
        return;
    }

    printMovie(movies[choice - 1]);
}

/* Genre dispatcher */
void handleGenre(int genre) {
    int running = 1;

    while (running) {
        printLine();
        printf("Select a movie (0 = Back)\n\n");

        switch (genre) {
        case GEN_ROMANCE:
            printMovieList(romance, 5);
            selectMovie(romance, 5);
            break;

        case GEN_ADVENTURE:
            printMovieList(adventure, 5);
            selectMovie(adventure, 5);
            break;

        case GEN_ANIMATED:
            printMovieList(animated, 5);
            selectMovie(animated, 5);
            break;

        case GEN_SHORT:
            printMovieList(shortfilm, 5);
            selectMovie(shortfilm, 5);
            break;

        case GEN_ACTION:
            printMovieList(action, 5);
            selectMovie(action, 5);
            break;

        case GEN_COMEDY:
            printMovieList(comedy, 5);
            selectMovie(comedy, 5);
            break;
        }

        printf("\nPress 1 to stay in this genre, 0 to go back: ");
        scanf("%d", &running);
    }
}

/* Show genre menu */
void showGenreMenu() {
    int choice;

    while (1) {
        printLine();
        printf("🎬 Movie Mate\n");
        printf("by prajwal-sameer\n");
        printLine();

        printf("1. Romance\n");
        printf("2. Adventure\n");
        printf("3. Animated\n");
        printf("4. Short Films\n");
        printf("5. Action\n");
        printf("6. Comedy\n");
        printf("0. Exit\n");

        printf("\nChoose a genre: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: handleGenre(GEN_ROMANCE); break;
        case 2: handleGenre(GEN_ADVENTURE); break;
        case 3: handleGenre(GEN_ANIMATED); break;
        case 4: handleGenre(GEN_SHORT); break;
        case 5: handleGenre(GEN_ACTION); break;
        case 6: handleGenre(GEN_COMEDY); break;
        case 0:
            printf("Goodbye 👋\n");
            return;
        default:
            printf("Invalid choice!\n");
        }
    }
}
/*MAIN FUNCTION*/

int main() {
    printf("🎬 MOVIE MATE 🎬\n");
    printf("by prajwal-sameer\n");
    showGenreMenu();
    return 0;
}

