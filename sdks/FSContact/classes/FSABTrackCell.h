//
//  FSABTrackCell.h
//  myhome
//
//  Created by fudon on 2017/5/24.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSABTrackModel.h"

@interface FSABTrackCell : UITableViewCell

@property (nonatomic,strong) FSABTrackModel     *model;

@property (nonatomic,assign) NSInteger          index;
@property (nonatomic,copy) void (^hCallback)(CGFloat h,NSInteger index);

@end
