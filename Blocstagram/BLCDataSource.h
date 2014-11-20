//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by Ricardo Gonzalez on 10/31/14.
//  Copyright (c) 2014 Ricardo Gonzalez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLCMedia.h"

@interface BLCDataSource : NSObject

+ (instancetype) sharedInstance;
- (void) deleteMediaItem:(BLCMedia *)item;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
