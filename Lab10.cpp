/*
Mohammad Hossain
Instructor: Minh Nyugen
4/23/22
time.cpp
Lab 10A-E
*/
#include <iostream>
using namespace std;
//Copied from instructions:
class Time{
public:
    int h;
    int m;
};

//Part C, D, E: Copied from instructions
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

//Part A: return the number of minutes from 00:00 (12:99 am) until current time.
int minutesSinceMidnight(Time time){
//Ex: 00:00 -> 17:45 (5:45 PM) => 17*60 + 45 = 1065 minutes between 00:00 and 17:45.
//first convert 17 hours to minutes: 17*60 = 1020 minutes, then 1020 + 45 mins = 1065 mins
    int num_of_mins = time.h*60 + time.m;
    return num_of_mins;
}
//Part A: Report how many minutes separate the two moments 'earlier' and 'later'.
int minutesUntil(Time earlier, Time later){
//Ex: 10:45 -> 17:30 (5:30 PM)
//Convert (17-10) hours to minues: (17-10) * 60 = 420, then 420 + (30-45) = 420 + (-15) = 405 mins. So 405 min between 10:45 and 17:30
    int num_of_mins = (later.h - earlier.h) * 60 + (later.m - earlier.m);
    return num_of_mins;
}

//Part B: create and return a new moment of time that is min minutes after time0
//Ex: 17:45 + 150 mins. First, convert 150 min to the format of the hours and mins. 150 = 2 hours and 30 mins
//2 hours = 150/60, 30 = 150 % 60 (get the remainder)
//New time hour: 17+2 = 19; new time minute 45+30 = 75 mins = 1 hour and 15 mins.
//New time hour: 19+1 = 20; new time minue = 15 => new time = 20:15.
Time addMinutes(Time time0, int min){
    Time new_time;
    new_time.h = time0.h + (time0.m+min)/60;
    new_time.m = (time0.m+min)%60;
    return new_time;
}

//Part C: Copied from instructions
void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}
//Part C:
void printTimeSlot(TimeSlot ts){
    //Calculate the ending time:
    Time endingTime = addMinutes(ts.startTime, ts.movie.duration);

    //Use the given function printMovie to print out the first part of the output, which is movie title, movie genre, and its duration.
    printMovie(ts.movie);

    //We need to print out the second part, which is the startinbg time and the ending time.
    cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by " << endingTime.h << ":" << endingTime.m << "]" << endl;
}

//Part D: function should produce and return a new TimeSlot for the movie nextMovie, scheduled immediately after the time slot ts.
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot nextTimeSlot;
    //Since nextTimeSlot is TimeSlot type, We have to determine its 2 members:
    nextTimeSlot.movie = nextMovie;
    //Starting time of nextTimeSlot:
    nextTimeSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return nextTimeSlot;
}

//Part E: Function should return true if two timeslots overlapse, otherwise, return false
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    //First, we need to make sure which one is earlier (ts1 or ts2).
    if(minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(ts2.startTime)){
        return ts1.movie.duration > (minutesSinceMidnight(ts2.startTime)-minutesSinceMidnight(ts1.startTime));
    }
    else{
        return ts2.movie.duration > (minutesSinceMidnight(ts1.startTime)-minutesSinceMidnight(ts2.startTime));
    }
}

int main(){
    Time time1, time2;
    /*//Part A:
    cout << "Enter first time: " << endl;
    cin >> time1.h >> time1.m;
    cout << "Enter the second time: " << endl;
    cin >> time1.h >> time2.m;

    //For classes, you cannot do it this way: cin >> time1 or cout << time1. Has to be done like the above^^
    cout << "Number of minutes between " << time1.h << ":" << time1.m << " and " << time2.h << ":" << time2.m << " is " << minutesUntil(time1, time2) << endl;
    */

    /*//Part B:
    cout << "Enter first time: " << endl;
    cin >> time1.h >> time1.m;
    time2 = addMinutes(time1, 150);
    //Create something similar to Part A
    cout << "Some text goes here..." << time2.h << ":" << time2.m << endl;
    */
    //Part C:
    //movie 1 and movie2 copied from instructions:
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    //We can add 2 more movies:
    Movie movie3 = {"Movie X", DRAMA, 180};
    Movie movie4 = {"Movie Z", ROMANCE, 200};
    /*
    //Time slots morning, daytime, evening copied from the instructions:
    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie3, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}};
    */
    //Part E:
    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie3, {16, 45}};   

    TimeSlot daytime2 = {movie1, {14, 28}};

    //We can add 2 more time slots:
    TimeSlot afternoon = {movie4, {14, 30}};
    TimeSlot late = {movie3, {23, 45}};

    cout << timeOverlap(daytime, daytime2) << endl;

    //Part D:
    TimeSlot nextTimeSlot;
    nextTimeSlot = scheduleAfter(morning, movie2);
    printTimeSlot(nextTimeSlot);

    //Part C: Call the function to print out the time slot info.    
    printTimeSlot(morning);
    printTimeSlot(daytime);
    printTimeSlot(afternoon);
    printTimeSlot(evening);
    printTimeSlot(late);
}
