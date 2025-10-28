#pragma once  // Inkluderingsskydd - den inkluderas bara en gång per kompilering, oavsett hur många gånger den inkluderas.
// Position.h

struct Position {
    double x;
    double y;

    void move(double dx, double dy);   // Flytta punkten
    void print() const;                // Skriv ut positionen
};



