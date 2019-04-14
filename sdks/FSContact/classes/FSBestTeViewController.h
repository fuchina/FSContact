//
//  FSBestTeViewController.h
//  FBRetainCycleDetector
//
//  Created by FudonFuchina on 2019/3/3.
//

#import "FSBaseController.h"
#import "FSBestMobanModel.h"

@interface FSBestTeViewController : FSBaseController

@property (nonatomic,copy) NSString     *table;
@property (nonatomic,copy) NSString     *te;
@property (nonatomic,assign) BOOL       isEditMode;
@property (nonatomic,copy) void (^selectedNext)(FSBestTeViewController *controller,FSBestMobanModel *model);

@end
