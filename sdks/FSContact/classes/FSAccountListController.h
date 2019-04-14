//
//  FSAccountListController.h
//  myhome
//
//  Created by FudonFuchina on 2017/5/21.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSSQLEntity.h"

@interface FSAccountListController : FSBaseController

@property (nonatomic,copy) NSString     *accountName;
@property (nonatomic,strong) FSSQLEntity    *entity;

@end
