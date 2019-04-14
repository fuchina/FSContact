//
//  FSBonusController.h
//  myhome
//
//  Created by FudonFuchina on 2017/11/22.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSBonusModel.h"

@interface FSBonusController : FSBaseController

@property (nonatomic,copy) NSString     *name;
@property (nonatomic,strong) FSBonusModel   *model;

@end
