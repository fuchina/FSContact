//
//  FSBonusModel.h
//  myhome
//
//  Created by FudonFuchina on 2017/11/22.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSBonusModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy) NSString     *time;
@property (nonatomic,copy) NSString     *name;  // 公司
@property (nonatomic,copy) NSString     *year;  // 哪年
@property (nonatomic,copy) NSString     *cash;  // 金额，单位亿元

+ (NSArray<NSString *> *)tableFields;

@end
