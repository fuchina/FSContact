//
//  FSABTrackController.h
//  myhome
//
//  Created by FudonFuchina on 2017/5/22.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSABModel.h"

@interface FSABTrackController : FSBaseController

@property (nonatomic,strong) FSABModel  *model;
@property (nonatomic,copy)   NSString   *type;
@property (nonatomic,copy)   NSString   *table;

@end
