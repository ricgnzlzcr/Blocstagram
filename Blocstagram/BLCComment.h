//
//  BLCComment.h
//  Blocstagram
//
//  Created by Ricardo Gonzalez on 10/31/14.
//  Copyright (c) 2014 Ricardo Gonzalez. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BLCUser;

@interface BLCComment : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) BLCUser *from;
@property (nonatomic, strong) NSString *text;

- (instancetype) initWithDictionary:(NSDictionary *)commentDictionary;

@end
