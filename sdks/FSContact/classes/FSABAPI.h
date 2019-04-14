//
//  FSABAPI.h
//  myhome
//
//  Created by FudonFuchina on 2018/4/30.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSBaseAPI.h"
#import "FSABModel.h"

@interface FSABAPI : FSBaseAPI

#pragma mark 流水
+ (NSMutableArray<FSABModel *> *)abFlowWithTable:(NSString *)tableName issSR:(BOOL)isSR page:(NSInteger)page start:(NSTimeInterval)start end:(NSTimeInterval)end;

@end
