#ifndef SPACENAV_BUTTONS_CONFIG_H
#define SPACENAV_BUTTONS_CONFIG_H

#include <unordered_map>

/**
 * @brief Mapping of SpaceNav button codes to unique identifiers.
 * @author Suresh Kondepudi
 *
 * The SpaceNav button codes are mapped to unique identifiers for easier
 * reference and usage in the application.
 */

const std::unordered_map<int, int> spacenav_button_map = {
    {0, 0},    // MENU
    {1, 1},    // FIT
    {23, 2},   // ALT
    {25, 3},   // CTRL
    {24, 4},   // SHIFT
    {22, 5},   // ESC
    {12, 6},   // 1
    {13, 7},   // 2
    {14, 8},   // 3
    {15, 9},   // 4
    {8, 10},   // SQUARE
    {2, 11},   // T
    {5, 12},   // F
    {4, 13},   // R
    {26, 14},  // SPIN
};


#endif  // SPACENAV_BUTTONS_CONFIG_H