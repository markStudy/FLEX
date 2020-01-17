//
//  FLEXObjectExplorerFactory.h
//  Flipboard
//
//  Created by Ryan Olson on 5/15/14.
//  Copyright (c) 2014 Flipboard. All rights reserved.
//

#import "FLEXGlobalsEntry.h"

#ifndef _FLEXObjectExplorerViewController_h
#import "FLEXObjectExplorerViewController.h"
#else
@class FLEXObjectExplorerViewController;
#endif

@interface FLEXObjectExplorerFactory : NSObject <FLEXGlobalsEntry>

+ (FLEXObjectExplorerViewController *)explorerViewControllerForObject:(id)object;

/// Register a specific explorer view controller class to be used when exploring
/// an object of a specific class. Calls will overwrite existing registrations.
/// Sections must be initialized using \c forObject: like
+ (void)registerExplorerSection:(Class)sectionClass forClass:(Class)objectClass;

@end
