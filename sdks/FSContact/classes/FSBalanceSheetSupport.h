//
//  FSBalanceSheetSupport.h
//  Expand
//
//  Created by Fudongdong on 2017/11/21.
//  Copyright © 2017年 china. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSBalanceSheetModel.h"

@interface FSBalanceSheetSupport : NSObject

+ (void)addBalanceSheet:(FSBalanceSheetModel *)_model controller:(UIViewController *)controller completion:(void(^)(void))comp;

@end
