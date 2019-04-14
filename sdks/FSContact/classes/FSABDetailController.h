//
//  FSABDetailController.h
//  myhome
//
//  Created by FudonFuchina on 2017/5/21.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSShakeBaseController.h"
#import "FSABModel.h"

@interface FSABDetailController : FSShakeBaseController

@property (nonatomic,copy) NSString     *accountName;
@property (nonatomic,copy) NSString     *je;
@property (nonatomic,copy) NSString     *bz;
@property (nonatomic,copy) NSString     *type;
@property (nonatomic,copy) void (^selectBlock)(FSABDetailController *bController,NSArray<FSABModel *> *bEdArray,NSArray<FSABModel *> *bAddArray);

@end
