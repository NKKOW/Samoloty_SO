#include "global.h"

// Istniejące definicje
volatile sig_atomic_t stopBoarding = 0;

// Semafory do schodów
sem_t stairsSemNormal; 
sem_t stairsSemVip;

// Mutex i warunki dla pasażerów
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t samolotCond = PTHREAD_COND_INITIALIZER;

// Liczniki pasażerów
int capacityNormal = K;    // Initialize to K
int capacityVip = K;       // Initialize to K
int licznik_pasazer = 0;   // Initialize to 0

// Semafor do wagi bagażowej
sem_t bagaz_wagaSem;

// Nowe zmienne do śledzenia pasażerów na schodach
int passengers_on_stairs = 0;
pthread_mutex_t stairsMutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t stairsCond = PTHREAD_COND_INITIALIZER;
