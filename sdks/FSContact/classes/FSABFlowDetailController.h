//
//  FSABFlowDetailController.h
//  myhome
//
//  Created by FudonFuchina on 2017/9/12.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import <FSTuple.h>

@interface FSABFlowDetailController : FSBaseController

@property (nonatomic,copy) NSString     *tableName;
@property (nonatomic,strong) Tuple3     *t;

@end
