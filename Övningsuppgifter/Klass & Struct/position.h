#pragma once  // Inkluderingsskydd - den inkluderas bara en g�ng per kompilering, oavsett hur m�nga g�nger den inkluderas.
// Position.h

struct Position {
    double x;
    double y;

    void move(double dx, double dy);   // Flytta punkten
    void print() const;                // Skriv ut positionen
};



