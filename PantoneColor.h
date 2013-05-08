//
//  PantoneColor.h
//
//  Created by Tolga Y. Ozudogru on 5/5/13.
//  Copyright (c) 2013 hetGE. All rights reserved.
//

#import <Foundation/Foundation.h>

#define RGB(r, g, b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1.0f]
#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]


typedef NS_ENUM(NSInteger, pantoneSolidCoatedColor) {
    pantoneSolidCoatedColorWarmGray1C,
    pantoneSolidCoatedColorWarmGray2C,
    pantoneSolidCoatedColorWarmGray3C,
    pantoneSolidCoatedColorWarmGray4C,
    pantoneSolidCoatedColorWarmGray5C,
    pantoneSolidCoatedColorWarmGray6C,
    pantoneSolidCoatedColorWarmGray7C,
    pantoneSolidCoatedColorWarmGray8C,
    pantoneSolidCoatedColorWarmGray9C,
    pantoneSolidCoatedColorWarmGray10C,
    pantoneSolidCoatedColorWarmGray11C,
    pantoneSolidCoatedColorCoolGray1C,
    pantoneSolidCoatedColorCoolGray2C,
    pantoneSolidCoatedColorCoolGray3C,
    pantoneSolidCoatedColorCoolGray4C,
    pantoneSolidCoatedColorCoolGray5C,
    pantoneSolidCoatedColorCoolGray6C,
    pantoneSolidCoatedColorCoolGray7C,
    pantoneSolidCoatedColorCoolGray8C,
    pantoneSolidCoatedColorCoolGray9C,
    pantoneSolidCoatedColorCoolGray10C,
    pantoneSolidCoatedColorCoolGray11C,
    pantoneSolidCoatedColorBlack2C,
    pantoneSolidCoatedColorBlack3C,
    pantoneSolidCoatedColorBlack4C,
    pantoneSolidCoatedColorBlack5C,
    pantoneSolidCoatedColorBlack6C,
    pantoneSolidCoatedColorBlack7C
};


@interface PantoneColor : NSObject

+ (UIColor *)solidCoatedColor:(pantoneSolidCoatedColor)colorIndex;

@end
