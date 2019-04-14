//
//  FSDBMobanController.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/4.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSDBMobanController : FSBaseController

@property (nonatomic,copy) NSString     *type;  // 1.个人 2.公司
@property (nonatomic,copy) NSString     *account;

@end
