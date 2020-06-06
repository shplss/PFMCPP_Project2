#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 float
 double
 bool
 char
 unsigned int
 void
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int recordingChannels = 16;
    int userAge = 18;
    int midiNote = 60;

    float chVolume = 1.0f;
    float reverbAmount = 0.5f;
    float licensePrice = 19.99f;

    double pi = 3.14159265359;
    double whLatitude = 38.8977;
    double referenceNumber =344.55555555;

    bool includeLowerOctave = false;
    bool toOutput = true;
    bool isPlaying = false;

    char quitApp = 'n';
    char gender = 'u';
    char nameInitial = 's';

    unsigned int progress = 0;
    unsigned int distance = 100;
    unsigned int productAmount = 10;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(recordingChannels, userAge, midiNote, chVolume, reverbAmount, licensePrice, pi, whLatitude, referenceNumber, includeLowerOctave, toOutput, isPlaying, quitApp, gender, nameInitial, progress, distance, productAmount);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void createMixer(int nrOfChannels = 16, char mixerType = 'i')
{
    ignoreUnused(nrOfChannels, mixerType);
}
/*
 2)
 */
float getCurrentTemperature(unsigned int countryCode, char tempUnit = 'c') 
{
    ignoreUnused(countryCode,tempUnit);

    return {};
}
/*
 3)
 */
void spawnPlayer(bool hasWeapons, bool hasPotions, unsigned int progressLocation = 0)
{
    ignoreUnused(hasWeapons, hasPotions, progressLocation);
}
/*
 4)
 */
bool playMidiNote(int midiNote, int midiNoteVel, int midiChannel = 1, int midiProgramGM = 0)
{
    ignoreUnused(midiNote, midiNoteVel, midiChannel, midiProgramGM);

    return {};
}
/*
 5)
 */
float sumTwoNumbers(float number1, float number2)
{
    ignoreUnused(number1, number2);

    return {};
}
/*
 6)
 */
float priceWithTax(float productPrice, float VAT = 21.0f) 
{
    ignoreUnused(productPrice, VAT);

    return {};
}
/*
 7)
 */
int freq2midi(float freqHz) 
{
    ignoreUnused(freqHz);

    return {};
}
/*
 8)
 */
void insertCompressor(int compTypeCode, int channelNr, bool preEQ = true)
{
    ignoreUnused(compTypeCode, channelNr, preEQ);
}
/*
 9)
 */
bool resetChannelFX(int channelNr)
{
    ignoreUnused(channelNr);

    return {};
}
/*
 10)
 */
float linear2dB(float linearVolume)
{
    ignoreUnused(linearVolume);

    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    createMixer();
    //2)
    auto temp = getCurrentTemperature(66, 'f');
    //3)
    spawnPlayer(true, false);
    //4)
    auto playSuccess = playMidiNote(60, 100, 1, 50);
    //5)
    auto sum = sumTwoNumbers(2.5f, 8.9f);
    //6)
    auto retailPrice = priceWithTax(15.8f);
    //7)
    auto midiNote = freq2midi(340);
    //8)
    insertCompressor(5, 6, false);
    //9)
    auto resetSuccess = resetChannelFX(13);
    //10)
    auto dBLevel = linear2dB(0.35f);
    
    ignoreUnused(carRented, temp, playSuccess, sum, retailPrice, midiNote, resetSuccess, dBLevel);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
