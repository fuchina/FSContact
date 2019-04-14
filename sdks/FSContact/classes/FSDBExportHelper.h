//
//  FSDBExportHelper.h
//  myhome
//
//  Created by FudonFuchina on 2017/9/15.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSDBExportHelper : NSObject

+ (NSString *)classForTable:(NSString *)table;

// 处理字段的值
+ (NSString *)hansForModel:(Class)Model field:(NSString *)field value:(NSString *)value;

@end
