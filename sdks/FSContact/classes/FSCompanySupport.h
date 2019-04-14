//
//  FSCompanySupport.h
//  myhome
//
//  Created by FudonFuchina on 2017/12/20.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FSTuple.h>
#import "FSAssetDebtModel.h"
#import "FSIncomeStatementModel.h"

@interface FSCompanySupport : NSObject

+ (Tuple2 *)assetDebtModel:(NSString *)account;

+ (NSArray<Tuple2 *> *)subjectsAtIndex:(NSInteger)index;

+ (NSString *)messageForSubjects:(NSArray<Tuple3 *> *)subjects;

+ (void)handleDatas:(NSArray<Tuple3 *> *)handleArray account:(NSString *)account date:(NSDate *)date je:(NSString *)je bz:(NSString *)bz controller:(UIViewController *)controller completion:(void(^)(void))completion;

@end
