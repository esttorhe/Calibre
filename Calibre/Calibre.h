//
//  Calibre.h
//  Calibre
//
//  Created by Jeremy Tregunna on 8/31/16.
//  Copyright © 2016 Greenshire, Inc. All rights reserved.
//

#import "TargetConditionals.h"
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

//! Project version number for Calibre.
FOUNDATION_EXPORT double CalibreVersionNumber;

//! Project version string for Calibre.
FOUNDATION_EXPORT const unsigned char CalibreVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Calibre/PublicHeader.h>


