//
//  FSDetailCell.h
//  Expand
//
//  Created by Fudongdong on 2017/10/31.
//  Copyright © 2017年 china. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSDetailCell : UITableViewCell

- (void)setText:(NSString *)text;
- (void)setTextColor:(UIColor *)color;
@property (nonatomic,copy) void (^clickCallback)(void);

@end
