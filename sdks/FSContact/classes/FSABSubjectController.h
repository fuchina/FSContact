//
//  FSABSubjectController.h
//  myhome
//
//  Created by FudonFuchina on 2017/7/29.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

typedef NS_ENUM(NSInteger, FSABSubjectType) {
    FSABSubjectTypeProfitStatement = 0,     // 利润表
    FSABSubjectTypeAssets = 3,              // 资产项
    FSABSubjectTypeDebt,                    // 负债表
    FSABSubjectTypeOwnersEquity,            // 所有者权益
};

@interface FSABSubjectController : FSBaseController

@property (nonatomic,assign) FSABSubjectType    type;

@end
