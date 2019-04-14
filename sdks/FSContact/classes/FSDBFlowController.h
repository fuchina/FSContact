//
//  FSDBFlowController.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/29.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSShakeBaseController.h"

@interface FSDBFlowController : FSShakeBaseController

@property (nonatomic,copy) NSString             *tableName;
@property (nonatomic,assign) NSTimeInterval     firstTime;

@end
