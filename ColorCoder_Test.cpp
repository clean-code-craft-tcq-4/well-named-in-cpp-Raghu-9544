//  color coder Test cases

#include "ColorCoder_Test.hpp"
#include <assert.h>

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajorColor,
    TelCoColorCoder::MinorColor expectedMinorColor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorPairFromPairNumber(pairNumber);
    std::cout << " Pair is " << colorPair.formColorPairString() << std::endl;
    assert(colorPair.getMajorColor() == expectedMajorColor);
    assert(colorPair.getMinorColor() == expectedMinorColor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor pairsMajorColor,
    TelCoColorCoder::MinorColor pairsMinorColor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColorPair(pairsMajorColor, pairsMinorColor);
    std::cout << " Pair number is " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
