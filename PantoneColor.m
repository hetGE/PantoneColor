//
//  PantoneColor.m
//
//  Created by Tolga Y. Ozudogru on 5/5/13.
//  Copyright (c) 2013 hetGE. All rights reserved.
//

#import "PantoneColor.h"

@implementation PantoneColor

+ (UIColor *)solidCoatedColor:(pantoneSolidCoatedColor)colorIndex
{
    NSArray *colors = @[
                     RGB(215.0f, 210.0f, 203.0f),
                     RGB(203.0f, 196.0f, 189.0f),
                     RGB(192.0f, 184.0f, 176.0f),
                     RGB(182.0f, 173.0f, 165.0f),
                     RGB(173.0f, 163.0f, 155.0f),
                     RGB(166.0f, 156.0f, 149.0f),
                     RGB(151.0f, 140.0f, 132.0f),
                     RGB(141.0f, 130.0f, 122.0f),
                     RGB(132.0f, 120.0f, 112.0f),
                     RGB(122.0f, 110.0f, 102.0f),
                     RGB(111.0f, 98.0f, 90.0f),
                     RGB(217.0f, 217.0f, 215.0f),
                     RGB(208.0f, 208.0f, 206.0f),
                     RGB(201.0f, 201.0f, 200.0f),
                     RGB(187.0f, 188.0f, 188.0f),
                     RGB(178.0f, 178.0f, 179.0f),
                     RGB(167.0f, 168.0f, 170.0f),
                     RGB(151.0f, 153.0f, 155.0f),
                     RGB(137.0f, 139.0f, 142.0f),
                     RGB(118.0f, 120.0f, 123.0f),
                     RGB(99.0f, 102.0f, 106.0f),
                     RGB(83.0f, 86.0f, 90.0f),
                     RGB(51.0f, 46.0f, 33.0f),
                     RGB(33.0f, 39.0f, 34.0f),
                     RGB(49.0f, 38.0f, 29.0f),
                     RGB(63.0f, 43.0f, 46.0f),
                     RGB(16.0f, 24.0f, 32.0f),
                     RGB(61.0f, 57.0f, 53.0f),
                     ];
    return [colors objectAtIndex:colorIndex];
}

@end
