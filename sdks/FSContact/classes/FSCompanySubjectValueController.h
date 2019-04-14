//
//  FSCompanySubjectValueController.h
//  myhome
//
//  Created by Fudongdong on 2017/12/21.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSIncomeStatementModel.h"
#import "FSAssetDebtModel.h"

typedef NS_ENUM(NSInteger, FSCompanyAccountType) {
    FSCompanyAccountTypeSR,          // 收入
    FSCompanyAccountTypeCB,          // 成本
    FSCompanyAccountTypeLZ,          // 流动资产
    FSCompanyAccountTypeNZ,          // 非流动资产
    FSCompanyAccountTypeLD,          // 流动负债
    FSCompanyAccountTypeND,          // 非流动负债
    FSCompanyAccountTypeQY,          // 所有者权益
};

@interface FSCompanySubjectValueController : FSBaseController

@property (nonatomic,strong) FSAssetDebtModel           *adEntity;
@property (nonatomic,strong) FSIncomeStatementModel     *isEntity;
@property (nonatomic,assign) FSCompanyAccountType       type;

@property (nonatomic,strong) NSArray    *subjects;

@end
