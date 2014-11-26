//
//  BLCMedia.h
//  Blocstagram
//
//  Created by Ricardo Gonzalez on 10/31/14.
//  Copyright (c) 2014 Ricardo Gonzalez. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCUser;

@interface BLCMedia : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

- (instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;

@end
