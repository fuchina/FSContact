//
//  FSCompanyListController.h
//  myhome
//
//  Created by Fudongdong on 2017/12/21.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSSQLEntity.h"

@interface FSCompanyListController : FSBaseController

@property (nonatomic,copy) NSString     *accountName;
@property (nonatomic,strong) FSSQLEntity    *entity;

@end
