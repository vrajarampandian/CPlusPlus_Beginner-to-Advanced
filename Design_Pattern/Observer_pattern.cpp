#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

//Observer Interface
class Observer
{
    public:
    virtual void update(const string &weather) = 0;
    virtual ~Observer() {}
};
//Subject Interface
class Subject
{
    public:
    virtual void addObserver(Observer *obs) = 0;
    virtual void removeObserver(Observer * obs) = 0;
    virtual void notifyObservers() = 0;
    virtual ~Subject() {}
};

//Concrete Subject

class WeatherStation : public Subject
{
    private:
        vector<Observer*> vobs;
        string weather;
    public:
        void addObserver(Observer *obs) override {
            vobs.push_back(obs);
        }

        void removeObserver(Observer *obs) override {
            vobs.erase(remove(vobs.begin(), vobs.end(), obs), vobs.end());
        }

        void notifyObservers() override {
            for (auto o : vobs)
            {
                o->update(weather);
            }
        }

        void setWeather(const string &newweather) {
            weather = newweather;
            notifyObservers();
        }
};

//Concrete Observer - Phone Display
class PhoneDisplay : public Observer
{
    private:
        string weather;
    public:
        void update(const string& newweather) override {
            weather = newweather;
            display();
        }

        void display()
        {
            cout << "Phone Display: weather is " << weather << endl;
        }
};

//Concrete Observer - TV Display
class TVDisplay : public Observer
{
    private:
        string weather;
    public:
        void update(const string& newweather) override {
            weather = newweather;
            display();
        }

        void display()
        {
            cout << "TV Display: weather is " << weather << endl;
        }
};


int main()
{
    WeatherStation station;
    PhoneDisplay phone;
    TVDisplay tv;

    station.addObserver(&phone);
    station.addObserver(&tv);

    station.setWeather("Sunny");
    station.setWeather("Rainy");
    return 0;
}