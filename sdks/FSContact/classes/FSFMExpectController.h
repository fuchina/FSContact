//
//  FSFMExpectController.h
//  ShareEconomy
//
//  Created by FudonFuchina on 16/9/10.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import "FSShakeBaseController.h"

@interface FSFMExpectController : FSShakeBaseController

@property (nonatomic,copy) NSString              *accountName;
@property (nonatomic,assign) NSTimeInterval      theEarliestTime;

@end
