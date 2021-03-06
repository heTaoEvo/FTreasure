//
//  StreetModel.h
//  iLight
//
//  Created by Apple on 15/5/25.
//  Copyright (c) 2015年 linitial. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StreetModel : NSObject

@property (nonatomic) NSString *StreetCode;
@property (nonatomic) NSString *StreetId;
@property (nonatomic) NSString *StreetPinyin;
@property (nonatomic) NSString *StreetName;

- (id)initWithDictionary:(NSDictionary *)dic;

@end
