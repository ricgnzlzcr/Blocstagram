//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by Ricardo Gonzalez on 10/31/14.
//  Copyright (c) 2014 Ricardo Gonzalez. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BLCMedia;

typedef void (^BLCNewItemCompletionBlock)(NSError *error);

@interface BLCDataSource : NSObject

+ (instancetype) sharedInstance;
- (void) deleteMediaItem:(BLCMedia *)item;

- (void) requestNewItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
