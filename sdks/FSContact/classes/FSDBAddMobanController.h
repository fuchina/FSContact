//
//  FSDBAddMobanController.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/6.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSFormModel.h"

@interface FSDBAddMobanController : FSBaseController

@property (nonatomic,strong) FSFormModel  *model;
@property (nonatomic,copy) NSString       *type;
@property (nonatomic,assign) BOOL         editOrSelect; // 操作模式，YES是Edit，否则为选择

@property (nonatomic,copy) void (^callback)(FSDBAddMobanController *bVC,NSString *bText);

@end
