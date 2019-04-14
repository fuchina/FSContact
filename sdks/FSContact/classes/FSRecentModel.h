//
//  FSRecentModel.h
//  FSBaseController
//
//  Created by FudonFuchina on 2019/4/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FSRecentModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy) NSString     *recent;
@property (nonatomic,copy) NSString     *name;
@property (nonatomic,copy) NSString     *phone;

@property (nonatomic,copy) NSString     *readableRecentTime;

@end

NS_ASSUME_NONNULL_END
