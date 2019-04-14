//
//  FSCompanyAddDataController.h
//  Expand
//
//  Created by Fudongdong on 2017/12/20.
//  Copyright © 2017年 china. All rights reserved.
//

#import "FSBaseController.h"
#import <FSTuple.h>

@interface FSCompanyAddDataController : FSBaseController

@property (nonatomic,copy)   NSString              *accountName;
@property (nonatomic,strong) NSArray<Tuple2 *>     *subjects;

@property (nonatomic,copy) void (^selectType)(FSCompanyAddDataController *c,Tuple2 *t,BOOL isAdd);

@end
