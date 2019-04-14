//
//  FSSubjectsController.h
//  Expand
//
//  Created by Fudongdong on 2017/11/21.
//  Copyright © 2017年 china. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSBalanceSheetModel.h"

typedef NS_ENUM(NSInteger, FSSubjectMode) {
    FSSubjectModeDefault,          // 显示
    FSSubjectModeAdd,              // 新增
};


@interface FSSubjectsController : UIViewController

@property (nonatomic,assign) FSSubjectMode          mode;
@property (nonatomic,strong) FSBalanceSheetModel    *model;

@end
